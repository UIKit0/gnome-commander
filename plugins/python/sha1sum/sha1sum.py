#       sha1sum python plugin
#       Copyright (C) 2007-2012 Piotr Eljasiak
#       Copyright (C) 2013-2014 Uwe Scholz
#
#    Part of
#       GNOME Commander - A GNOME based file manager
#       Copyright (C) 2001-2006 Marcus Bjurman
#       Copyright (C) 2007-2012 Piotr Eljasiak
#       Copyright (C) 2013-2014 Uwe Scholz
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.

try:
    import gnomevfs
except ImportError:
    import gnome.vfs as gnomevfs

import os
import string
import hashlib


def main(main_wnd_xid, active_cwd, inactive_cwd, selected_files):
    parent_dir = string.split(active_cwd, os.sep)[-1]
    if parent_dir=='':
        parent_dir = 'root'
    f_sha1sum = file(inactive_cwd+os.sep+parent_dir+'.sha1sum', 'w')
    for uri in selected_files:
        if gnomevfs.get_file_info(uri).type==gnomevfs.FILE_TYPE_REGULAR:
            f = file(active_cwd+os.sep+uri.short_name, 'rb')
            file_content = f.read()
            f.close()
            sha1sum = hashlib.sha1(file_content).hexdigest()
            f_sha1sum.write('%s  %s\n' % (sha1sum, uri.short_name))
    f_sha1sum.close()
    return True
