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

#ifndef MICRO_OS_PLUS_PLATFORM_HIFIVE1_DEFINES_H_
#define MICRO_OS_PLUS_PLATFORM_HIFIVE1_DEFINES_H_

// ----------------------------------------------------------------------------

#if defined(PLATFORM_SIFIVE_HIFIVE1)
#else
#error "Only the PLATFORM_SIFIVE_HIFIVE1 is supported."
#endif

#define RISCV_PLATFORM_RTC_FREQUENCY_HZ (32768)

// ----------------------------------------------------------------------------
// Definitions from SiFive bsp/env/hifive1.h

// TODO: possibly rework, to make them consistent with device definitions.

/****************************************************************************
 * GPIO Connections
 *****************************************************************************/

// These are the GPIO bit offsets for the RGB LED on HiFive1 Board.
// These are also mapped to RGB LEDs on the Freedom E300 Arty
// FPGA Dev Kit.
// The LEDs are active low.
#define RED_LED_OFFSET 22
#define GREEN_LED_OFFSET 19
#define BLUE_LED_OFFSET 21

// These are the GPIO bit offsets for the different digital pins
// on the headers for both the HiFive1 Board and the Freedom E300
// Arty FPGA Dev Kit.
#define PIN_0_OFFSET 16
#define PIN_1_OFFSET 17
#define PIN_2_OFFSET 18
#define PIN_3_OFFSET 19
#define PIN_4_OFFSET 20
#define PIN_5_OFFSET 21
#define PIN_6_OFFSET 22
#define PIN_7_OFFSET 23
#define PIN_8_OFFSET 0
#define PIN_9_OFFSET 1
#define PIN_10_OFFSET 2
#define PIN_11_OFFSET 3
#define PIN_12_OFFSET 4
#define PIN_13_OFFSET 5
//#define PIN_14_OFFSET 8 //This pin is not connected on either board.
#define PIN_15_OFFSET 9
#define PIN_16_OFFSET 10
#define PIN_17_OFFSET 11
#define PIN_18_OFFSET 12
#define PIN_19_OFFSET 13

// These are *PIN* numbers, not
// GPIO Offset Numbers.
#define PIN_SPI1_SCK (13u)
#define PIN_SPI1_MISO (12u)
#define PIN_SPI1_MOSI (11u)
#define PIN_SPI1_SS0 (10u)
#define PIN_SPI1_SS1 (14u)
#define PIN_SPI1_SS2 (15u)
#define PIN_SPI1_SS3 (16u)

#define SS_PIN_TO_CS_ID(x) \
  ((x == PIN_SPI1_SS0 \
        ? 0 \
        : (x == PIN_SPI1_SS1 \
               ? 1 \
               : (x == PIN_SPI1_SS2 ? 2 : (x == PIN_SPI1_SS3 ? 3 : -1)))))

#define HAS_HFXOSC 1
#define HAS_LFROSC_BYPASS 1

// #define HAS_PLATFORM_BUTTONS
// The HiFive1 board does not have a dedicated user button,
// but the WAKE button can be connected with an external wire
// to GPIO18. The button is active low.
#define BUTTON_0_OFFSET 18

#define INT_DEVICE_BUTTON_0 \
  (sifive_fe310_interrupt_global_gpio0 + BUTTON_0_OFFSET)

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_PLATFORM_HIFIVE1_DEFINES_H_

// ----------------------------------------------------------------------------
