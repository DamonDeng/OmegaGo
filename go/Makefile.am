noinst_LIBRARIES = libomegago_go.a

libomegago_go_a_SOURCES = \
GoBitBoard.cpp \
GoGtpEngine.cpp \
GoGtpCommandUtil.cpp

noinst_HEADERS = \
GoBitBoard.h \
GoGlobal.h \
GoGtpEngine.h \
GoGtpCommandUtil.h

libomegago_go_a_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame \
-I@top_srcdir@/gtpengine

bin_PROGRAMS = \
bitboard_test

bitboard_test_SOURCES = \
GoBitBoardTest.cpp \
GoBitBoard.cpp \
GoGtpEngine.cpp

noinst_HEADERS = \
GoBitBoard.h \
GoGtpEngine.h \
GoBitBoard.h \
GoBoard.h \
GoGlobal.h

bitboard_test_LDFLAGS = $(BOOST_LDFLAGS)

bitboard_test_LDADD = \
../smartgame/libomegago_smartgame.a \
../gtpengine/libomegago_gtpengine.a \
../go/libomegago_go.a \
$(BOOST_PROGRAM_OPTIONS_LIB) \
$(BOOST_FILESYSTEM_LIB) \
$(BOOST_SYSTEM_LIB) \
$(BOOST_THREAD_LIB)

bitboard_test_DEPENDENCIES = \
../smartgame/libomegago_smartgame.a \
../gtpengine/libomegago_gtpengine.a \
../go/libomegago_go.a 


bitboard_test_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame \
-I@top_srcdir@/gtpengine


DISTCLEANFILES = *~
