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

message(STATUS "Including xpack-sifive-platform-hifive1...")

# -----------------------------------------------------------------------------

function(target_sources_xpack_sifive_platform_hifive1 target)

  get_filename_component(xpack_root_folder ${CMAKE_CURRENT_FUNCTION_LIST_DIR} DIRECTORY)

  target_sources(
    ${target}

    PRIVATE
      ${xpack_root_folder}/src/platform-functions.cpp
      ${xpack_root_folder}/src/trace-uart.cpp
  )

endfunction()

# -----------------------------------------------------------------------------

function(target_include_directories_xpack_sifive_platform_hifive1 target)

  get_filename_component(xpack_root_folder ${CMAKE_CURRENT_FUNCTION_LIST_DIR} DIRECTORY)

  target_include_directories(
    ${target}

    PRIVATE
      ${xpack_root_folder}/include
  )

endfunction()

# -----------------------------------------------------------------------------
