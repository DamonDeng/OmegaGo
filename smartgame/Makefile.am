noinst_LIBRARIES = libomegago_smartgame.a

libomegago_smartgame_a_SOURCES = \
SgDebug.cpp \
SgSystem.cpp \
SgTime.cpp \
SgException.cpp \
SgGtpCommands.cpp \
SgRandom.cpp

noinst_HEADERS = \
SgDebug.h \
SgSystem.h \
SgTime.h \
SgTimer.h \
SgException.h \
SgGtpCommands.h \
SgRandom.h

libomegago_smartgame_a_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/gtpengine \
-Itesting


DISTCLEANFILES = *~
