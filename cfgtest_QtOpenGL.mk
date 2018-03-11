#############################################################################
# Makefile for building: cfgtest_QtOpenGL
# Generated by qmake (3.0) (Qt 5.6.0)
# Project:  cfgtest_QtOpenGL.pro
# Template: app
# Command: /home/dhankar/anaconda2/bin/qmake -o cfgtest_QtOpenGL.mk cfgtest_QtOpenGL.pro
#############################################################################

MAKEFILE      = cfgtest_QtOpenGL.mk

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -O2 -std=gnu++0x -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I. -I/home/dhankar/anaconda2/include/qt -I/home/dhankar/anaconda2/include/qt/QtOpenGL -I/home/dhankar/anaconda2/include/qt/QtWidgets -I/home/dhankar/anaconda2/include/qt/QtGui -I/home/dhankar/anaconda2/include/qt/QtCore -I. -I/home/dhankar/anaconda2/mkspecs/linux-g++
QMAKE         = /home/dhankar/anaconda2/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = cfgtest_QtOpenGL1.0.0
DISTDIR = /media/dhankar/Dhankar_1/a1_18/a1_______QGIS/.tmp/cfgtest_QtOpenGL1.0.0
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/home/dhankar/anaconda2/lib
LIBS          = $(SUBLIBS) -L/home/dhankar/anaconda2/lib -lQt5OpenGL -lQt5Widgets -lQt5Gui -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = cfgtest_QtOpenGL.cpp 
OBJECTS       = cfgtest_QtOpenGL.o
DIST          = /home/dhankar/anaconda2/mkspecs/features/spec_pre.prf \
		/home/dhankar/anaconda2/mkspecs/common/unix.conf \
		/home/dhankar/anaconda2/mkspecs/common/linux.conf \
		/home/dhankar/anaconda2/mkspecs/common/sanitize.conf \
		/home/dhankar/anaconda2/mkspecs/common/gcc-base.conf \
		/home/dhankar/anaconda2/mkspecs/common/gcc-base-unix.conf \
		/home/dhankar/anaconda2/mkspecs/common/g++-base.conf \
		/home/dhankar/anaconda2/mkspecs/common/g++-unix.conf \
		/home/dhankar/anaconda2/mkspecs/qconfig.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bluetooth.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_clucene_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_concurrent.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_concurrent_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_core.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_core_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_dbus.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_dbus_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designer.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designer_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_gui.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_gui_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_help.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_help_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimedia.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimedia_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_network.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_network_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_nfc.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_nfc_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_opengl.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_opengl_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_openglextensions.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_printsupport.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_printsupport_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qml.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qml_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmltest.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmltest_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quick.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quick_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickwidgets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_script.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_script_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_scripttools.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_scripttools_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_sql.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_sql_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_svg.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_svg_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_testlib.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_testlib_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uiplugin.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uitools.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uitools_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webchannel.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webchannel_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkit.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkit_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_websockets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_websockets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_widgets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_widgets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_x11extras.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_x11extras_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xml.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xml_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/home/dhankar/anaconda2/mkspecs/features/qt_functions.prf \
		/home/dhankar/anaconda2/mkspecs/features/qt_config.prf \
		/home/dhankar/anaconda2/mkspecs/linux-g++/qmake.conf \
		/home/dhankar/anaconda2/mkspecs/features/spec_post.prf \
		/home/dhankar/anaconda2/mkspecs/features/exclusive_builds.prf \
		/home/dhankar/anaconda2/mkspecs/features/default_pre.prf \
		/home/dhankar/anaconda2/mkspecs/features/resolve_config.prf \
		/home/dhankar/anaconda2/mkspecs/features/default_post.prf \
		/home/dhankar/anaconda2/mkspecs/features/warn_on.prf \
		/home/dhankar/anaconda2/mkspecs/features/qt.prf \
		/home/dhankar/anaconda2/mkspecs/features/resources.prf \
		/home/dhankar/anaconda2/mkspecs/features/moc.prf \
		/home/dhankar/anaconda2/mkspecs/features/unix/opengl.prf \
		/home/dhankar/anaconda2/mkspecs/features/uic.prf \
		/home/dhankar/anaconda2/mkspecs/features/unix/thread.prf \
		/home/dhankar/anaconda2/mkspecs/features/testcase_targets.prf \
		/home/dhankar/anaconda2/mkspecs/features/exceptions.prf \
		/home/dhankar/anaconda2/mkspecs/features/yacc.prf \
		/home/dhankar/anaconda2/mkspecs/features/lex.prf \
		cfgtest_QtOpenGL.pro  cfgtest_QtOpenGL.cpp
QMAKE_TARGET  = cfgtest_QtOpenGL
DESTDIR       = 
TARGET        = cfgtest_QtOpenGL


first: all
####### Build rules

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

cfgtest_QtOpenGL.mk: cfgtest_QtOpenGL.pro /home/dhankar/anaconda2/mkspecs/linux-g++/qmake.conf /home/dhankar/anaconda2/mkspecs/features/spec_pre.prf \
		/home/dhankar/anaconda2/mkspecs/common/unix.conf \
		/home/dhankar/anaconda2/mkspecs/common/linux.conf \
		/home/dhankar/anaconda2/mkspecs/common/sanitize.conf \
		/home/dhankar/anaconda2/mkspecs/common/gcc-base.conf \
		/home/dhankar/anaconda2/mkspecs/common/gcc-base-unix.conf \
		/home/dhankar/anaconda2/mkspecs/common/g++-base.conf \
		/home/dhankar/anaconda2/mkspecs/common/g++-unix.conf \
		/home/dhankar/anaconda2/mkspecs/qconfig.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bluetooth.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_clucene_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_concurrent.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_concurrent_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_core.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_core_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_dbus.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_dbus_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designer.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designer_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_gui.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_gui_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_help.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_help_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimedia.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimedia_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_network.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_network_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_nfc.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_nfc_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_opengl.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_opengl_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_openglextensions.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_printsupport.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_printsupport_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qml.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qml_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmltest.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmltest_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quick.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quick_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickwidgets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_script.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_script_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_scripttools.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_scripttools_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_sql.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_sql_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_svg.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_svg_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_testlib.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_testlib_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uiplugin.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uitools.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uitools_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webchannel.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webchannel_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkit.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkit_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_websockets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_websockets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_widgets.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_widgets_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_x11extras.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_x11extras_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xml.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xml_private.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/home/dhankar/anaconda2/mkspecs/features/qt_functions.prf \
		/home/dhankar/anaconda2/mkspecs/features/qt_config.prf \
		/home/dhankar/anaconda2/mkspecs/linux-g++/qmake.conf \
		/home/dhankar/anaconda2/mkspecs/features/spec_post.prf \
		/home/dhankar/anaconda2/mkspecs/features/exclusive_builds.prf \
		/home/dhankar/anaconda2/mkspecs/features/default_pre.prf \
		/home/dhankar/anaconda2/mkspecs/features/resolve_config.prf \
		/home/dhankar/anaconda2/mkspecs/features/default_post.prf \
		/home/dhankar/anaconda2/mkspecs/features/warn_on.prf \
		/home/dhankar/anaconda2/mkspecs/features/qt.prf \
		/home/dhankar/anaconda2/mkspecs/features/resources.prf \
		/home/dhankar/anaconda2/mkspecs/features/moc.prf \
		/home/dhankar/anaconda2/mkspecs/features/unix/opengl.prf \
		/home/dhankar/anaconda2/mkspecs/features/uic.prf \
		/home/dhankar/anaconda2/mkspecs/features/unix/thread.prf \
		/home/dhankar/anaconda2/mkspecs/features/testcase_targets.prf \
		/home/dhankar/anaconda2/mkspecs/features/exceptions.prf \
		/home/dhankar/anaconda2/mkspecs/features/yacc.prf \
		/home/dhankar/anaconda2/mkspecs/features/lex.prf \
		cfgtest_QtOpenGL.pro \
		/home/dhankar/anaconda2/lib/libQt5OpenGL.prl \
		/home/dhankar/anaconda2/lib/libQt5Widgets.prl \
		/home/dhankar/anaconda2/lib/libQt5Gui.prl \
		/home/dhankar/anaconda2/lib/libQt5Core.prl
	$(QMAKE) -o cfgtest_QtOpenGL.mk cfgtest_QtOpenGL.pro
/home/dhankar/anaconda2/mkspecs/features/spec_pre.prf:
/home/dhankar/anaconda2/mkspecs/common/unix.conf:
/home/dhankar/anaconda2/mkspecs/common/linux.conf:
/home/dhankar/anaconda2/mkspecs/common/sanitize.conf:
/home/dhankar/anaconda2/mkspecs/common/gcc-base.conf:
/home/dhankar/anaconda2/mkspecs/common/gcc-base-unix.conf:
/home/dhankar/anaconda2/mkspecs/common/g++-base.conf:
/home/dhankar/anaconda2/mkspecs/common/g++-unix.conf:
/home/dhankar/anaconda2/mkspecs/qconfig.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bluetooth.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bluetooth_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_bootstrap_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_clucene_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_concurrent.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_concurrent_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_core.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_core_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_dbus.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_dbus_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designer.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designer_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_designercomponents_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_gui.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_gui_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_help.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_help_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimedia.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimedia_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimediawidgets.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_network.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_network_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_nfc.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_nfc_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_opengl.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_opengl_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_openglextensions.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_openglextensions_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_platformsupport_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_printsupport.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_printsupport_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qml.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qml_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmltest.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qmltest_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quick.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quick_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickparticles_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickwidgets.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_script.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_script_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_scripttools.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_scripttools_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_sql.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_sql_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_svg.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_svg_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_testlib.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_testlib_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uiplugin.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uitools.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_uitools_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webchannel.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webchannel_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkit.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkit_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkitwidgets.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_websockets.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_websockets_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_widgets.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_widgets_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_x11extras.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_x11extras_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xml.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xml_private.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xmlpatterns.pri:
/home/dhankar/anaconda2/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/home/dhankar/anaconda2/mkspecs/features/qt_functions.prf:
/home/dhankar/anaconda2/mkspecs/features/qt_config.prf:
/home/dhankar/anaconda2/mkspecs/linux-g++/qmake.conf:
/home/dhankar/anaconda2/mkspecs/features/spec_post.prf:
/home/dhankar/anaconda2/mkspecs/features/exclusive_builds.prf:
/home/dhankar/anaconda2/mkspecs/features/default_pre.prf:
/home/dhankar/anaconda2/mkspecs/features/resolve_config.prf:
/home/dhankar/anaconda2/mkspecs/features/default_post.prf:
/home/dhankar/anaconda2/mkspecs/features/warn_on.prf:
/home/dhankar/anaconda2/mkspecs/features/qt.prf:
/home/dhankar/anaconda2/mkspecs/features/resources.prf:
/home/dhankar/anaconda2/mkspecs/features/moc.prf:
/home/dhankar/anaconda2/mkspecs/features/unix/opengl.prf:
/home/dhankar/anaconda2/mkspecs/features/uic.prf:
/home/dhankar/anaconda2/mkspecs/features/unix/thread.prf:
/home/dhankar/anaconda2/mkspecs/features/testcase_targets.prf:
/home/dhankar/anaconda2/mkspecs/features/exceptions.prf:
/home/dhankar/anaconda2/mkspecs/features/yacc.prf:
/home/dhankar/anaconda2/mkspecs/features/lex.prf:
cfgtest_QtOpenGL.pro:
/home/dhankar/anaconda2/lib/libQt5OpenGL.prl:
/home/dhankar/anaconda2/lib/libQt5Widgets.prl:
/home/dhankar/anaconda2/lib/libQt5Gui.prl:
/home/dhankar/anaconda2/lib/libQt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o cfgtest_QtOpenGL.mk cfgtest_QtOpenGL.pro

qmake_all: FORCE


all: cfgtest_QtOpenGL.mk $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents cfgtest_QtOpenGL.cpp $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) cfgtest_QtOpenGL.mk


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

cfgtest_QtOpenGL.o: cfgtest_QtOpenGL.cpp /home/dhankar/anaconda2/include/qt/QtOpenGL/qgl.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qopengl.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qglobal.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qconfig.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qfeatures.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qsystemdetection.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qprocessordetection.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qcompilerdetection.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qtypeinfo.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qtypetraits.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qisenum.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qsysinfo.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qlogging.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qflags.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qbasicatomic.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_bootstrap.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qgenericatomic.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_cxx11.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_gcc.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_msvc.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_armv7.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_armv6.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_armv5.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_ia64.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_x86.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qatomic_unix.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qglobalstatic.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qmutex.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qnumeric.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qversiontagging.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qt_windows.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qopengles2ext.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qopenglext.h \
		/home/dhankar/anaconda2/include/qt/QtWidgets/qwidget.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qwindowdefs.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qobjectdefs.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qnamespace.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qobjectdefs_impl.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qwindowdefs_win.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qobject.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qstring.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qchar.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qbytearray.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qrefcount.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qarraydata.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qstringbuilder.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qlist.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qalgorithms.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qiterator.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qhashfunctions.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qpair.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qbytearraylist.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qstringlist.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qregexp.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qstringmatcher.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qcoreevent.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qscopedpointer.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qmetatype.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qvarlengtharray.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qcontainerfwd.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qobject_impl.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qmargins.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpaintdevice.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qrect.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qsize.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qpoint.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpalette.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qcolor.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qrgb.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qrgba64.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qbrush.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qvector.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qmatrix.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpolygon.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qregion.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qdatastream.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qiodevice.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qline.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qtransform.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpainterpath.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qimage.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpixelformat.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpixmap.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qsharedpointer.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qshareddata.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qhash.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qsharedpointer_impl.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qfont.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qfontmetrics.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qfontinfo.h \
		/home/dhankar/anaconda2/include/qt/QtWidgets/qsizepolicy.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qcursor.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qkeysequence.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qevent.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qvariant.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qmap.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qdebug.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qtextstream.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qlocale.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qset.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qcontiguouscache.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qurl.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qurlquery.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qfile.h \
		/home/dhankar/anaconda2/include/qt/QtCore/qfiledevice.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qvector2d.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qtouchdevice.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpaintengine.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpainter.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qtextoption.h \
		/home/dhankar/anaconda2/include/qt/QtGui/qpen.h \
		/home/dhankar/anaconda2/include/qt/QtOpenGL/qglcolormap.h \
		/home/dhankar/anaconda2/include/qt/QtOpenGL/qtopenglglobal.h \
		/home/dhankar/anaconda2/include/qt/QtGui/QSurfaceFormat \
		/home/dhankar/anaconda2/include/qt/QtGui/qsurfaceformat.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cfgtest_QtOpenGL.o cfgtest_QtOpenGL.cpp

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

