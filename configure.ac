#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([shared_meataxe], [1.0.1], [simon.king@uni-jena.de])
AM_INIT_AUTOMAKE([check-news dist-bzip2 -Wall])
AM_PROG_AR
LT_INIT([disable-static])
AC_CONFIG_SRCDIR([src/meataxe.h])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

DX_DOXYGEN_FEATURE(ON)
DX_DOT_FEATURE(OFF)
DX_HTML_FEATURE(ON)
DX_CHM_FEATURE(OFF)
DX_CHI_FEATURE(OFF)
DX_MAN_FEATURE(OFF)
DX_RTF_FEATURE(OFF)
DX_XML_FEATURE(OFF)
DX_PDF_FEATURE(OFF)
DX_PS_FEATURE(OFF)
DX_INIT_DOXYGEN([shared_meataxe], [$(top_srcdir)/etc/Doxyfile], [$(docdir)])

# Checks for programs.
AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_INSTALL
AC_PROG_MKDIR_P

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h string.h unistd.h stdio.h stdarg.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_SIZE_T
AC_C_BIGENDIAN
AC_CHECK_SIZEOF([long])

# Checks for library functions.
AC_FUNC_MALLOC

AC_CONFIG_FILES([Makefile src/Makefile test/Makefile])
AC_OUTPUT

# Summary
echo "
SUMMARY
=======
$PACKAGE_NAME version $PACKAGE_VERSION
Prefix.........: $prefix
Is big endian..: $WORDS_BIGENDIAN
C Compiler.....: $CC $CFLAGS $CPPFLAGS
Linker.........: $LD $LDFLAGS $LIBS
Doxygen........: ${DX_ENV:-NONE}
"
