#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([omegago], [0.1], [dengmingxuan@hotmail.com])
AM_INIT_AUTOMAKE

AC_CONFIG_SRCDIR([omegagomain/OmegaGoMain.cpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX

AC_PROG_RANLIB
AX_BOOST_BASE([1.50.0])
AX_BOOST_THREAD
AX_BOOST_SYSTEM
AX_BOOST_DATE_TIME
AX_BOOST_FILESYSTEM
AX_BOOST_PROGRAM_OPTIONS
AX_BOOST_UNIT_TEST_FRAMEWORK

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 omegagomain/Makefile
                 smartgame/Makefile])
AC_OUTPUT
