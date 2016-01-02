if BUILD_TESTS
  AM_CPPFLAGS = $(GTEST_CPPFLAGS)
  AM_CXXFLAGS = $(GTEST_CXXFLAGS)
  AM_LDFLAGS = $(GTEST_LDFLAGS) $(GTEST_LIBS)

  TESTS = math_test
  check_PROGRAMS = math_test
  math_test_SOURCES = main.cc math_test.cc
  math_test_CPPFLAGS = -I$(top_srcdir)/include
  math_test_LDADD = $(top_builddir)/src/libschemeutils.la
endif
