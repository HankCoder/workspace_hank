
# Copyright (C) 2013-2014 LiuLang <gsushzhsosgsu@gmail.com>

# Use of this source code is governed by GPLv3 license that can be found
# in the LICENSE file.

import html
from html.parser import HTMLParser
import os
import traceback

from gi.repository import Gdk
from gi.repository import GdkPixbuf
from gi.repository import GLib
from gi.repository import Gtk

from kuwo import Config
_ = Config._
from kuwo.log import logger

def unescape(tooltip):
    html_parser = HTMLParser()
    return html_parser.unescape(html_parser.unescape(tooltip))

def escape(tooltip):
    return GLib.markup_escape_text(tooltip.replace('<br>', '\n'))

def short_str(_str, length=10):
    if len(_str) > length:
        return _str[:length-2] + '..'
    return _str

def reach_scrolled_bottom(adj):
    return adj.get_upper() - adj.get_page_size() - adj.get_value() < 80

def short_tooltip(tooltip, length=10):
    return short_str(escape(tooltip), length)

def set_tooltip(head, body=''):
    return '<b>{0}</b>\n\n{1}'.format(escape(unescape(head)),
                                      escape(unescape(body)))

def set_tooltip_with_song_tips(head, tip):
    songs = tip.split(';')
    results = []
    fmt = '{0}   <small>by {1}</small>'
    for song in songs:
        if len(song) < 5:
            continue
        item = song.split('@')
        try:
            results.append(fmt.format(escape(item[1]), escape(item[3])))
        except IndexError:
            logger.error(traceback.format_exc())
    return '<b>{0}</b>\n\n{1}'.format(escape(head), '\n'.join(results))

def song_row_to_dict(song_row, start=1):
    song = {
        'name': song_row[start],
        'artist': song_row[start+1],
        'album': song_row[start+2],
        'rid': song_row[start+3],
        'artistid': song_row[start+4],
        'albumid': song_row[start+5],
        'formats': song_row[start+6],
    }
    return song

def song_dict_to_row(song):
    # with filepath
    song_row = [
        song['name'],
        song['artist'],
        song['album'],
        int(song['rid']),
        int(song['artistid']),
        int(song['albumid']),
        song['formats'],
    ]
    return song_row

def tree_append_items(tree, items):

    '''A faster way to append many items to GtkTreeModel at a time.

    When appending many items to a model , app will lose response, which
    is really annoying.
    From:http://faq.pygtk.org/index.py?req=show&file=faq13.043.htp
    @tree a GtkTreeView
    @items a list of items
    '''
    def append_generator(step=100):
        n = 0
        tree.freeze_child_notify()
        for item in items:
            model.append(item)
            n += 1
            if (n % step) == 0:
                tree.thaw_child_notify()
                yield True
                tree.freeze_child_notify()
        # stop idle_add()
        tree.thaw_child_notify()
        yield False

    model = tree.get_model()
    loader = append_generator()
    GLib.idle_add(loader.__next__)


class ListRadioButton(Gtk.RadioButton):

    def __init__(self, label, last_button=None):
        super().__init__(label)
        self.props.draw_indicator = False
        if last_button:
            self.join_group(last_button)


class BoldLabel(Gtk.Label):

    def __init__(self, label):
        super().__init__('<b>{0}</b>'.format(label))
        self.set_use_markup(True)
        self.props.halign = Gtk.Align.START
        self.props.xalign = 0
        #self.props.margin_bottom = 10


class FolderChooser(Gtk.Box):

    def __init__(self, parent):
        super().__init__(spacing=5)
        self.parent = parent
        self.filepath = os.environ['HOME']

        self.entry = Gtk.Entry()
        self.entry.set_text(self.filepath)
        self.entry.props.editable = False
        self.entry.props.can_focus = False
        self.entry.props.width_chars = 30
        self.pack_start(self.entry, True, True, 0)

        choose_button = Gtk.Button('...')
        choose_button.connect('clicked', self.on_choose_button_clicked)
        self.pack_start(choose_button, False, False, 0)

    def set_filename(self, filepath):
        self.filepath = filepath
        self.entry.set_text(filepath)

    def get_filename(self):
        return self.filepath
    
    def on_choose_button_clicked(self, button):
        def on_dialog_file_activated(dialog):
            self.filepath = dialog.get_filename()
            self.entry.set_text(self.filepath)
            dialog.destroy()

        dialog = Gtk.FileChooserDialog(_('Choose a Folder'), self.parent,
                Gtk.FileChooserAction.SELECT_FOLDER,
                (Gtk.STOCK_CANCEL, Gtk.ResponseType.CANCEL,
                Gtk.STOCK_OK, Gtk.ResponseType.OK))

        dialog.connect('file-activated', on_dialog_file_activated)
        response = dialog.run()
        if response == Gtk.ResponseType.OK:
            on_dialog_file_activated(dialog)
            return
        dialog.destroy()


class TreeViewColumnText(Gtk.TreeViewColumn):

    def __init__(self, *args, **keys):
        super().__init__(*args, **keys)
        self.props.sizing = Gtk.TreeViewColumnSizing.GROW_ONLY
        self.props.expand = True
        self.props.max_width = 280


class TreeViewColumnIcon(Gtk.TreeViewColumn):

    def __init__(self, *args, **keys):
        super().__init__(*args, **keys)
        self.props.sizing = Gtk.TreeViewColumnSizing.FIXED
        self.props.fixed_width = 20


class ControlBox(Gtk.Box):
    '''用于控制liststore的显示方式, 比如`全选`'''

    def __init__(self, liststore, app, select_all=True):
        super().__init__(spacing=0)
        self.liststore = liststore
        self.app = app

        self.button_selectall = Gtk.ToggleButton(_('Select All'))
        self.button_selectall.set_active(select_all)
        self.select_all_sid = self.button_selectall.connect('toggled', 
                self.on_button_selectall_toggled)
        self.pack_start(self.button_selectall, False, False, 0)

        button_play = Gtk.Button(_('Play'))
        button_play.connect('clicked', self.on_button_play_clicked)
        self.pack_start(button_play, False, False, 0)

        button_add = Gtk.Button(_('Add to Playlist'))
        button_add.connect('clicked', self.on_button_add_clicked)
        self.pack_start(button_add, False, False, 0)

        button_cache = Gtk.Button(_('Cache'))
        button_cache.connect('clicked', self.on_button_cache_clicked)
        self.pack_start(button_cache, False, False, 0)

    def select_all(self):
        '''Activate select_all button'''
        self.button_selectall.handler_block(self.select_all_sid)
        self.button_selectall.set_active(True)
        self.button_selectall.handler_unblock(self.select_all_sid)

    def on_button_selectall_toggled(self, button):
        toggled = button.get_active()
        for song in self.liststore:
            song[0] = toggled

    def on_button_play_clicked(self, button):
        songs = [song_row_to_dict(s) for s in self.liststore if s[0]]
        self.app.playlist.play_songs(songs)

    def on_button_add_clicked(self, button):
        songs = [song_row_to_dict(s) for s in self.liststore if s[0]]
        self.menu = self.app.playlist.new_playlist_menu()
        self.menu.show_all()
        self.menu.songs = songs
        self.menu.popup(None, None, None, None, 1,
                        Gtk.get_current_event_time())

    def on_button_cache_clicked(self, button):
        songs = [song_row_to_dict(s) for s in self.liststore if s[0]]
        self.app.playlist.cache_songs(songs)


class MVControlBox(Gtk.Box):

    def __init__(self, liststore, app):
        super().__init__()
        self.liststore = liststore
        self.app = app

        button_add = Gtk.Button(_('Add to Playlist'))
        button_add.connect('clicked', self.on_button_add_clicked)
        self.pack_start(button_add, False, False, 0)

    def on_button_add_clicked(self, button):
        songs = [song_row_to_dict(s) for s in self.liststore if s[0]]
        self.menu = self.app.playlist.new_playlist_menu()
        self.menu.show_all()
        self.menu.songs = songs
        self.menu.popup(None, None, None, None, 1,
                        Gtk.get_current_event_time())


class IconView(Gtk.IconView):

    def __init__(self, liststore, info_pos=3, tooltip=None):
        super().__init__(model=liststore)

        # liststore:
        # 0 - logo
        # 1 - name
        # 2 - id
        # 3 - info
        # 4 - tooltip
        self.set_pixbuf_column(0)
        if tooltip is not None:
            self.set_tooltip_column(tooltip)
        self.props.item_width = 150

        cell_name = Gtk.CellRendererText()
        cell_name.set_alignment(0.5, 0.5)
        cell_name.props.max_width_chars = 15
        #cell_name.props.width_chars = 15
        self.pack_start(cell_name, True)
        self.add_attribute(cell_name, 'text', 1)

        if info_pos is not None:
            cell_info = Gtk.CellRendererText()
            fore_color = Gdk.RGBA(red=136/256, green=139/256, blue=132/256)
            cell_info.props.foreground_rgba = fore_color
            cell_info.props.size_points = 9
            cell_info.props.max_width_chars = 18
            cell_info.set_alignment(0.5, 0.5)
            self.pack_start(cell_info, True)
            self.add_attribute(cell_info, 'text', info_pos)


class TreeViewSongs(Gtk.TreeView):

    # liststore info
    CHECKED, NAME, ARTIST, ALBUM, RID, ARTISTID, ALBUMID, FORMATS = list(
            range(8))
    # treeview info
    (COL_CHECKED, COL_NAME, COL_ARTIST, COL_ALBUM, COL_PLAY, COL_ADD,
            COL_CACHE) = list(range(7))

    def __init__(self, app):
        # checked, name, artist, album, rid, artistid, albumid, formats
        self.liststore = Gtk.ListStore(bool, str, str, str, int, int, int, str)
        super().__init__(model=self.liststore)
        self.set_headers_visible(False)

        self.app = app

        # checked, name, artist, album, play, add, cache
        checked = Gtk.CellRendererToggle()
        checked.connect('toggled', self.on_song_checked)
        column_check = Gtk.TreeViewColumn('Checked', checked,
                                          active=self.COL_CHECKED)
        self.append_column(column_check)
        name = Gtk.CellRendererText()
        col_name = TreeViewColumnText('Name', name, text=self.COL_NAME)
        self.append_column(col_name)
        artist = Gtk.CellRendererText()
        col_artist = TreeViewColumnText('Artist', artist, text=self.COL_ARTIST)
        self.append_column(col_artist)
        album = Gtk.CellRendererText()
        col_album = TreeViewColumnText('Album', album, text=self.COL_ALBUM)
        self.append_column(col_album)
        play = Gtk.CellRendererPixbuf(icon_name='emblem-music-symbolic')
        col_play = TreeViewColumnIcon('Play', play)
        self.append_column(col_play)
        add = Gtk.CellRendererPixbuf(icon_name='list-add-symbolic')
        col_add = TreeViewColumnIcon('Add', add)
        self.append_column(col_add)
        cache = Gtk.CellRendererPixbuf(icon_name='download-symbolic')
        col_cache = TreeViewColumnIcon('Cache', cache)
        self.append_column(col_cache)

        self.connect('row_activated', self.on_row_activated)
        self.connect('button-press-event', self.on_button_pressed)

    def on_song_checked(self, widget, path):
        self.liststore[path][self.CHECKED] = not \
                self.liststore[path][self.CHECKED]

    def on_button_pressed(self, treeview, event):
        path_info = treeview.get_path_at_pos(event.x, event.y)
        if not path_info:
            return
        path, column, cell_x, cell_y = path_info
        song = song_row_to_dict(self.liststore[path])
        index = self.get_columns().index(column)
        if index == self.COL_PLAY:
            self.app.playlist.play_song(song)
        elif index == self.COL_ADD:
            self.app.playlist.add_song_to_playlist(song)
        elif index == self.COL_CACHE:
            self.app.playlist.cache_song(song)

    def on_row_activated(self, treeview, path, column):
        song = song_row_to_dict(self.liststore[path])
        index = self.get_columns().index(column)
        if index == self.COL_NAME:
            self.app.playlist.play_song(song)
        elif index == self.COL_ARTIST:
            if not song['artist']:
                return
            self.app.search.search_artist(song['artist'])
        elif index == self.COL_ALBUM:
            if not song['album']:
                return
            self.app.search.search_album(song['album'])


def network_error(parent, msg):
    dialog = Gtk.MessageDialog(parent, Gtk.DialogFlags.MODAL,
                               Gtk.MessageType.ERROR,
                               Gtk.ButtonsType.CLOSE, msg)
    dialog.format_secondary_text(
            _('Please check network connection and try again'))
    dialog.run()
    dialog.destroy()

def filesystem_error(parent, path):
    msg = _('Failed to open file or direcotry')
    dialog = Gtk.MessageDialog(parent, Gtk.DialogFlags.MODAL,
                               Gtk.MessageType.ERROR,
                               Gtk.ButtonsType.CLOSE, msg)
    dialog.format_secondary_text(_('Unable to access {0}').format(path))
    dialog.run()
    dialog.destroy()

def apply_css(widget, css, old_provider=None, overall=False):
    '''Update CssProvider of this widget.'''
    # CssProvider requires bytecode
    style_provider = Gtk.CssProvider()
    css_encoded = css.encode()
    style_provider.load_from_data(css_encoded)
    if overall:
        Gtk.StyleContext.add_provider_for_screen(Gdk.Screen.get_default(),
                style_provider, Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION)
        if old_provider:
            Gtk.StyleContext.remove_provider_for_screen(
                Gdk.Screen.get_default(), style_provider)
    else:
        widget.get_style_context().add_provider(style_provider,
                Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION)
        if old_provider:
            widget.get_style_context().remove_provider(old_provider)
    return style_provider
