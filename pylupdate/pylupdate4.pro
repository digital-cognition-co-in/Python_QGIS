TEMPLATE = app
QT -= gui
QT += xml
CONFIG += warn_on release
CONFIG -= android_install
target.path = /home/dhankar/anaconda2/bin
INSTALLS += target
INCLUDEPATH += /media/dhankar/Dhankar_1/a1_18/a1_______QGIS/pylupdate
VPATH = /media/dhankar/Dhankar_1/a1_18/a1_______QGIS/pylupdate
HEADERS = proparser.h simtexth.h metatranslator.h translator.h
SOURCES = proparser.cpp fetchtr.cpp main.cpp translator.cpp numberh.cpp metatranslator.cpp sametexth.cpp simtexth.cpp merge.cpp