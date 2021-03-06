/* SPDX-License-Identifier: Apache-2.0 */
/*
 * Copyright (C) 2013-2015 Intel Corporation
 */
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl HOSTCHANGESNOTIFICATIONSERVICE
// ------------------------------
#ifndef HOSTCHANGESNOTIFICATIONSERVICE_EXPORT_H
#define HOSTCHANGESNOTIFICATIONSERVICE_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL)
#  define HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL */

#if !defined (HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL)
#  define HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL 1
#endif /* ! HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL */

#if defined (HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL) && (HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL == 1)
#  if defined (HOSTCHANGESNOTIFICATIONSERVICE_BUILD_DLL)
#    define HOSTCHANGESNOTIFICATIONSERVICE_Export ACE_Proper_Export_Flag
#    define HOSTCHANGESNOTIFICATIONSERVICE_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define HOSTCHANGESNOTIFICATIONSERVICE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* HOSTCHANGESNOTIFICATIONSERVICE_BUILD_DLL */
#    define HOSTCHANGESNOTIFICATIONSERVICE_Export ACE_Proper_Import_Flag
#    define HOSTCHANGESNOTIFICATIONSERVICE_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define HOSTCHANGESNOTIFICATIONSERVICE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* HOSTCHANGESNOTIFICATIONSERVICE_BUILD_DLL */
#else /* HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL == 1 */
#  define HOSTCHANGESNOTIFICATIONSERVICE_Export
#  define HOSTCHANGESNOTIFICATIONSERVICE_SINGLETON_DECLARATION(T)
#  define HOSTCHANGESNOTIFICATIONSERVICE_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* HOSTCHANGESNOTIFICATIONSERVICE_HAS_DLL == 1 */

// Set HOSTCHANGESNOTIFICATIONSERVICE_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (HOSTCHANGESNOTIFICATIONSERVICE_NTRACE)
#  if (ACE_NTRACE == 1)
#    define HOSTCHANGESNOTIFICATIONSERVICE_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define HOSTCHANGESNOTIFICATIONSERVICE_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !HOSTCHANGESNOTIFICATIONSERVICE_NTRACE */

#if (HOSTCHANGESNOTIFICATIONSERVICE_NTRACE == 1)
#  define HOSTCHANGESNOTIFICATIONSERVICE_TRACE(X)
#else /* (HOSTCHANGESNOTIFICATIONSERVICE_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define HOSTCHANGESNOTIFICATIONSERVICE_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (HOSTCHANGESNOTIFICATIONSERVICE_NTRACE == 1) */

#endif /* HOSTCHANGESNOTIFICATIONSERVICE_EXPORT_H */

// End of auto generated file.
