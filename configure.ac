#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([Schemeutils], [0.1], [https://github.com/der-scheme/schemeutils/issues],, [https://github.com/der-scheme/schemeutils])
AM_INIT_AUTOMAKE([foreign])
LT_PREREQ([2.4])
LT_INIT([dlopen])

AC_CONFIG_SRCDIR([src/math.cc])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile
                 include/Makefile
                 include/scheme/Makefile
                 src/Makefile])

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.
GTEST_LIB_CHECK([1.7], true, true)

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AX_CXX_COMPILE_STDCXX_11([noext])

# Checks for library functions.

# Automake configuration
AM_CONDITIONAL([BUILD_TESTS], [test "x$HAVE_GTEST" = xyes])

# Finish

AC_OUTPUT
