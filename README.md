STLPort 5.2.1
==============

<p>Build script commands</p>
<br>(-select your compiler version from STLPort directory)</br>
run
build-msvcxx-x64.bat or build-msvcxx-x86.bat

or run
cmd 
configure msvc11x64 --with-dynamic-rtl
or
configure msvc11 --with-dynamic-rtl

run
from vcvars-x86 - nmake clean install
or
from vcvars-x64 - nmake clean install


info
if error not fiding vc directories add to system environment variable path: ;C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC;C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\bin;C:\Program Files (x86)\Microsoft Visual Studio 11.0\Common7\IDE;
and windows sdk include/libs paths if also can't find include files ans lib files.


COPYRIGHTS
   Copyright (c) 1994 Hewlett-Packard Company

   Copyright (c) 1996,97 Silicon Graphics Computer Systems, Inc.

   Copyright (c) 1997 Moscow Center for SPARC Technology.

   Copyright (c) 1997 Mark of the Unicorn, Inc.

   Copyright (c) 1999-2003 Boris Fomitchev

   Copyright (c) 2000 Jens Maurer

   Copyright (c) 2003-2008 Francois Dumont

   Copyright (c) 1997-2010 Petr Ovtchenkov

   Copyright (c) 2008-2009 Dmitry Osmakov

   This material is provided "as is", with absolutely no warranty expressed
   or implied. Any use is at your own risk.

   Permission to use or copy this software for any purpose is hereby granted
   without fee, provided the above notices are retained on all copies.
   Permission to modify the code and to distribute modified code is granted,
   provided the above notices are retained, and a notice that the code was
   modified is included with the above copyright notice.
