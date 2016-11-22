
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


class TopCategories(Gtk.Box):
    '''Categories tab in notebook.'''

    title = _('Categories')

    def __init__(self, app):
        super().__init__(orientation=Gtk.Orientation.VERTICAL)
        self.app = app

    def first(self):
        app = self.app

        self.buttonbox = Gtk.Box(spacing=5)
        self.pack_start(self.buttonbox, False, False, 0)

        self.button_main = Gtk.Button(_('Top Categories'))
        self.button_main.connect('clicked', self.on_button_main_clicked)
        self.buttonbox.pack_start(self.button_main, False, False, 0)

        self.button_sub1 = Gtk.Button('')
        self.button_sub1.connect('clicked', self.on_button_sub1_clicked)
        self.buttonbox.pack_start(self.button_sub1, False, False, 0)

        self.button_sub2 = Gtk.Button('')
        self.button_sub2.connect('clicked', self.on_button_sub2_clicked)
        self.buttonbox.pack_start(self.button_sub2, False, False, 0)

        self.label = Gtk.Label('')
        self.buttonbox.pack_start(self.label, False, False, 0)

        treeview_songs = Widgets.TreeViewSongs(app)
        self.liststore_songs = treeview_songs.liststore
        self.control_box = Widgets.ControlBox(self.liststore_songs, app)
        self.buttonbox.pack_end(self.control_box, False, False, 0)

        self.scrolled_main = Gtk.ScrolledWindow()
        self.pack_start(self.scrolled_main, True, True, 0)
        # logo, name, nid, num of lists(info), tooltip
        self.liststore_main = Gtk.ListStore(GdkPixbuf.Pixbuf, str, int,
                                            str, str)
        iconview_main = Widgets.IconView(self.liststore_main, tooltip=4)
        iconview_main.connect('item_activated',
                              self.on_iconview_main_item_activated)
        self.scrolled_main.add(iconview_main)

        self.scrolled_sub1 = Gtk.ScrolledWindow()
        self.pack_start(self.scrolled_sub1, True, True, 0)
        # logo, name, nid, num of lists(info), tooltip
        self.liststore_sub1 = Gtk.ListStore(GdkPixbuf.Pixbuf, str, int,
                                            str, str)
        iconview_sub1 = Widgets.IconView(self.liststore_sub1, tooltip=4)
        iconview_sub1.connect('item_activated',
                              self.on_iconview_sub1_item_activated)
        self.scrolled_sub1.add(iconview_sub1)

        self.scrolled_sub2 = Gtk.ScrolledWindow()
        self.pack_start(self.scrolled_sub2, True, True, 0)
        # logo, name, nid, info, tooltip
        self.liststore_sub2 = Gtk.ListStore(GdkPixbuf.Pixbuf, str, int,
                                            str, str)
        iconview_sub2 = Widgets.IconView(self.liststore_sub2, tooltip=4)
        iconview_sub2.connect('item_activated',
                              self.on_iconview_sub2_item_activated)
        self.scrolled_sub2.add(iconview_sub2)

        self.scrolled_songs = Gtk.ScrolledWindow()
        self.pack_start(self.scrolled_songs, True, True, 0)
        self.scrolled_songs.add(treeview_songs)

        self.show_all()
        self.buttonbox.hide()
        self.scrolled_sub1.hide()
        self.scrolled_sub2.hide()
        self.scrolled_songs.hide()

        def _on_get_nodes(info, error):
            if not info or not info[0] or not info[1] or error:
                logger.error('TopCategories._on_get_nodes(): %s, %s' %
                             (info, error))
                return
            nodes, total_pages = info
            urls = []
            tree_iters = []
            for node in nodes:
                # skip 'xx专区'
                if node['disname'].endswith('专区'):
                    continue
                tree_iter = self.liststore_main.append([
                    Config.ANONYMOUS_PIXBUF,
                    Widgets.unescape(node['disname']),
                    int(node['id']),
                    Widgets.unescape(node['info']),
                    Widgets.set_tooltip(node['disname'], node['info']),
                ])
                tree_iters.append(tree_iter)
                urls.append(node['pic'])
            self.liststore_main.timestamp = time.time()
            Net.async_call(Net.update_liststore_images, self.liststore_main, 0,
                           tree_iters, urls)

        nid = 5
        page = 0
        Net.async_call(Net.get_nodes, nid, page, callback=_on_get_nodes)

    def on_iconview_main_item_activated(self, iconview, path):
        model = iconview.get_model()
        self.curr_sub1_name = model[path][1]
        self.curr_sub1_id = model[path][2]
        if self.curr_sub1_id in (79, 17250):
            # (79, 17250) will get songs with Net.get_alubum()
            self.use_album = True
        else:
            self.use_album = False
        if self.curr_sub1_id in (79, 17250, 78067, 78312):
            self.use_sub2 = True
        else:
            self.use_sub2 = False
        self.label.set_label(self.curr_sub1_name)
        self.show_sub1(init=True)

    def show_sub1(self, init=False):
        def _on_show_sub1(info, error=None):
            if not info or not info[0] or not info[1] or error:
                logger.error('show_sub1(): %s, %s' % (info, error))
                return
            nodes, self.sub1_total = info
            urls = []
            tree_iters = []
            for node in nodes:
                id_ = 'id' if self.use_sub2 else 'sourceid'
                if 'tips' in node and len(node['tips']) > 5:
                    tooltip = Widgets.set_tooltip_with_song_tips(node['name'],
                                                                 node['tips'])
                else:
                    tooltip = Widgets.set_tooltip(node['name'], node['info'])
                tree_iter = self.liststore_sub1.append([
                    Config.ANONYMOUS_PIXBUF,
                    Widgets.unescape(node['name']),
                    int(node[id_]),
                    Widgets.unescape(node['info']),
                    tooltip,
                ])
                urls.append(node['pic'])
                tree_iters.append(tree_iter)
            Net.async_call(Net.update_liststore_images, self.liststore_sub1, 0,
                           tree_iters, urls)

            self.sub1_page += 1
            if self.sub1_page < self.sub1_total - 1:
                self.show_sub1()

        if init:
            self.scrolled_main.hide()
            self.buttonbox.show_all()
            self.button_sub1.hide()
            self.button_sub2.hide()
            self.control_box.hide()
            self.scrolled_sub1.get_vscrollbar().set_value(0)
            self.scrolled_sub1.show_all()
            self.sub1_page = 0
            self.liststore_sub1.clear()
        if init or not hasattr(self.liststore_sub1, 'timestamp'):
            self.liststore_sub1.timestamp = time.time()
        Net.async_call(Net.get_nodes, self.curr_sub1_id, self.sub1_page,
                       callback=_on_show_sub1)

    def on_iconview_sub1_item_activated(self, iconview, path):
        model = iconview.get_model()
        if self.use_sub2:
            self.curr_sub2_name = model[path][1]
            self.curr_sub2_id = model[path][2]
            self.label.set_label(self.curr_sub2_name)
            self.button_sub1.set_label(self.curr_sub1_name)
            self.show_sub2(init=True)
        else:
            self.curr_list_name = model[path][1]
            self.curr_list_id = model[path][2]
            self.label.set_label(self.curr_list_name)
            self.app.playlist.advise_new_playlist_name(self.curr_list_name)
            self.button_sub1.set_label(self.curr_sub1_name)
            self.append_songs(init=True)

    def show_sub2(self, init=False):
        def _on_show_sub2(sub2_args, error=None):
            nodes, self.sub2_total = sub2_args
            if error or not nodes or not self.sub2_total:
                logger.error('nodes: %s, self.sub2_total: %s, error: %s' %
                        (nodes, self.sub2_total, error))
                return
            urls = []
            tree_iters = []
            for node in nodes:
                tree_iter = self.liststore_sub2.append([
                    Config.ANONYMOUS_PIXBUF,
                    Widgets.unescape(node['name']),
                    int(node['sourceid']),
                    Widgets.unescape(node['info']),
                    Widgets.set_tooltip_with_song_tips(node['name'],
                                                       node['tips'])
                ])
                urls.append(node['pic'])
                tree_iters.append(tree_iter)
            Net.async_call(Net.update_liststore_images, self.liststore_sub2, 0,
                           tree_iters, urls)

            self.sub2_page += 1
            if self.sub2_page < self.sub2_total - 1:
                self.show_sub2()

        if init:
            self.scrolled_sub1.hide()
            self.button_sub1.show_all()
            self.scrolled_sub2.get_vscrollbar().set_value(0)
            self.scrolled_sub2.show_all()
            self.sub2_page = 0
            self.liststore_sub2.clear()
        if init or not hasattr(self.liststore_sub2, 'timestamp'):
            self.liststore_sub2.timestamp = time.time()
        Net.async_call(Net.get_nodes, self.curr_sub2_id, self.sub2_page,
                       callback=_on_show_sub2)

    def on_iconview_sub2_item_activated(self, iconview, path):
        model = iconview.get_model()
        self.curr_list_name = model[path][1]
        self.curr_list_id = model[path][2]
        self.label.set_label(self.curr_list_name)
        self.button_sub2.set_label(self.curr_sub2_name)
        self.append_songs(init=True)

    def append_songs(self, init=False):
        def _on_get_album(songs, error=None):
            self.songs_total = 1
            if not songs or error:
                logger.error('TopCategories._on_get_album: %s, %s' %
                             (songs, error))
                return
            for song in songs:
                self.liststore_songs.append([
                    True,
                    Widgets.unescape(song['name']),
                    Widgets.unescape(song['artist']),
                    Widgets.unescape(self.curr_list_name),
                    int(song['id']),
                    int(song['artistid']),
                    int(self.curr_list_id),
                    song['formats'],
                ])

        def _on_append_songs(info, error=None):
            if not info or error:
                logger.error('TopCategories.append_songs(): %s, %s' %
                             (info, error))
                return
            songs, self.songs_total = info
            if not songs or self.songs_total == 0 or self.use_album:
                Net.async_call(Net.get_album, self.curr_list_id,
                               callback=_on_get_album)

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
            self.songs_page += 1
            if self.songs_page < self.songs_total - 1:
                self.append_songs()

        if init:
            self.app.playlist.advise_new_playlist_name(self.label.get_text())
            self.songs_page = 0
            self.scrolled_sub1.hide()
            self.button_sub1.show_all()
            self.control_box.show_all()
            if self.use_sub2:
                self.scrolled_sub2.hide()
                self.button_sub2.show_all()
            self.scrolled_songs.get_vscrollbar().set_value(0.0)
            self.scrolled_songs.show_all()
            self.liststore_songs.clear()

        Net.async_call(Net.get_themes_songs, self.curr_list_id,
                       self.songs_page, callback=_on_append_songs)

    # buttonbox
    def on_button_main_clicked(self, btn):
        self.scrolled_sub1.hide()
        self.scrolled_sub2.hide()
        self.scrolled_songs.hide()
        self.buttonbox.hide()
        self.scrolled_main.show_all()

    def on_button_sub1_clicked(self, btn):
        self.scrolled_songs.hide()
        self.scrolled_sub2.hide()
        self.button_sub1.hide()
        self.button_sub2.hide()
        self.control_box.hide()
        self.scrolled_sub1.show_all()

    def on_button_sub2_clicked(self, btn):
        self.scrolled_songs.hide()
        self.button_sub2.hide()
        self.control_box.hide()
        self.label.set_label(self.button_sub2.get_label())
        self.scrolled_sub2.show_all()
