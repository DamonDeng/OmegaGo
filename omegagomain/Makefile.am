AUTOMAKE_OPTIONS = foreign

bin_PROGRAMS = \
omegago

omegago_SOURCES = OmegaGoMain.cpp

omegago_LDFLAGS = $(BOOST_LDFLAGS)

omegago_LDADD = \
../smartgame/libomegago_smartgame.a \
../gtpengine/libomegago_gtpengine.a \
../go/libomegago_go.a \
$(BOOST_PROGRAM_OPTIONS_LIB) \
$(BOOST_FILESYSTEM_LIB) \
$(BOOST_SYSTEM_LIB) \
$(BOOST_THREAD_LIB)

omegago_DEPENDENCIES = \
../smartgame/libomegago_smartgame.a \
../gtpengine/libomegago_gtpengine.a \
../go/libomegago_go.a 

omegago_CPPFLAGS = \
$(BOOST_CPPFLAGS) \
-I@top_srcdir@/smartgame \
-I@top_srcdir@/gtpengine \
-I@top_srcdir@/go



DISTCLEANFILES = *~

