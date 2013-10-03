/*
 * Copyright (c) 1997
 * Moscow Center for SPARC Technology
 *
 * Copyright (c) 1999
 * Boris Fomitchev
 *
 * This material is provided "as is", with absolutely no warranty expressed
 * or implied. Any use is at your own risk.
 *
 * Permission to use or copy this software for any purpose is hereby granted
 * without fee, provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 *
 */

/*
 * Purpose of this file :
 *
 * To hold COMPILER-SPECIFIC portion of STLport settings.
 * In general, user should not edit this file unless
 * using the compiler not recognized below.
 *
 * If your compiler is not being recognized yet,
 * please look for definitions of macros in stl_mycomp.h,
 * copy stl_mycomp.h to stl_YOUR_COMPILER_NAME,
 * adjust flags for your compiler, and add  <include config\stl_YOUR_COMPILER_NAME>
 * to the secton controlled by unique macro defined internaly by your compiler.
 *
 * To change user-definable settings, please edit <user_config.h>
 *
 */
#pragma once

#ifndef __stl_config__system_h
#define __stl_config__system_h

#if defined (__sun)
#  include "..\stlport\stl\config\_solaris.h"
#  if defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  elif defined (__SUNPRO_CC) || defined (__SUNPRO_C)
#    include "..\stlport\stl\config\_sunprocc.h"
#  elif defined (__FCC_VERSION) /* Fujitsu Compiler, v4.0 assumed */
#    include "..\stlport\stl\config\_fujitsu.h"
#  endif
#elif defined (__hpux)
#  include "..\stlport\stl\config\_hpux.h"
#  if defined (__clang__)
#    include "..\stlport\stl\config\_clang.h"
#  elif defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  elif defined (__HP_aCC)
#    include "..\stlport\stl\config\_hpacc.h"
#  endif
#elif defined (linux) || defined (__linux__)
#  include "..\stlport\stl\config\_linux.h"
#  if defined (__BORLANDC__)
#    include "..\stlport\stl\config\_bc.h" /* Borland C++ 0x570 */
/* Intel's icc define __GNUC__! */
#  elif defined (__INTEL_COMPILER)
#    include "..\stlport\stl\config\_icc.h"
#  elif defined (__clang__)
#    include "..\stlport\stl\config\_clang.h"
#  elif defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  endif
#elif defined (__ANDROID__)
#  include "..\stlport\stl\config\_android.h"
#  if defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  endif
#elif defined (__FreeBSD__)
#  include "..\stlport\stl\config\_freebsd.h"
#  if defined (__clang__)
#    include "..\stlport\stl\config\_clang.h"
#  elif defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  endif
#elif defined (__OpenBSD__)
#  include "..\stlport\stl\config\_openbsd.h"
#  if defined (__clang__)
#    include "..\stlport\stl\config\_clang.h"
#  elif defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  endif
#elif defined (__OS400__) /* AS/400 C++ */
#  define _STLP_PLATFORM "OS 400"
#  if defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  else
#    include "..\stlport\stl\config\_as400.h"
#  endif
#elif defined (_AIX)
#  include "..\stlport\stl\config\_aix.h"
#  if defined (__xlC__) || defined (__IBMC__) || defined ( __IBMCPP__ )
     /* AIX xlC, Visual Age C++ , OS-390 C++ */
#    include "..\stlport\stl\config\_ibm.h"
#  endif
#elif defined (_CRAY) /* Cray C++ 3.4 or 3.5 */
#  define _STLP_PLATFORM "Cray"
#  include <config\_cray.h"
#elif defined (macintosh) || defined (_MAC)
#  include "..\stlport\stl\config\_mac.h"
#elif defined (__APPLE__)
#  include "..\stlport\stl\config\_macosx.h"
#  ifdef __GNUC__
#    include "..\stlport\stl\config\_gcc.h"
#  endif
#elif defined (__CYGWIN__)
#  include "..\stlport\stl\config\_cygwin.h"
#  if defined (__clang__)
#    include "..\stlport\stl\config\_clang.h"
#  elif defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  endif
#elif defined (__MINGW32__)
#  define _STLP_PLATFORM "MinGW"
#  if defined (__clang__)
#    include "..\stlport\stl\config\_clang.h"
#  elif defined (__GNUC__)
#    include "..\stlport\stl\config\_gcc.h"
#  endif
#  include "..\stlport\stl\config\_windows.h"
#elif defined (_WIN32) || defined (__WIN32) || defined (WIN32) || defined (__WIN32__) || \
      defined (__WIN16) || defined (WIN16) || defined (_WIN16)
#  if defined (__ICL) /* Intel reference compiler for Win */
#    include "..\stlport\stl\config\_intel.h"
#  elif defined (_MSC_VER) && (_MSC_VER >= 1200) && defined (UNDER_CE)
     /* Microsoft eMbedded Visual C++ 3.0, 4.0 (.NET) */
#    include "..\stlport\stl\config\_evc.h"
#  elif defined (_MSC_VER)
    /* Microsoft Visual C++ 6.0, 7.0, 7.1, 8.0 */
#    include "..\stlport\stl\config\_msvc.h"
#  endif

#  include "..\stlport\stl\config\_windows.h"
#else
#  error Unknown platform !!
#endif

#if !defined (_STLP_COMPILER)
/* Unable to identify the compiler, issue error diagnostic.
 * Edit <config\stl_mycomp.h> to set STLport up for your compiler. */
#  include "..\stlport\stl\config\stl_mycomp.h"
#endif

#endif /* __stl_config__system_h */