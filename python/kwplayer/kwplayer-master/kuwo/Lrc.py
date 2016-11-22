
# Copyright (C) 2013-2014 LiuLang <gsushzhsosgsu@gmail.com>

# Use of this source code is governed by GPLv3 license that can be found
# in the LICENSE file.

import os
import re
import time

from gi.repository import Gdk
from gi.repository import GdkPixbuf
from gi.repository import GdkX11
from gi.repository import Gtk

from kuwo import Config
_ = Config._
from kuwo.log import logger
from kuwo.LrcParser import parse_lrc
from kuwo import Widgets

LRC_WINDOW, MV_WINDOW = 0, 1
ADJ_LRC_DELTA = 1000000000 # 1000ms


class Lrc(Gtk.Notebook):
    '''Lyrics tab in notebook.'''

    title = _('Lyrics')

    def __init__(self, app):
        super().__init__()
        self.set_show_tabs(False)
        self.app = app
        self.lrc_obj = None
        self.lrc_default_background = Config.LRC_BACKGROUND_IMG
        self.lrc_background = None
        self.old_provider = None

        # lyrics window
        self.lrc_window = Gtk.ScrolledWindow()
        self.lrc_window.get_style_context().add_class('lrc_window')
        self.append_page(self.lrc_window, Gtk.Label.new('Lrc'))

        self.lrc_buf = Gtk.TextBuffer()
        self.lrc_buf.set_text('')
        fore_rgba = Gdk.RGBA()
        fore_rgba.parse(app.conf['lrc-highlighted-text-color'])
        font_size = app.conf['lrc-highlighted-text-size']
        # Need to use size_points, not size property
        self.highlighted_tag = self.lrc_buf.create_tag(size_points=font_size,
                foreground_rgba=fore_rgba)

        self.lrc_tv = Gtk.TextView(buffer=self.lrc_buf)
        self.lrc_tv.get_style_context().add_class('lrc_tv')
        self.lrc_tv.props.editable = False
        self.lrc_tv.props.margin_top = 15
        self.lrc_tv.props.margin_right = 35
        self.lrc_tv.props.margin_bottom = 15
        self.lrc_tv.props.margin_left = 35
        self.lrc_tv.props.cursor_visible = False
        self.lrc_tv.props.justification = Gtk.Justification.CENTER
        self.lrc_tv.props.pixels_above_lines = 10
        self.lrc_tv.connect('button-press-event',
                            self.on_lrc_tv_button_pressed)
        self.lrc_tv.connect('key-press-event', self.on_lrc_tv_key_pressed)
        self.lrc_window.add(self.lrc_tv)

        # mv window
        mv_win_wrap = Gtk.ScrolledWindow()
        self.append_page(mv_win_wrap, Gtk.Label.new('MV'))
        self.mv_window = Gtk.DrawingArea()
        self.mv_window.connect('draw', self.on_mv_window_redraw)
        mv_win_wrap.add(self.mv_window)

        self.update_background(self.lrc_default_background)

    def first(self):
        pass

    def on_lrc_tv_button_pressed(self, textview, event):
        if event.button == Gdk.BUTTON_SECONDARY:
            return True

    def on_lrc_tv_key_pressed(self, textview, event):
        if event.state == Gdk.ModifierType.CONTROL_MASK:
            state, keyval = event.get_keyval()
            if keyval == Gdk.KEY_Up:
                self.adj_lrc_backwad()
                return True
            elif keyval == Gdk.KEY_Down:
                self.adj_lrc_forward()
                return True
        return False

    # Open API
    def adj_lrc_backwad(self):
        '''前前调整歌词'''
        if not self.lrc_obj:
            return
        length = len(self.lrc_obj)
        line_num = self.old_line_num - 1
        while line_num < length:
            self.lrc_obj[line_num][0] -= ADJ_LRC_DELTA
            line_num += 1

    def adj_lrc_forward(self):
        '''前后调整歌词'''
        if not self.lrc_obj:
            return
        length = len(self.lrc_obj)
        line_num = self.old_line_num
        while line_num < length:
            self.lrc_obj[line_num][0] += ADJ_LRC_DELTA
            line_num += 1

    def set_lrc(self, lrc_txt):
        self.update_background(self.lrc_default_background)
        self.old_line_num = 1
        self.old_line_iter = None
        self.old_timestamp = -5
        if not lrc_txt:
            self.lrc_buf.set_text(_('No lyrics available'))
            self.lrc_obj = None
            self.app.osdlrc.set_lrc(self.lrc_obj)
            return
        self.lrc_obj = parse_lrc(lrc_txt)
        self.app.osdlrc.set_lrc(self.lrc_obj)
        if not self.lrc_obj:
            logger.warn('set_lrc(): failed to parse lrc.')
            self.lrc_buf.set_text(_('No lyrics available'))
            return
        lrc_content = [l[1] for l in self.lrc_obj]

        self.lrc_buf.remove_all_tags(self.lrc_buf.get_start_iter(),
                                     self.lrc_buf.get_end_iter())
        self.lrc_buf.set_text('\n'.join(lrc_content))
        self.lrc_window.get_vadjustment().set_value(0)

    def reset_tags(self):
        if not self.lrc_obj:
            return
        iter_start = self.lrc_buf.get_start_iter()
        iter_end = self.lrc_buf.get_end_iter()
        self.lrc_buf.remove_tag(self.highlighted_tag, iter_start, iter_end)

    def sync_lrc(self, timestamp):
        if not self.lrc_obj or len(self.lrc_obj) <= self.old_line_num + 1:
            return
        # current line, do nothing
        if (self.lrc_obj[self.old_line_num][0] < timestamp and
                timestamp < self.lrc_obj[self.old_line_num + 1][0]):
            return

        line_num = self.old_line_num + 1
        # remove old highlighted tags
        if self.old_line_num >= 0 and self.old_line_iter:
            self.lrc_buf.remove_tag(self.highlighted_tag, *self.old_line_iter)

        # backward seeking
        if timestamp < self.old_timestamp:
            while (line_num >= len(self.lrc_obj) or
                   timestamp < self.lrc_obj[line_num][0]):
                line_num -= 1
        else:
        # forward seeking
            while (len(self.lrc_obj) > line_num and
                   timestamp > self.lrc_obj[line_num][0]):
                line_num += 1
        line_num -= 1

        self.app.osdlrc.sync_lrc(line_num)

        iter_start = self.lrc_buf.get_iter_at_line(line_num)
        iter_end = self.lrc_buf.get_iter_at_line(line_num+1)
        self.lrc_buf.apply_tag(self.highlighted_tag, iter_start, iter_end)
        self.lrc_tv.scroll_to_iter(iter_start, 0, True, 0, 0.5)
        self.old_line_iter = (iter_start, iter_end)
        self.old_line_num = line_num
        self.old_timestamp = timestamp

    def show_mv(self):
        self.set_current_page(MV_WINDOW)
        Gdk.Window.process_all_updates()
        self.mv_window.realize()
        self.xid = self.mv_window.get_property('window').get_xid()

    def show_music(self):
        self.set_current_page(LRC_WINDOW)

    # styles
    def update_background(self, filepath):
        if filepath is None or filepath == self.lrc_background:
            return
        if os.path.exists(filepath):
            self.lrc_background = filepath
        else:
            self.lrc_background = self.lrc_default_background
        css = '\n'.join([
            'GtkScrolledWindow.lrc_window {',
                "background-image: url('{0}');".format(self.lrc_background),
                "background-size:{0};".format(self.app.conf['background-img-size']),
                "background-position:center;",
        ])
        if not self.app.conf['background-img-repeat']:
            css = '\n'.join([
                css,
                "background-repeat:no-repeat;",
                ])
        css = '\n'.join([
            css,
            '}',
            ])
        self.old_provider = Widgets.apply_css(self.lrc_window, css,
                                              old_provider=self.old_provider)

    def update_highlighted_tag(self):
        fore_rgba = Gdk.RGBA()
        fore_rgba.parse(self.app.conf['lrc-highlighted-text-color'])
        self.highlighted_tag.props.size_points = \
                self.app.conf['lrc-highlighted-text-size']
        self.highlighted_tag.props.foreground_rgba = fore_rgba

    def on_mv_window_redraw(self, *args):
        if self.app.player.fullscreen_btn.get_active():
            self.app.player.playbin.expose_fullscreen()
        else:
            self.app.player.playbin.expose()
