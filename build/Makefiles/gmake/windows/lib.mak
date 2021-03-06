# -*- makefile -*- Time-stamp: <07/05/31 08:56:06 ptr>
#
# Copyright (c) 1997-1999, 2002, 2003, 2005, 2006
# Petr Ovtchenkov
#
# Copyright (c) 2006, 2007
# Francois Dumont
#
# This material is provided "as is", with absolutely no warranty expressed
# or implied. Any use is at your own risk.
#
# Permission to use or copy this software for any purpose is hereby granted
# without fee, provided the above notices are retained on all copies.
# Permission to modify the code and to distribute modified code is granted,
# provided the above notices are retained, and a notice that the code was
# modified is included with the above copyright notice.
#

LIB_PREFIX ?=

ifeq (gcc, $(COMPILER_NAME))
LIB_PREFIX := lib
endif

ifeq (gcc, $(COMPILER_NAME))
DBG_SUFFIX := g
else
DBG_SUFFIX := d
endif

STLDBG_SUFFIX := stl${DBG_SUFFIX}

ifdef WITH_STATIC_RTL
LIB_TYPE := _x
else
LIB_TYPE := 
endif

ifdef LIB_MOTIF
LIB_SUFFIX := _$(LIB_MOTIF).${MAJOR}.${MINOR}
else
LIB_SUFFIX := .${MAJOR}.${MINOR}
endif

# Shared libraries:
SO_NAME_BASE := $(LIB_PREFIX)${LIBNAME}${LIB_TYPE}${LIB_SUFFIX}
SO_NAME        := ${SO_NAME_BASE}.$(SO)
LIB_NAME        := ${SO_NAME_BASE}.$(LIB)
#EXP_NAME        := ${SO_NAME_BASE}.$(EXP)

SO_NAME_OUT    := $(OUTPUT_DIR)/${SO_NAME}
LIB_NAME_OUT    := $(OUTPUT_DIR)/${LIB_NAME}
#EXP_NAME_OUT    := $(OUTPUT_DIR)/${EXP_NAME}

SO_NAME_DBG_BASE := $(LIB_PREFIX)${LIBNAME}${DBG_SUFFIX}${LIB_TYPE}${LIB_SUFFIX}
SO_NAME_DBG    := ${SO_NAME_DBG_BASE}.$(SO)
LIB_NAME_DBG    := ${SO_NAME_DBG_BASE}.$(LIB)
#EXP_NAME_DBG    := ${SO_NAME_DBG_BASE}.$(EXP)

SO_NAME_OUT_DBG    := $(OUTPUT_DIR_DBG)/${SO_NAME_DBG}
LIB_NAME_OUT_DBG    := $(OUTPUT_DIR_DBG)/${LIB_NAME_DBG}
#EXP_NAME_OUT_DBG    := $(OUTPUT_DIR_DBG)/${EXP_NAME_DBG}

SO_NAME_STLDBG_BASE := $(LIB_PREFIX)${LIBNAME}${STLDBG_SUFFIX}${LIB_TYPE}${LIB_SUFFIX}
SO_NAME_STLDBG    := ${SO_NAME_STLDBG_BASE}.$(SO)
LIB_NAME_STLDBG    := ${SO_NAME_STLDBG_BASE}.$(LIB)
#EXP_NAME_STLDBG    := ${SO_NAME_STLDBG_BASE}.$(EXP)

SO_NAME_OUT_STLDBG    := $(OUTPUT_DIR_STLDBG)/${SO_NAME_STLDBG}
LIB_NAME_OUT_STLDBG    := $(OUTPUT_DIR_STLDBG)/${LIB_NAME_STLDBG}
#EXP_NAME_OUT_STLDBG    := $(OUTPUT_DIR_STLDBG)/${EXP_NAME_STLDBG}

# Static libraries:
ifeq (gcc, $(COMPILER_NAME))
A_LIB_TYPE :=
else
ifdef WITH_DYNAMIC_RTL
A_LIB_TYPE := _statix
else
A_LIB_TYPE := _static
endif
endif

ifdef LIB_MOTIF
LIB_A_SUFFIX := _$(LIB_MOTIF)
else
LIB_A_SUFFIX :=
endif

A_NAME := $(LIB_PREFIX)${LIBNAME}${A_LIB_TYPE}${LIB_A_SUFFIX}.$(ARCH)
A_NAME_OUT := $(OUTPUT_DIR_A)/$(A_NAME)

A_NAME_DBG := $(LIB_PREFIX)${LIBNAME}${DBG_SUFFIX}${A_LIB_TYPE}${LIB_A_SUFFIX}.${ARCH}
A_NAME_OUT_DBG := $(OUTPUT_DIR_A_DBG)/$(A_NAME_DBG)

A_NAME_STLDBG := ${LIB_PREFIX}${LIBNAME}${STLDBG_SUFFIX}${A_LIB_TYPE}${LIB_A_SUFFIX}.${ARCH}
A_NAME_OUT_STLDBG := $(OUTPUT_DIR_A_STLDBG)/$(A_NAME_STLDBG)
