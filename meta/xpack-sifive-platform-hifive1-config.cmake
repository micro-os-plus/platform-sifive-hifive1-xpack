#
# This file is part of the µOS++ distribution.
#   (https://github.com/micro-os-plus)
# Copyright (c) 2021 Liviu Ionescu
#
# This Source Code Form is subject to the terms of the MIT License.
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/MIT/.
#
# -----------------------------------------------------------------------------

# https://cmake.org/cmake/help/v3.20/
# https://cmake.org/cmake/help/v3.20/manual/cmake-packages.7.html#package-configuration-file
cmake_minimum_required(VERSION 3.20)

# Use targets as include markers (variables are not scope independent).
if(TARGET xpack-sifive-platform-hifive1-included)
  return()
else()
  add_custom_target(xpack-sifive-platform-hifive1-included)
endif()

if(NOT TARGET micro-os-plus-build-helper-included)
  message(FATAL_ERROR "Include the mandatory build-helper (xpacks/micro-os-plus-build-helper/cmake/xpack-helper.cmake)")
endif()

message(STATUS "Processing xPack ${PACKAGE_JSON_NAME}@${PACKAGE_JSON_VERSION}...")

# -----------------------------------------------------------------------------
# Preprocessor symbols.

set(xpack_platform_compile_definition "PLATFORM_SIFIVE_HIFIVE1")

# -----------------------------------------------------------------------------

find_package(xpack-sifive-devices REQUIRED)
find_package(micro-os-plus-diag-trace REQUIRED)

# -----------------------------------------------------------------------------

get_filename_component(xpack_current_folder ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)

# -----------------------------------------------------------------------------

if(NOT TARGET xpack-sifive-platform-hifive1-interface)

  add_library(xpack-sifive-platform-hifive1-interface INTERFACE EXCLUDE_FROM_ALL)

  # -------------------------------------------------------------------------

  set(source_files
    ${xpack_current_folder}/src/platform-functions.cpp
    ${xpack_current_folder}/src/trace-uart.cpp
  )

  xpack_display_relative_paths("${source_files}" "${xpack_current_folder}")

  target_sources(
    xpack-sifive-platform-hifive1-interface

    INTERFACE
      ${source_files}
  )

  target_include_directories(
    xpack-sifive-platform-hifive1-interface

    INTERFACE
      ${xpack_current_folder}/include
  )

  message(STATUS "+ ${xpack_platform_compile_definition}")

  target_compile_definitions(
    xpack-sifive-devices-interface

    INTERFACE
      ${xpack_platform_compile_definition}
  )

  target_link_libraries(
    xpack-sifive-platform-hifive1-interface

    INTERFACE
      sifive::devices
      micro-os-plus::architecture-riscv-platform
      micro-os-plus::diag-trace
  )

  # ---------------------------------------------------------------------------
  # Aliases.

  add_library(sifive::platform-hifive1 ALIAS xpack-sifive-platform-hifive1-interface)
  message(STATUS "=> sifive::platform-hifive1")

endif()

# -----------------------------------------------------------------------------
