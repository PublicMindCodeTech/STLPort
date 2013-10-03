 /*
 *
 * Copyright (c) 2005
 * Francois Dumont
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
#pragma once

#ifndef _STLP_STLPORT_VERSION_H
#define _STLP_STLPORT_VERSION_H

/* STLport version */
#define _STLPORT_MAJOR 6
#define _STLPORT_MINOR 0
#define _STLPORT_PATCHLEVEL 0

#define _STLPORT_VERSION 0x600

#define _STLPORTLIB_VERSIONSTR "6.0.0"

#define _STLPORTLIB_VERSIONHIGHSTR _STLPORT_MAJOR, _STLPORT_MINOR, _STLPORT_PATCHLEVEL

#ifdef _DEBUG
#define STLPORTLIB_BUILD_ "d"
#else
#define STLPORTLIB_BUILD_ ""
#endif

#endif /* _STLP_STLPORT_VERSION_H */
