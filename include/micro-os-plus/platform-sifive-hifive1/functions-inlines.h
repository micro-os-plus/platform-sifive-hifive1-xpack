/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2017 Liviu Ionescu.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT/.
 */

#ifndef MICRO_OS_PLUS_PLATFORM_HIFIVE1_FUNCTIONS_INLINES_H_
#define MICRO_OS_PLUS_PLATFORM_HIFIVE1_FUNCTIONS_INLINES_H_

// ----------------------------------------------------------------------------

#include <stdint.h>

// ----------------------------------------------------------------------------

/*
 * HiFive1 support functions.
 *
 * Inline functions are first defined in C (prefixed with `riscv_board_`),
 * then, for convenience, are redefined in C++ in the `riscv::board::`
 * namespace.
 *
 * Regular functions are first defined in C++ then aliased to C.
 */

#if defined(__cplusplus)
extern "C"
{
#endif // defined(__cplusplus)

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)

// ----------------------------------------------------------------------------

#if defined(__cplusplus)

// ----------------------------------------------------------------------------

namespace riscv
{
  namespace board
  {
    // ------------------------------------------------------------------------

  }

  // --------------------------------------------------------------------------
} // namespace riscv

// ----------------------------------------------------------------------------

#endif // defined(__cplusplus)

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_PLATFORM_HIFIVE1_FUNCTIONS_INLINES_H_

// ----------------------------------------------------------------------------
