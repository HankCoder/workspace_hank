
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


class TopList(Gtk.Box):
    '''TopList tab in notebook.'''

    title = _('Top List')

    def __init__(self, app):
        super().__init__()
        self.set_orientation(Gtk.Orientation.VERTICAL)
        self.app = app

    def first(self):
        app = self.app

        self.buttonbox = Gtk.Box(spacing=5)
        self.pack_start(self.buttonbox, False, False, 0)
        button_home = Gtk.Button(_('TopList'))
        button_home.connect('clicked', self.on_button_home_clicked)
        self.buttonbox.pack_start(button_home, False, False, 0)
        self.label = Gtk.Label('')
        self.buttonbox.pack_start(self.label, False, False, 0)

        # checked, name, artist, album, rid, artistid, albumid
        treeview_songs = Widgets.TreeViewSongs(app)
        self.liststore_songs = treeview_songs.liststore
        control_box = Widgets.ControlBox(self.liststore_songs, app)
        self.buttonbox.pack_end(control_box, False, False, 0)

        self.scrolled_nodes = Gtk.ScrolledWindow()
        self.pack_start(self.scrolled_nodes, True, True, 0)
        # logo, name, nid, info, tooltip
        self.liststore_nodes = Gtk.ListStore(GdkPixbuf.Pixbuf, str, int,
                                             str, str)
        iconview_nodes = Widgets.IconView(self.liststore_nodes, tooltip=4)
        iconview_nodes.connect('item_activated',
                               self.on_iconview_nodes_item_activated)
        self.scrolled_nodes.add(iconview_nodes)

        self.scrolled_songs = Gtk.ScrolledWindow()
        self.pack_start(self.scrolled_songs, True, True, 0)
        self.scrolled_songs.add(treeview_songs)

        self.show_all()
        self.buttonbox.hide()
        self.scrolled_songs.hide()

        def _on_get_nodes(info, error):
            if error or not info or not info[0] or not info[1]:
                logger.errror('_on_get_nodes(), info: %s, error: %s' %
                              (info, error))
                return
            nodes, total_pages = info
            urls = []
            tree_iters = []
            for node in nodes:
                tree_iter = self.liststore_nodes.append([
                    Config.ANONYMOUS_PIXBUF,
                    Widgets.unescape(node['name']),
                    int(node['sourceid']),
                    Widgets.unescape(node['info']),
                    Widgets.set_tooltip_with_song_tips(node['name'],
                                                       node['tips']),
                ])
                urls.append(node['pic'])
                tree_iters.append(tree_iter)
            self.liststore_nodes.timestamp = time.time()
            Net.async_call(Net.update_liststore_images, self.liststore_nodes, 0,
                           tree_iters, urls)

        nid = 2
        page = 0
        Net.async_call(Net.get_nodes, nid, page, callback=_on_get_nodes)

    def on_button_home_clicked(self, btn):
        self.scrolled_nodes.show_all()
        self.scrolled_songs.hide()
        self.buttonbox.hide()

    def on_iconview_nodes_item_activated(self, iconview, path):
        model = iconview.get_model()
        self.buttonbox.show_all()
        self.label.set_label(model[path][1])
        self.app.playlist.advise_new_playlist_name(model[path][1])
        self.show_toplist_songs(model[path][2])

    def show_toplist_songs(self, nid):
        def _on_get_toplist_songs(songs, error):
            if not songs or error:
                logger.error('show_toplist_songs(), songs: %s, error: %s' %
                             (songs, error))
                return
            self.liststore_songs.clear()
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

        self.scrolled_nodes.hide()
        self.scrolled_songs.show_all()
        self.scrolled_songs.get_vscrollbar().set_value(0)
        Net.async_call(Net.get_toplist_songs, nid,
                       callback=_on_get_toplist_songs)
