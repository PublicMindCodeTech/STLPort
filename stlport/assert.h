/*
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

#if !defined (_STLP_OUTERMOST_HEADER_ID)
#  define _STLP_OUTERMOST_HEADER_ID 0x202
#  include "..\stlport\stl\_cprolog.h>
#elif (_STLP_OUTERMOST_HEADER_ID == 0x202) && ! defined (_STLP_DONT_POP_HEADER_ID)
#  define _STLP_DONT_POP_HEADER_ID
#endif

/* evc3 doesn't have assert.h; macro assert() is defined in stl_evc.h */
#ifndef _STLP_WCE_EVC3
#  ifndef assert
#    if defined (_STLP_HAS_INCLUDE_NEXT)
#      include_next <assert.h>
#    else
#      include _STLP_NATIVE_C_HEADER(assert.h)
#    endif
#  endif
#endif

#if (_STLP_OUTERMOST_HEADER_ID == 0x202)
#  if ! defined (_STLP_DONT_POP_HEADER_ID)
#    include "..\stlport\stl\_epilog.h>
#    undef  _STLP_OUTERMOST_HEADER_ID
#  endif
#  undef  _STLP_DONT_POP_HEADER_ID
#endif