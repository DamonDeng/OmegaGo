AUTOMAKE_OPTIONS = foreign

bin_PROGRAMS = \
omegago

omegago_SOURCES = OmegaGoMain.cpp

omegago_LDFLAGS = $(BOOST_LDFLAGS)

omegago_LDADD = \
../smartgame/libomegago_smartgame.a \
$(BOOST_PROGRAM_OPTIONS_LIB) \
$(BOOST_FILESYSTEM_LIB) \
$(BOOST_SYSTEM_LIB) \
$(BOOST_THREAD_LIB)

omegago_DEPENDENCIES = \
../smartgame/libomegago_smartgame.a


omegago_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame

DISTCLEANFILES = *~

