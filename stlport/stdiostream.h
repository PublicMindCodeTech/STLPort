
#pragma once

#include <stdio.h>

#ifndef _STLP_misc_stdiostream_h
# define _STLP_misc_stdiostream_h
# if (__SUNPRO_CC >= 0x500 )
#  include <../CCios/stdiostream.h>
# elif defined (__SUNPRO_CC)
#  include <../CC/stdiostream.h>
#elif defined(_WIN32) || defined(_WIN64)
#pragma warning("This file is for SUN CC Only")
# else
#  error "This file is for SUN CC only. Please remove it if it causes any harm for other compilers."
# endif
#endif
