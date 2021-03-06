/*
  GNOME Commander - A GNOME based file manager
  Copyright (C) 2001-2006 Marcus Bjurman
  Copyright (C) 2007-2012 Piotr Eljasiak
    Copyright (C) 2013-2014 Uwe Scholz

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.

   Author: Assaf Gordon  <agordon88@gmail.com>
*/

#include <glib.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <err.h>

#include <glib.h>
#include <gtk/gtk.h>

#include <config.h>

#include <libgviewer/libgviewer.h>
#include <libgnomeui/gnome-ui-init.h>


static void destroy(GObject *a, gpointer data)
{
    g_warning("destroy");
    gtk_main_quit();
}


int main(int argc, char *argv[])
{
    GnomeProgram *program;

    program = gnome_program_init (PACKAGE, VERSION, LIBGNOMEUI_MODULE,
                                  argc, argv,
                                  GNOME_PARAM_HUMAN_READABLE_NAME, "File Manager",
                                  GNOME_PARAM_APP_DATADIR, DATADIR,
                                  GNOME_PARAM_NONE);

    GtkWidget *w = gviewer_window_file_view (argv[1], NULL);

    gtk_widget_show (w);

    g_signal_connect(w, "delete-event", G_CALLBACK (destroy), NULL);

    gtk_main ();

    return 0;
}
