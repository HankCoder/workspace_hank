
# Copyright (C) 2013-2014 LiuLang <gsushzhsosgsu@gmail.com>

# Use of this source code is governed by GPLv3 license that can be found
# in the LICENSE file.

import time

from gi.repository import GdkPixbuf
from gi.repository import Gtk

from kuwo import Config
_ = Config._
from kuwo import Net
from kuwo import Widgets
from kuwo.log import logger


class Themes(Gtk.Box):
    '''Themes tab in notebook.'''

    title = _('Themes')

    def __init__(self, app):
        super().__init__(orientation=Gtk.Orientation.VERTICAL)
        self.app = app

    def first(self):
        app = self.app

        self.buttonbox = Gtk.Box(spacing=5)
        self.pack_start(self.buttonbox, False, False, 0)

        self.button_main = Gtk.Button(_('Themes'))
        self.button_main.connect('clicked', self.on_button_main_clicked)
        self.buttonbox.pack_start(self.button_main, False, False, 0)

        self.button_sub = Gtk.Button('')
        self.button_sub.connect('clicked', self.on_button_sub_clicked)
        self.buttonbox.pack_start(self.button_sub, False, False, 0)

        self.label = Gtk.Label('')
        self.buttonbox.pack_start(self.label, False, False, 0)

        # checked, name, artist, album, rid, artistid, albumid
        treeview_songs = Widgets.TreeViewSongs(app)
        self.liststore_songs = treeview_songs.liststore
        self.control_box = Widgets.ControlBox(self.liststore_songs, app)
        self.buttonbox.pack_end(self.control_box, False, False, 0)

        self.scrolled_main = Gtk.ScrolledWindow()
        self.pack_start(self.scrolled_main, True, True, 0)
        # pic, name, id, info(num of lists), tooltip
        self.liststore_main = Gtk.ListStore(GdkPixbuf.Pixbuf, str, int,
                                            str, str)
        iconview_main = Widgets.IconView(self.liststore_main, tooltip=4)
        iconview_main.connect('item_activated',
                              self.on_iconview_main_item_activated)
        self.scrolled_main.add(iconview_main)

        self.scrolled_sub = Gtk.ScrolledWindow()
        self.scrolled_sub.get_vadjustment().connect('value-changed',
                self.on_scrolled_sub_scrolled)
        self.pack_start(self.scrolled_sub, True, True, 0)
        # pic, name, sourceid, info(num of lists), tooltip
        self.liststore_sub = Gtk.ListStore(GdkPixbuf.Pixbuf, str, int,
                                           str, str)
        iconview_sub = Widgets.IconView(self.liststore_sub, tooltip=4)
        iconview_sub.connect('item_activated',
                             self.on_iconview_sub_item_activated)
        self.scrolled_sub.add(iconview_sub)

        self.scrolled_songs = Gtk.ScrolledWindow()
        self.scrolled_songs.get_vadjustment().connect('value-changed',
                self.on_scrolled_songs_scrolled)
        self.pack_start(self.scrolled_songs, True, True, 0)
        self.scrolled_songs.add(treeview_songs)

        self.show_all()
        self.buttonbox.hide()
        self.scrolled_sub.hide()
        self.scrolled_songs.hide()

        def _on_get_themes(nodes, error):
            if not nodes:
                logger.warn('_on_get_themes(): %s, %s' % (nodes, error))
                return
            urls = []
            tree_iters = []
            for node in nodes:
                tree_iter = self.liststore_main.append([
                    Config.ANONYMOUS_PIXBUF,
                    Widgets.unescape(node['name']),
                    int(node['nid']),
                    Widgets.unescape(node['info']),
                    Widgets.set_tooltip(node['name'], node['info']),
                    ])
                urls.append(node['pic'])
                tree_iters.append(tree_iter)
            self.liststore_main.timestamp = time.time()
            Net.async_call(Net.update_liststore_images, self.liststore_main, 0,
                           tree_iters, urls)
        Net.async_call(Net.get_themes_main, callback=_on_get_themes)

    def on_iconview_main_item_activated(self, iconview, path):
        model = iconview.get_model()
        self.curr_sub_name = model[path][1]
        self.curr_sub_id = model[path][2]
        self.label.set_label(self.curr_sub_name)
        self.show_sub(init=True)

    def show_sub(self, init=False):
        def on_show_sub(info, error=None):
            if error or not info or not info[0] or not info[1]:
                logger.error('show_sub(): %s, %s' % (info, error))
                return
            nodes, self.nodes_total = info
            urls = []
            tree_iters = []
            for node in nodes:
                tree_iter = self.liststore_sub.append([
                    Config.ANONYMOUS_PIXBUF,
                    Widgets.unescape(node['name']),
                    int(node['sourceid']),
                    Widgets.unescape(node['info']),
                    Widgets.set_tooltip_with_song_tips(node['name'],
                                                       node['tips']),
                ])
                tree_iters.append(tree_iter)
                urls.append(node['pic'])
            Net.async_call(Net.update_liststore_images, self.liststore_sub, 0,
                           tree_iters, urls)
        if init:
            self.scrolled_main.hide()
            self.scrolled_songs.hide()
            self.buttonbox.show_all()
            self.button_sub.hide()
            self.control_box.hide()
            self.scrolled_sub.get_vscrollbar().set_value(0)
            self.scrolled_sub.show_all()
            self.nodes_page = 0
            self.liststore_sub.clear()
        if init or not hasattr(self.liststore_sub, 'timestamp'):
            self.liststore_sub.timestamp = time.time()
        Net.async_call(Net.get_nodes, self.curr_sub_id, self.nodes_page,
                       callback=on_show_sub)

    def on_iconview_sub_item_activated(self, iconview, path):
        model = iconview.get_model()
        self.curr_list_name = model[path][1]
        self.curr_list_id = model[path][2]
        self.label.set_label(self.curr_list_name)
        self.button_sub.set_label(self.curr_sub_name)
        self.show_songs(init=True)
    
    def show_songs(self, init=False):
        if init:
            self.app.playlist.advise_new_playlist_name(self.label.get_text())
            self.liststore_songs.clear()
            self.songs_page = 0
            self.scrolled_sub.hide()
            self.button_sub.show_all()
            self.control_box.show_all()
            self.scrolled_songs.get_vscrollbar().set_value(0)
            self.scrolled_songs.show_all()

        def _on_get_themes_songs(info, error):
            if not info or not info[0] or not info[1] or error:
                logger.error('show_songs(): %s, %s' % (info, error))
                return
            songs, self.songs_total = info
            for song in songs:
                self.liststore_songs.append([
                    True,
                    Widgets.unescape(song['name']),
                    Widgets.unescape(song['artist']),
                    Widgets.unescape(song['album']),
                    int(song['id']),
                    int(song['artistid']), 
                    int(song['albumid']),
                    song['formats'],
                ])

        Net.async_call(Net.get_themes_songs, self.curr_list_id,
                       self.songs_page, callback=_on_get_themes_songs)
    
    # buttonbox buttons
    def on_button_main_clicked(self, btn):
        self.buttonbox.hide()
        self.scrolled_sub.hide()
        self.scrolled_songs.hide()
        self.control_box.hide()
        self.scrolled_main.show_all()

    def on_button_sub_clicked(self, btn):
        self.scrolled_songs.hide()
        self.label.set_label(self.curr_sub_name)
        self.buttonbox.show_all()
        self.button_sub.hide()
        self.control_box.hide()
        self.scrolled_sub.show_all()

    def on_scrolled_sub_scrolled(self, adj):
        if (Widgets.reach_scrolled_bottom(adj) and
                self.nodes_page < self.nodes_total - 1):
            self.nodes_page += 1
            self.show_sub()

    def on_scrolled_songs_scrolled(self, adj):
        if (Widgets.reach_scrolled_bottom(adj) and
                self.songs_page < self.songs_total - 1):
            self.songs_page += 1
            self.show_songs()
