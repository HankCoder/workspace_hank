"""
Perform gitosis actions for a git hook.
"""
from ConfigParser import NoOptionError, NoSectionError

import errno
import logging
import os
import sys
import shutil

from gitosis import repository
from gitosis import ssh
from gitosis import gitweb
from gitosis import gitdaemon
from gitosis import app
from gitosis import util
from gitosis import mirror

def post_update(cfg, git_dir):
	export = os.path.join(git_dir, 'gitosis-export')
	try:
		shutil.rmtree(export)
	except OSError, e:
		if e.errno == errno.ENOENT:
			pass
		else:
			raise
	repository.export(git_dir=git_dir, path=export)
    os.rename(os.path.join(export, 'gitosis.conf'),
        os.path.join(export, '..', 'gitosis.conf'),)
    # re-read config to get up-to-date settings
    cfg.read(os.path.join(export, '..', 'gitosis.conf'))
    gitweb.set_descriptions(config=cfg,)
    generated = util.getGeneratedFilesDir(config=cfg)
    gitweb.generate_project_list(config=cfg,path=os.path.join(generated, 'projects.list'),)
    gitdaemon.set_export_ok(config=cfg,)
    authorized_keys = util.getSSHAuthorizedKeysPath(config=cfg)
    ssh.writeAuthorizedKeys(path=authorized_keys,keydir=os.path.join(export, 'keydir'),)

def update_mirrors(cfg, git_dir):
    mirror.push_mirrors(cfg, git_dir)

class Main(app.App):
	"""docstring for Main"""
	def create_parser(self):
		parser = super(Main, self).create_parser()
		parser.get_usage('%prog[OPTS] HOOK')
		parser.set_descriptions('Perform gitosis actions for a git hook')
		return parser

	def handle_args(self, parser, cfg, options, args):
		try:
			(hook,) = args
		except ValueError:
            parser.error('Missing argument HOOK.')

        log = logging.getLogger('gitosis.run_hook')
        os.umask(0022)

		git_dir = os.environ.get('GIT_DIR')
		if git_dir is None:
            log.error('Must have GIT_DIR set in enviroment')
            sys.exit(1)

        if hook == 'post-update':
            log.info('Running hook %s', hook)
            post_update(cfg, git_dir)
            log.info('Done.')
        elif hook == 'update-mirrors':
            log.info('Running hook %s', hook)
            update_mirrors(cfg, git_dir)
            log.info('Done.')
        else:
            log.warning('Ignoring unknown hook: %r', hook)