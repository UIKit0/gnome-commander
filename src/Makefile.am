## Process this file with automake to produce Makefile.in

SUBDIRS = dialogs tags intviewer

AM_CPPFLAGS = \
	$(CC_WARNINGS) \
	-I$(top_srcdir) \
	$(GNOMEUI_CFLAGS) \
	$(GNOMEVFS_CFLAGS) \
	$(GNOME_KEYRING_CFLAGS) \
	$(UNIQUE_CFLAGS) \
	$(PYTHON_CFLAGS) \
	-DDATADIR=\""$(datadir)"\"\
	-DPLUGIN_DIR=\""$(libdir)/$(PACKAGE)/plugins"\"

bin_PROGRAMS = gnome-commander gcmd-block

gnome_commander_SOURCES = \
	cap.cc cap.h \
	dict.h \
	dirlist.h dirlist.cc \
	eggcellrendererkeys.h eggcellrendererkeys.cc \
	filter.h filter.cc \
	gnome-cmd-about-plugin.h gnome-cmd-about-plugin.cc \
	gnome-cmd-advrename-lexer.h gnome-cmd-advrename-lexer.ll \
	gnome-cmd-advrename-profile-component.h gnome-cmd-advrename-profile-component.cc \
	gnome-cmd-app.h gnome-cmd-app.cc \
	gnome-cmd-chmod-component.h gnome-cmd-chmod-component.cc \
	gnome-cmd-chmod-dialog.h gnome-cmd-chmod-dialog.cc \
	gnome-cmd-chown-component.h gnome-cmd-chown-component.cc \
	gnome-cmd-chown-dialog.h gnome-cmd-chown-dialog.cc \
	gnome-cmd-clist.h gnome-cmd-clist.cc \
	gnome-cmd-cmdline.h gnome-cmd-cmdline.cc \
	gnome-cmd-collection.h \
	gnome-cmd-combo.h gnome-cmd-combo.cc \
	gnome-cmd-con.h gnome-cmd-con.cc \
	gnome-cmd-con-device.h gnome-cmd-con-device.cc \
	gnome-cmd-con-dialog.h gnome-cmd-con-dialog.cc \
	gnome-cmd-con-home.h gnome-cmd-con-home.cc \
	gnome-cmd-con-list.h gnome-cmd-con-list.cc \
	gnome-cmd-con-remote.h gnome-cmd-con-remote.cc \
	gnome-cmd-con-smb.h gnome-cmd-con-smb.cc \
	gnome-cmd-convert.h gnome-cmd-convert.cc \
	gnome-cmd-data.h gnome-cmd-data.cc \
	gnome-cmd-delete-dialog.h gnome-cmd-delete-dialog.cc \
	gnome-cmd-dir-indicator.h gnome-cmd-dir-indicator.cc \
	gnome-cmd-dir.h gnome-cmd-dir.cc \
	gnome-cmd-file-collection.h gnome-cmd-file-collection.cc \
	gnome-cmd-file-list.h gnome-cmd-file-list.cc \
	gnome-cmd-file-popmenu.h gnome-cmd-file-popmenu.cc \
	gnome-cmd-file-props-dialog.h gnome-cmd-file-props-dialog.cc \
	gnome-cmd-file-selector.h gnome-cmd-file-selector.cc \
	gnome-cmd-file.h gnome-cmd-file.cc \
	gnome-cmd-hintbox.h gnome-cmd-hintbox.cc \
	gnome-cmd-includes.h \
	gnome-cmd-list-popmenu.h gnome-cmd-list-popmenu.cc \
	gnome-cmd-main-menu.h gnome-cmd-main-menu.cc \
	gnome-cmd-main-win.h gnome-cmd-main-win.cc \
	gnome-cmd-make-copy-dialog.h gnome-cmd-make-copy-dialog.cc \
	gnome-cmd-menu-button.h gnome-cmd-menu-button.cc \
	gnome-cmd-notebook.h gnome-cmd-notebook.cc \
	gnome-cmd-options-dialog.h gnome-cmd-options-dialog.cc \
	gnome-cmd-path.h \
	gnome-cmd-patternsel-dialog.h gnome-cmd-patternsel-dialog.cc \
	gnome-cmd-pixmap.h gnome-cmd-pixmap.cc \
	gnome-cmd-plain-path.h gnome-cmd-plain-path.cc \
	gnome-cmd-prepare-copy-dialog.h gnome-cmd-prepare-copy-dialog.cc \
	gnome-cmd-prepare-move-dialog.h gnome-cmd-prepare-move-dialog.cc \
	gnome-cmd-prepare-xfer-dialog.h gnome-cmd-prepare-xfer-dialog.cc \
	gnome-cmd-regex.h \
	gnome-cmd-quicksearch-popup.h gnome-cmd-quicksearch-popup.cc \
	gnome-cmd-rename-dialog.h gnome-cmd-rename-dialog.cc \
	gnome-cmd-selection-profile-component.h gnome-cmd-selection-profile-component.cc \
	gnome-cmd-smb-net.h gnome-cmd-smb-net.cc \
	gnome-cmd-smb-path.h gnome-cmd-smb-path.cc \
	gnome-cmd-style.h gnome-cmd-style.cc \
	gnome-cmd-treeview.h gnome-cmd-treeview.cc \
	gnome-cmd-types.h \
	gnome-cmd-user-actions.h gnome-cmd-user-actions.cc \
	gnome-cmd-xfer.h gnome-cmd-xfer.cc \
	gnome-cmd-xfer-progress-win.h gnome-cmd-xfer-progress-win.cc \
	gnome-cmd-xml-config.h gnome-cmd-xml-config.cc \
	handle.h \
	history.h history.cc \
	imageloader.cc imageloader.h \
	ls_colors.h ls_colors.cc \
	main.cc \
	owner.h owner.cc \
	plugin_manager.h plugin_manager.cc \
	tuple.h \
	utils.h utils.cc \
	widget-factory.h

if HAVE_PYTHON
gnome_commander_SOURCES += \
	gnome-cmd-python-plugin.h gnome-cmd-python-plugin.cc
endif

gnome_commander_LDADD = \
	$(top_builddir)/libgcmd/libgcmd.la \
	dialogs/libgcmd-dialogs.a \
	tags/libgcmd-tags.a \
	intviewer/libgviewer.a \
	$(GNOMEUI_LIBS) \
	$(GNOMEVFS_LIBS) \
	$(GNOME_KEYRING_LIBS) \
	$(UNIQUE_LIBS) \
	$(EXIV2_LIBS) \
	$(TAGLIB_LIBS) \
	$(CHM_LIBS) \
	$(GSF_LIBS) \
	$(POPPLER_LIBS) \
	$(PYTHON_LIBS) \
	$(PYTHON_EXTRA_LIBS)

gcmd_block_SOURCES = block.cc

-include $(top_srcdir)/git.mk
