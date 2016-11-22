
# Copyright (C) 2013-2014 LiuLang <gsushzhsosgsu@gmail.com>

# Use of this source code is governed by GPLv3 license that can be found
# in the LICENSE file.

import sys
import time

from gi.repository import Gdk
from gi.repository import GdkPixbuf
from gi.repository import GLib
from gi.repository import GObject
from gi.repository import Gtk

from kuwo import Config
from kuwo import Net
from kuwo.Preferences import Preferences
from kuwo.PlayerBin import PlayerBin
from kuwo.PlayerDBus import PlayerDBus
from kuwo.PlayerNotify import PlayerNotify
from kuwo import Widgets
from kuwo.log import logger

_ = Config._
# Gdk.EventType.2BUTTON_PRESS is an invalid variable
GDK_2BUTTON_PRESS = 5
#ICON_SIZE = Gtk.IconSize.LARGE_TOOLBAR
ICON_SIZE = Gtk.IconSize.DND


class PlayType:
    NONE = -1
    SONG = 0
    RADIO = 1
    MV = 2

class RepeatType:
    NONE = 0
    ALL = 1
    ONE = 2

def delta(nanosec_float):
    _seconds = nanosec_float // 10**9
    mm, ss = divmod(_seconds, 60)
    hh, mm = divmod(mm, 60)
    if hh == 0:
        s = '%d:%02d' % (mm, ss)
    else:
        s = '%d:%02d:%02d' % (hh, mm, ss)
    return s


class Player(Gtk.Box):
    def __init__(self, app):
        super().__init__()
        self.app = app

        self.play_type = PlayType.NONE
        self.adj_timeout = 0
        self.recommend_imgs = None
        self.curr_song = None
        self.fullscreen_sid = 0
        self.fullscreen_timestamp = 0
        self.default_cursor = None
        self.blank_cursor = Gdk.Cursor.new(Gdk.CursorType.BLANK_CURSOR)

        # use this to keep Net.AsyncSong object
        self.async_song = None
        self.async_next_song = None

        event_pic = Gtk.EventBox()
        event_pic.connect('button-press-event', self.on_pic_pressed)
        self.pack_start(event_pic, False, False, 0)

        self.artist_pic = Gtk.Image.new_from_pixbuf(Config.ANONYMOUS_PIXBUF)
        event_pic.add(self.artist_pic)

        control_box = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
        self.pack_start(control_box, True, True, 0)

        toolbar = Gtk.Toolbar()
        toolbar.set_style(Gtk.ToolbarStyle.ICONS)
        toolbar.get_style_context().add_class(Gtk.STYLE_CLASS_MENUBAR)
        toolbar.set_show_arrow(False)
        toolbar.set_icon_size(ICON_SIZE)
        control_box.pack_start(toolbar, False, False, 0)

        prev_button = Gtk.ToolButton()
        prev_button.set_label(_('Previous'))
        prev_button.set_icon_name('media-skip-backward-symbolic')
        prev_button.connect('clicked', self.on_prev_button_clicked)
        toolbar.insert(prev_button, 0)

        self.playback_action = Gtk.ToggleAction('playback-action', _('Play'),
                                                _('Play'), None)
        self.playback_action.set_icon_name('media-playback-start-symbolic')
        self.playback_action.set_label(_('Play'))
        self.playback_action.set_active(False)
        self.playback_action.connect('toggled', self.on_playback_action_toggled)

        play_button = Gtk.ToolButton()
        play_button.props.related_action = self.playback_action
        toolbar.insert(play_button, 1)

        next_button = Gtk.ToolButton()
        next_button.set_label(_('Next'))
        next_button.set_icon_name('media-skip-forward-symbolic')
        next_button.connect('clicked', self.on_next_button_clicked)
        toolbar.insert(next_button, 2)

        self.shuffle_btn = Gtk.ToggleToolButton()
        self.shuffle_btn.set_label(_('Shuffle'))
        self.shuffle_btn.set_icon_name('media-playlist-shuffle-symbolic')
        self.shuffle_btn.props.margin_left = 10
        toolbar.insert(self.shuffle_btn, 3)

        self.repeat_type = RepeatType.NONE
        self.repeat_btn = Gtk.ToggleToolButton()
        self.repeat_btn.set_label(_('Repeat'))
        self.repeat_btn.set_icon_name('media-playlist-repeat-symbolic')
        self.repeat_btn.connect('clicked', self.on_repeat_button_clicked)
        toolbar.insert(self.repeat_btn, 4)

        self.use_audio_btn = Gtk.RadioToolButton()
        self.use_audio_btn.set_label(_('Play audio'))
        self.use_audio_btn.set_icon_name('audio-x-generic-symbolic')
        self.use_audio_btn.props.margin_left = 10
        self.use_audio_btn.set_active(True)
        self.use_audio_sid = self.use_audio_btn.connect('toggled',
                self.on_play_type_toggled, PlayType.SONG)
        toolbar.insert(self.use_audio_btn, 5)

        self.use_mtv_btn = Gtk.RadioToolButton()
        self.use_mtv_btn.set_label(_('Play MTV'))
        self.use_mtv_btn.set_tooltip_text(_('Play MTV'))
        self.use_mtv_btn.set_icon_name('video-x-generic-symbolic')
        self.use_mtv_btn.set_sensitive(False)
        self.use_mtv_btn.props.group = self.use_audio_btn
        self.use_mtv_sid = self.use_mtv_btn.connect('toggled',
                self.on_play_type_toggled, PlayType.MV)
        toolbar.insert(self.use_mtv_btn, 6)

        self.fullscreen_btn = Gtk.ToggleToolButton()
        self.fullscreen_btn.set_label(_('Fullscreen'))
        self.fullscreen_btn.set_icon_name('view-fullscreen-symbolic')
        self.fullscreen_btn.props.margin_left = 10
        self.fullscreen_btn.connect('toggled',
                self.on_fullscreen_button_toggled)
        toolbar.insert(self.fullscreen_btn, 7)
        self.app.window.connect('key-press-event', self.on_window_key_pressed)

        self.favorite_btn = Gtk.ToolButton()
        self.favorite_btn.set_label(_('Favorite'))
        self.favorite_btn.set_icon_name('emblem-favorite-symbolic')
        self.favorite_btn.set_tooltip_text(_('Add to Favorite playlist'))
        self.favorite_btn.props.margin_left = 10
        self.favorite_btn.connect('clicked', self.on_favorite_btn_clicked)
        toolbar.insert(self.favorite_btn, 8)

        osd_lrc_btn = Gtk.ToggleToolButton()
        osd_lrc_btn.props.related_action = self.app.osdlrc.show_window_action
        toolbar.insert(osd_lrc_btn, 9)

        # control menu
        menu_tool_item = Gtk.ToolItem()
        toolbar.insert(menu_tool_item, 10)
        toolbar.child_set_property(menu_tool_item, 'expand', True)
        main_menu = Gtk.Menu()
        pref_item = Gtk.MenuItem(label=_('Preferences'))
        pref_item.connect('activate', self.on_main_menu_pref_activate)
        main_menu.append(pref_item)
        sep_item = Gtk.SeparatorMenuItem()
        main_menu.append(sep_item)

        show_osd_item = Gtk.MenuItem()
        show_osd_item.props.related_action = self.app.osdlrc.show_window_action
        main_menu.append(show_osd_item)
        lock_osd_item = Gtk.MenuItem()
        lock_osd_item.props.related_action = self.app.osdlrc.lock_window_action
        main_menu.append(lock_osd_item)

        sep_item = Gtk.SeparatorMenuItem()
        main_menu.append(sep_item)
        about_item = Gtk.MenuItem(label=_('About'))
        about_item.connect('activate', self.on_main_menu_about_activate)
        main_menu.append(about_item)
        quit_item = Gtk.MenuItem(label=_('Quit'))
        key, mod = Gtk.accelerator_parse('<Ctrl>Q')
        quit_item.add_accelerator('activate', app.accel_group, key, mod,
                                  Gtk.AccelFlags.VISIBLE)
        quit_item.connect('activate', self.on_main_menu_quit_activate)
        main_menu.append(quit_item)
        main_menu.show_all()
        menu_image = Gtk.Image()
        menu_image.set_from_icon_name('view-list-symbolic', ICON_SIZE)
        if Config.GTK_LE_36:
            menu_btn = Gtk.Button()
            menu_btn.connect('clicked', self.on_main_menu_button_clicked,
                             main_menu)
        else:
            menu_btn = Gtk.MenuButton()
            menu_btn.set_popup(main_menu)
            menu_btn.set_always_show_image(True)
        menu_btn.props.halign = Gtk.Align.END
        menu_btn.props.relief = Gtk.ReliefStyle.NONE
        menu_btn.set_image(menu_image)
        menu_tool_item.add(menu_btn)

        self.label = Gtk.Label(
                '<b>{0}</b> <small>{0}</small>'.format(_('Unknown')))
        self.label.props.use_markup = True
        self.label.props.xalign = 0
        self.label.props.margin_left = 10
        control_box.pack_start(self.label, False, False, 0)

        scale_box = Gtk.Box(spacing=3)
        scale_box.props.margin_left = 5
        control_box.pack_start(scale_box, True, False, 0)

        self.scale = Gtk.Scale()
        self.adjustment = Gtk.Adjustment(0, 0, 100, 1, 10, 0)
        self.adjustment.connect('changed', self.on_adjustment_changed)
        self.scale.set_adjustment(self.adjustment)
        self.scale.set_show_fill_level(False)
        self.scale.set_restrict_to_fill_level(False)
        self.scale.props.draw_value = False
        self.scale.connect('change-value', self.on_scale_change_value)
        scale_box.pack_start(self.scale, True, True, 0)

        self.time_label = Gtk.Label('0:00/0:00')
        scale_box.pack_start(self.time_label, False, False, 0)

        self.volume = Gtk.VolumeButton()
        self.volume.props.use_symbolic = True
        self.volume.set_value(app.conf['volume'] ** 0.33)
        self.volume_sid = self.volume.connect('value-changed',
                                              self.on_volume_value_changed)
        scale_box.pack_start(self.volume, False, False, 0)

        # init playbin and dbus
        self.playbin = PlayerBin()
        self.playbin.set_volume(self.app.conf['volume'] ** 0.33)
        self.playbin.connect('eos', self.on_playbin_eos)
        self.playbin.connect('error', self.on_playbin_error)
        self.playbin.connect('mute-changed', self.on_playbin_mute_changed)
        self.playbin.connect('volume-changed', self.on_playbin_volume_changed)
        self.dbus = PlayerDBus(self)
        self.notify = PlayerNotify(self)

    def after_init(self):
        self.init_meta()

    def do_destroy(self):
        self.playbin.destroy()
        if self.async_song:
            self.async_song.destroy()
        if self.async_next_song:
            self.async_next_song.destroy()

    def load(self, song):
        self.play_type = PlayType.SONG
        self.curr_song = song
        self.update_favorite_button_status()
        self.stop_player()
        self.use_audio_btn.handler_block(self.use_audio_sid)
        self.use_audio_btn.set_active(True)
        self.use_audio_btn.handler_unblock(self.use_audio_sid)
        self.create_new_async(song)

    def create_new_async(self, *args, **kwds):
        self.scale.set_fill_level(0)
        self.scale.set_show_fill_level(True)
        self.scale.set_restrict_to_fill_level(True)
        self.adjustment.set_lower(0.0)
        self.adjustment.set_upper(100.0)
        if self.async_song:
            self.async_song.destroy()
        self.async_song = Net.AsyncSong(self.app)
        self.async_song.connect('chunk-received', self.on_chunk_received)
        self.async_song.connect('can-play', self.on_song_can_play)
        self.async_song.connect('downloaded', self.on_song_downloaded)
        self.async_song.connect('disk-error', self.on_song_disk_error)
        self.async_song.connect('network-error', self.on_song_network_error)
        self.async_song.get_song(*args, **kwds)

    def on_chunk_received(self, widget, percent):
        def _update_fill_level():
            self.scale.set_fill_level(percent * self.adjustment.get_upper())
        GLib.idle_add(_update_fill_level)

    def on_song_disk_error(self, widget, song_path):
        '''Disk error: occurs when disk is not available.'''
        GLib.idle_add(Widgets.filesystem_error, self.app.window, song_path)
        self.stop_player_cb()

    def on_song_network_error(self, widget, song_link):
        '''Failed to get source link, or failed to download song'''
        self.stop_player_cb()
        if self.play_type == PlayType.MV:
            msg = _('Failed to download MV')
        elif self.play_type in (PlayType.SONG, PlayType.RADIO):
            msg = _('Failed to download song')
        GLib.idle_add(Widgets.network_error, self.app.window, msg)
        self.stop_player_cb()

    def on_song_can_play(self, widget, song_path):
        def _on_song_can_play():
            uri = 'file://' + song_path
            self.meta_url = uri

            if self.play_type in (PlayType.SONG, PlayType.RADIO):
                self.app.lrc.show_music()
                self.playbin.load_audio(uri)
                self.get_lrc()
                self.get_recommend_lists()
            elif self.play_type == PlayType.MV:
                self.use_mtv_btn.set_sensitive(True)
                self.app.lrc.show_mv()
                self.playbin.load_video(uri, self.app.lrc.xid)

            self.playback_action.set_active(True)
            self.playbin.set_volume(self.app.conf['volume'])
            self.init_meta()
            GLib.timeout_add(1500, self.init_adjustment)

            self.update_player_info()
            if self.play_type == PlayType.SONG:
                if self.curr_song.get('formats', ''):
                    self.use_mtv_btn.set_sensitive(
                            'MP4' in self.curr_song['formats'])
                else:
                    # for v3.4.7, remove this in v3.6.1
                    self.get_mv_link()
        GLib.idle_add(_on_song_can_play)

    def on_song_downloaded(self, widget, song_path):
        def _on_song_download():
            self.async_song.destroy()
            self.async_song = None
            self.scale.set_fill_level(self.adjustment.get_upper())
            self.scale.set_show_fill_level(False)
            self.scale.set_restrict_to_fill_level(False)
            self.init_adjustment()
            if self.play_type in (PlayType.SONG, PlayType.MV):
                self.app.playlist.on_song_downloaded(play=True)
                self.next_song = self.app.playlist.get_next_song(
                        self.repeat_btn.get_active(),
                        self.shuffle_btn.get_active())
            elif self.play_type == PlayType.RADIO:
                self.next_song = self.curr_radio_item.get_next_song()
            if self.next_song:
                self.cache_next_song()
            # update metadata in dbus
            self.dbus.update_meta()
            self.dbus.enable_seek()

        GLib.idle_add(_on_song_download)

    def cache_next_song(self):
        if self.play_type == PlayType.MV:
            use_mv = True
        elif self.play_type in (PlayType.SONG, PlayType.RADIO):
            use_mv = False
        if self.async_next_song:
            self.async_next_song.destroy()
        self.async_next_song = Net.AsyncSong(self.app)
        self.async_next_song.get_song(self.next_song, use_mv=use_mv)

    def init_adjustment(self):
        self.adjustment.set_value(0.0)
        self.adjustment.set_lower(0.0)
        # when song is not totally downloaded but can play, query_duration
        # might give incorrect/inaccurate result.
        status, duration = self.playbin.get_duration()
        if status and duration > 0:
            self.adjustment.set_upper(duration)
            return False
        return True

    def sync_adjustment(self):
        status, offset = self.playbin.get_position()
        if not status:
            return True

        self.dbus.update_pos(offset // 1000)

        status, duration = self.playbin.get_duration()
        self.adjustment.set_value(offset)
        self.adjustment.set_upper(duration)
        self.sync_label_by_adjustment()
        if offset >= duration - 800000000:
            self.load_next()
            return False
        if self.play_type == PlayType.MV:
            return True
        self.app.lrc.sync_lrc(offset)
        if self.recommend_imgs:
            # change lyrics background image every 20 seconds
            div, mod = divmod(int(offset / 10**9), 20)
            if mod == 0:
                div2, mod2 = divmod(div, len(self.recommend_imgs))
                self.update_lrc_background(self.recommend_imgs[mod2])
        return True

    def sync_label_by_adjustment(self):
        curr = delta(self.adjustment.get_value())
        total = delta(self.adjustment.get_upper())
        self.time_label.set_label('{0}/{1}'.format(curr, total))

    # Control panel
    def on_pic_pressed(self, eventbox, event):
        if event.type == GDK_2BUTTON_PRESS and self.play_type == PlayType.SONG:
            self.app.playlist.locate_curr_song()

    def on_prev_button_clicked(self, button):
        self.load_prev()

    def on_playback_action_toggled(self, action):
        if self.play_type == PlayType.NONE:
            return
        if action.get_active():
            self.start_player()
        else:
            self.pause_player()

    def on_next_button_clicked(self, button):
        self.load_next()

    def on_repeat_button_clicked(self, button):
        if self.repeat_type == RepeatType.NONE:
            self.repeat_type = RepeatType.ALL
            button.set_active(True)
            button.set_icon_name('media-playlist-repeat-symbolic')
        elif self.repeat_type == RepeatType.ALL:
            self.repeat_type = RepeatType.ONE
            button.set_active(True)
            button.set_icon_name('media-playlist-repeat-song-symbolic')
        elif self.repeat_type == RepeatType.ONE:
            self.repeat_type = RepeatType.NONE
            button.set_active(False)
            button.set_icon_name('media-playlist-repeat-symbolic')

    def on_scale_change_value(self, scale, scroll_type, value):
        self.app.lrc.reset_tags()
        self.seek_cb(value)

    def on_volume_value_changed(self, volume_button, volume):
        self.playbin.set_volume(volume ** 3)
        self.app.conf['volume'] = volume ** 3
        if self.playbin.get_mute():
            self.playbin.set_mute(False)

    def update_player_info(self):
        def _update_pic(info, error=None):
            if not info or error:
                logger.error('update_player_info(): %s, %s' % (info, error))
                return
            self.artist_pic.set_tooltip_text(
                    Widgets.short_tooltip(info['info'], length=500))
            if info['pic']:
                self.meta_artUrl = info['pic']
                pix = GdkPixbuf.Pixbuf.new_from_file_at_size(info['pic'],
                                                             100, 100)
                self.artist_pic.set_from_pixbuf(pix)
            else:
                self.meta_artUrl = Config.ANONYMOUS_IMG
            self.notify.refresh()
            self.dbus.update_meta()
            
        song = self.curr_song
        name = Widgets.short_tooltip(song['name'], 45)
        if song['artist']:
            artist = Widgets.short_tooltip(song['artist'], 20)
        else:
            artist = _('Unknown')
        if song['album']:
            album = Widgets.short_tooltip(song['album'], 30)
        else:
            album = _('Unknown')
        label = '<b>{0}</b> <small>{1}</small> <span size="x-small">{2}</span>'.format(
                name, artist, album)
        self.label.set_label(label)
        self.app.window.set_title(name)
        self.artist_pic.set_from_pixbuf(Config.ANONYMOUS_PIXBUF)
        Net.async_call(Net.get_artist_info, song['artistid'], song['artist'],
                       callback=_update_pic)

    def get_lrc(self):
        def _update_lrc(lrc_text, error=None):
            if error:
                logger.error('get_lrc(): %s', error)
            self.app.lrc.set_lrc(lrc_text)

        Net.async_call(Net.get_lrc, self.curr_song, callback=_update_lrc)

    def get_recommend_lists(self):
        self.recommend_imgs = None
        def _on_list_received(imgs, error=None):
            if error or not imgs or len(imgs) < 10:
                logger.debug('get_recommend_lists(): %s, %s' % (imgs, error))
                self.recommend_imgs = None
            else:
                self.recommend_imgs = imgs.strip().splitlines()

        Net.async_call(Net.get_recommend_lists, self.curr_song['artist'],
                       callback=_on_list_received)

    def update_lrc_background(self, url):
        def _update_background(filepath, error=None):
            if error or not filepath:
                logger.error('update_lrc_background(): %s, %s' %
                             (filepath, error))
                return
            self.app.lrc.update_background(filepath)

        Net.async_call(Net.get_recommend_image, url,
                       callback=_update_background)

    # Radio part
    def load_radio(self, song, radio_item):
        '''Load Radio song.

        song from radio, only contains name, artist, rid, artistid
        Remember to update its information.
        '''
        self.play_type = PlayType.RADIO
        self.stop_player()
        self.curr_radio_item = radio_item
        self.curr_song = song
        self.update_favorite_button_status()
        self.create_new_async(song)

    # MV part
    def on_play_type_toggled(self, toggle_button, play_type):
        if (not toggle_button.get_active() or not self.curr_song or
                self.play_type == PlayType.NONE):
            return
        elif play_type == PlayType.SONG or play_type == PlayType.RADIO:
            self.app.lrc.show_music()
            self.load(self.curr_song)
        elif play_type == PlayType.MV:
            self.app.lrc.show_mv()
            self.load_mv(self.curr_song)
            self.app.popup_page(self.app.lrc.app_page)

    def load_mv(self, song):
        self.play_type = PlayType.MV
        self.curr_song = song
        self.update_favorite_button_status()
        self.stop_player()
        self.use_mtv_btn.handler_block(self.use_mtv_sid)
        self.use_mtv_btn.set_active(True)
        self.use_mtv_btn.handler_unblock(self.use_mtv_sid)
        self.create_new_async(song, use_mv=True)

    def get_mv_link(self):
        def _update_mv_link(mv_args, error=None):
            if error or not mv_args:
                logger.error('get_mv_link(): %s, %s' % (mv_args, error))
                self.use_mtv_btn.set_sensitive(False)
            else:
                cached, mv_link, mv_path = mv_args
                if cached or mv_link:
                    self.use_mtv_btn.set_sensitive(True)
                else:
                    self.use_mtv_btn.set_sensitive(False)
        Net.async_call(Net.get_song_link, self.curr_song, self.app.conf, True,
                       callback=_update_mv_link)

    # Fullscreen
    def toggle_fullscreen(self):
        '''Switch between fullscreen and unfullscreen mode.'''

        def hide_control_panel_and_label(timestamp):
            if self.fullscreen_sid > 0:
                gdk_window.set_cursor(self.blank_cursor)
            if (timestamp == self.fullscreen_timestamp and
                    self.fullscreen_sid > 0):
                self.hide()
                GLib.timeout_add(100, self.playbin.expose)
                self.app.notebook.set_show_tabs(False)

        def on_window_motion_notified(window, event):
            window.get_window().set_cursor(self.default_cursor)
            if self.fullscreen_sid == 0:
                return
            lower = 70
            upper = window.get_size()[1] - 40
            if lower < event.y < upper:
                GLib.timeout_add(2000,
                        lambda *args: gdk_window.set_cursor(self.blank_cursor))
            else:
                self.show_all()
                self.app.notebook.set_show_tabs(True)

            # Delay 2 seconds to hide them
            self.fullscreen_timestamp = time.time()
            GLib.timeout_add(100, self.playbin.expose)
            GLib.timeout_add(2000, hide_control_panel_and_label,
                             self.fullscreen_timestamp)

        window = self.app.window
        gdk_window = window.get_window()
        button = self.fullscreen_btn
        if not self.default_cursor:
            self.default_cursor = gdk_window.get_cursor()
        if not self.default_cursor:
            self.default_cursor = Gdk.Cursor.new(Gdk.CursorType.ARROW)

        if not button.get_active():
        # unfullscreen
            window.unfullscreen()
            button.set_icon_name('view-fullscreen-symbolic')
            window.realize()
            self.playbin.expose()
            self.show()
            self.app.notebook.set_show_tabs(True)
            self.fullscreen_sid = 0
            gdk_window.set_cursor(self.default_cursor)
        else:
        # fullscreen
            self.app.popup_page(self.app.lrc.app_page)
            window.realize()
            window.fullscreen()
            button.set_icon_name('view-restore-symbolic')
            self.playbin.expose_fullscreen()

            self.hide()
            self.app.notebook.set_show_tabs(False)
            gdk_window.set_cursor(self.blank_cursor)
            self.fullscreen_sid = window.connect('motion-notify-event',
                                                 on_window_motion_notified)

    def on_window_key_pressed(self, widget, event):
        # press Esc to exit fullscreen mode
        if event.keyval == Gdk.KEY_Escape and self.fullscreen_btn.get_active():
            self.fullscreen_btn.set_active(False)
        # press F11 to toggle fullscreen mode
        elif event.keyval == Gdk.KEY_F11:
            self.fullscreen_btn.set_active(not self.fullscreen_btn.get_active())

    def on_fullscreen_button_toggled(self, button):
        self.toggle_fullscreen()

    def on_favorite_btn_clicked(self, button):
        if not self.curr_song:
            return
        self.toggle_favorite_status()

    def update_favorite_button_status(self):
        if not self.curr_song:
            return
        if self.get_favorite_status():
            self.favorite_btn.set_icon_name('favorite')
        else:
            self.favorite_btn.set_icon_name('emblem-favorite-symbolic')

    def get_favorite_status(self):
        return self.app.playlist.check_song_in_playlist(self.curr_song,
                                                        'Favorite')

    def toggle_favorite_status(self):
        if not self.curr_song:
            return
        if self.app.playlist.check_song_in_playlist(self.curr_song,
                                                    'Favorite'):
            self.app.playlist.remove_song_from_playlist(self.curr_song,
                                                        'Favorite')
            self.favorite_btn.set_icon_name('emblem-favorite-symbolic')
        else:
            self.app.playlist.add_song_to_playlist(self.curr_song, 'Favorite')
            self.favorite_btn.set_icon_name('favorite')

    # menu button
    def on_main_menu_button_clicked(self, button, main_menu):
        main_menu.popup(None, None, None, None, 1,
                        Gtk.get_current_event_time())

    def on_main_menu_pref_activate(self, menu_item):
        '''重新载入设置'''
        dialog = Preferences(self.app)
        dialog.run()
        dialog.destroy()
        self.app.load_styles()
        self.app.init_status_icon()
        self.app.lrc.update_highlighted_tag()
        self.app.shortcut.rebind_keys()

    def on_main_menu_about_activate(self, menu_item):
        dialog = Gtk.AboutDialog()
        dialog.set_modal(True)
        dialog.set_transient_for(self.app.window)
        dialog.set_program_name(Config.APPNAME)
        dialog.set_logo_icon_name(Config.NAME)
        dialog.set_version(Config.VERSION)
        dialog.set_comments(Config.DESCRIPTION)
        dialog.set_copyright(Config.COPYRIGHT)
        dialog.set_website(Config.HOMEPAGE)
        dialog.set_license_type(Gtk.License.GPL_3_0)
        dialog.set_authors(Config.AUTHORS)
        dialog.run()
        dialog.destroy()

    def on_main_menu_quit_activate(self, menu_item):
        self.app.quit()


    # playbin signal handlers
    def on_playbin_eos(self, playbin, eos_msg):
        self.load_next()

    def on_playbin_error(self, playbin, error_msg):
        logger.warn('Player.on_playbin_error(): %s.' % error_msg)
        self.app.toast('Player Error: %s' % error_msg)
        self.stop_player()

    def on_playbin_mute_changed(self, playbin, mute):
        self.update_gtk_volume_value_cb()

    def on_playbin_volume_changed(self, playbin, volume):
        self.update_gtk_volume_value_cb()

    def update_gtk_volume_value(self):
        mute = self.playbin.get_mute()
        volume = self.playbin.get_volume()
        if mute:
            self.volume.handler_block(self.volume_sid)
            self.volume.set_value(0.0)
            self.volume.handler_unblock(self.volume_sid)
        else:
            self.volume.handler_block(self.volume_sid)
            self.volume.set_value(volume ** 0.33)
            self.volume.handler_unblock(self.volume_sid)
        self.app.conf['volume'] = volume

    def update_gtk_volume_value_cb(self):
        GLib.idle_add(self.update_gtk_volume_value)


    def start_player(self, load=False):
        if self.play_type == PlayType.NONE:
            return

        self.dbus.set_Playing()

        self.playback_action.set_icon_name('media-playback-pause-symbolic')
        self.playback_action.set_label(_('Pause'))
        self.playbin.play()
        self.adj_timeout = GLib.timeout_add(250, self.sync_adjustment)
        if load:
            self.playbin.set_volume(self.app.conf['volume'])
            self.init_meta()
            GLib.timeout_add(1500, self.init_adjustment)
        self.notify.refresh()

    def start_player_cb(self):
        GLib.idle_add(lambda: self.playback_action.set_active(True))

    def pause_player(self):
        if self.play_type == PlayType.NONE:
            return
        self.dbus.set_Pause()
        self.playback_action.set_icon_name('media-playback-start-symbolic')
        self.playback_action.set_label(_('Play'))
        self.playbin.pause()
        if self.adj_timeout > 0:
            GLib.source_remove(self.adj_timeout)
            self.adj_timeout = 0
        self.notify.refresh()

    def pause_player_cb(self):
        GLib.idle_add(lambda: self.playback_action.set_active(False))

    def play_pause(self):
        if self.play_type == PlayType.NONE:
            return
        self.playback_action.set_active(not self.playback_action.get_active())

    def play_pause_cb(self):
        GLib.idle_add(self.play_pause)

    def stop_player(self):
        if self.play_type == PlayType.NONE:
            return
        self.playback_action.set_active(False)
        self.playbin.stop()
        self.scale.set_value(0)
        if self.play_type != PlayType.MV:
            self.use_audio_btn.handler_block(self.use_audio_sid)
            self.use_audio_btn.set_active(True)
            self.use_audio_btn.handler_unblock(self.use_audio_sid)
            self.use_mtv_btn.set_sensitive(False)
        self.time_label.set_label('0:00/0:00')
        if self.adj_timeout > 0:
            GLib.source_remove(self.adj_timeout)
            self.adj_timeout = 0

    def stop_player_cb(self):
        GLib.idle_add(self.stop_player)

    def load_prev(self):
        if self.play_type == PlayType.NONE or not self.can_go_previous():
            return
        self.stop_player()
        repeat = self.repeat_btn.get_active()
        if self.play_type == PlayType.SONG:
            self.app.playlist.play_prev_song(repeat=repeat, use_mv=False)
        elif self.play_type == PlayType.MV:
            self.app.playlist.play_prev_song(repeat=repeat, use_mv=True)

    def load_prev_cb(self):
        GLib.idle_add(self.load_prev)

    def load_next(self):
        if self.play_type == PlayType.NONE:
            return
        self.stop_player()
        if self.repeat_type == RepeatType.ONE:
            if self.play_type == PlayType.MV:
                self.load_mv(self.curr_song)
            else:
                self.load(self.curr_song)
            return

        repeat = self.repeat_btn.get_active()
        shuffle = self.shuffle_btn.get_active()
        if self.play_type == PlayType.RADIO:
            self.curr_radio_item.play_next_song()
        elif self.play_type == PlayType.SONG:
            self.app.playlist.play_next_song(repeat, shuffle, use_mv=False)
        elif self.play_type == PlayType.MV:
            self.app.playlist.play_next_song(repeat, shuffle, use_mv=True)

    def load_next_cb(self):
        GLib.idle_add(self.load_next)

    def get_volume(self):
        return self.volume.get_value()

    def set_volume(self, volume):
        self.volume.set_value(volume)

    def set_volume_cb(self, volume):
        GLib.idle_add(self.set_volume, volume)

    def get_volume(self):
        return self.playbin.get_volume()

    def toggle_mute(self):
        mute = self.playbin.get_mute()
        self.playbin.set_mute(not mute)
        if mute:
            self.volume.handler_block(self.volume_sid)
            self.volume.set_value(self.app.conf['volume'])
            self.volume.handler_unblock(self.volume_sid)
        else:
            self.volume.handler_block(self.volume_sid)
            self.volume.set_value(0.0)
            self.volume.handler_unblock(self.volume_sid)

    def toggle_mute_cb(self):
        GLib.idle_add(self.toggle_mute)

    def seek(self, offset):
        if self.play_type == PlayType.NONE:
            return
        self.playback_action.set_active(False)
        self.playbin.seek(offset)
        GLib.timeout_add(300, self.start_player_cb)
        self.sync_label_by_adjustment()

    def seek_cb(self, offset):
        GLib.idle_add(self.seek, offset)

    def can_go_previous(self):
        if self.play_type in (PlayType.MV, PlayType.SONG):
            return True
        return False


    # dbus parts
    def init_meta(self):
        self.adjustment_upper = 0
        self.dbus.disable_seek()
        self.meta_url = ''
        self.meta_artUrl = ''

    def on_adjustment_changed(self, adj):
        self.dbus.update_meta()
        self.adjustment_upper = adj.get_upper()
