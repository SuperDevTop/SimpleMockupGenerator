# Quazip 0.7.3
# Useful Doc: http://quazip.sourceforge.net/
# With thanks to VoidRealms
# Uses zlib License
#---

#Set variables
QUAZIPCODEDIR = $$PWD/quazip/073

#include the compiled code -- WE ARE NOT USING UNIX PLATFORMS IN THIS PROJECT.
#unix {
#  LIBS += -L$${ZLIBCODEDIR} -lz
#}

win32 {
    DEFINES += QUAZIP_STATIC
}

#include files
INCLUDEPATH += $${QUAZIPCODEDIR}
HEADERS += $${QUAZIPCODEDIR}/*.h
SOURCES += $${QUAZIPCODEDIR}/*.cpp
SOURCES += $${QUAZIPCODEDIR}/*.c
HEADERS += $${QUAZIPCODEDIR}/zlib/*.h
SOURCES += $${QUAZIPCODEDIR}/zlib/*.c
