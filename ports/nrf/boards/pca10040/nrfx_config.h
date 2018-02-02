/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Glenn Ruben Bakke
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef NRFX_CONFIG_H
#define NRFX_CONFIG_H

// Port specific defines
#ifndef NRFX_LOG_ENABLED
#define NRFX_LOG_ENABLED 0
#endif

#define NRFX_LOG_UART_DISABLED 1


// NRFX configurations

#define GPIO_COUNT 1
#define NRFX_UART_ENABLED 1
#define NRFX_UART0_ENABLED 1

#define NRFX_TWI_ENABLED 1
#define NRFX_TWI0_ENABLED 1
#define NRFX_TWI1_ENABLED 1

#define NRFX_SPI_ENABLED 1
#define NRFX_SPI0_ENABLED 1
#define NRFX_SPI1_ENABLED 1
#define NRFX_SPI2_ENABLED 1
// 0 NRF_GPIO_PIN_NOPULL
// 1 NRF_GPIO_PIN_PULLDOWN
// 3 NRF_GPIO_PIN_PULLUP
#define NRFX_SPI_MISO_PULL_CFG 1

#define NRFX_RTC_ENABLED 1
#define NRFX_RTC0_ENABLED 1
#define NRFX_RTC1_ENABLED 1
#define NRFX_RTC2_ENABLED 1
#endif // NRFX_CONFIG_H
