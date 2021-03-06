# SPDX-License-Identifier: Apache-2.0
# Copyright (C) 2010-2020 Intel Corporation
cmake_minimum_required (VERSION 3.1)

add_subdirectory ("${TOP_DIR}/CIM_Framework" "CIM_Framework")

add_library (LmsWsmanClient STATIC
  AMTEthernetPortSettingsClient.cpp
  AMTFCFHWSmanClient.cpp
  AMTRedirectionServiceWSManClient.cpp
  AuditLogWSManClient.cpp
  BaseWSManClient.cpp
  CancelOptInClient.cpp
  CryptUtils_w.cpp
  EthernetSettingsWSManClient.cpp
  HBPWSManClient.cpp
  HostBootReasonClient.cpp
  IPSIderSessionUsingPortClient.cpp
  IPSKVMSessionUsingPortClient.cpp
  IPSSOLSessionUsingPortClient.cpp
  KVMScreenSettingClient.cpp
  KVMWSManClient.cpp
  PowerManagementCapabilitiesWsManClient.cpp
  SIOWSManClient.cpp
  SyncIpClient.cpp
  TimeSynchronizationClient.cpp
  WlanWSManClient.cpp
  WifiPortClient.cpp
)

target_compile_definitions (LmsWsmanClient PUBLIC
  WSMAN_NO_DLL
)

target_link_libraries (LmsWsmanClient
  ACELIB
  CPPCIMFramework
  CPPCimFrameworkUntyped
  LmsMEIClient
  CimOpenWsmanClient
  $<$<BOOL:${WIN32}>:Crypt32.lib>
)

target_include_directories (LmsWsmanClient PUBLIC
  "./"
)

if (BUILD_TESTS)
  add_subdirectory ("WsmanClientTest" "WsmanClientTest")
endif (BUILD_TESTS)
