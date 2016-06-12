/*
 * Copyright (c) 2014,2015 Thomas Roell.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal with the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimers.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimers in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of Thomas Roell, nor the names of its contributors
 *     may be used to endorse or promote products derived from this Software
 *     without specific prior written permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * WITH THE SOFTWARE.
 */

#if !defined(_STM32L4_GPIO_H)
#define _STM32L4_GPIO_H

#include "armv7m.h"

#include "stm32l4xx.h"

#ifdef __cplusplus
 extern "C" {
#endif

#define GPIO_MODE_MASK                  0x0003
#define GPIO_MODE_SHIFT                 0
#define GPIO_MODE_INPUT                 0x0000
#define GPIO_MODE_OUTPUT                0x0001
#define GPIO_MODE_ALTERNATE             0x0002
#define GPIO_MODE_ANALOG                0x0003
#define GPIO_OTYPE_MASK                 0x0004
#define GPIO_OTYPE_SHIFT                2
#define GPIO_OTYPE_PUSHPULL             0x0000
#define GPIO_OTYPE_OPENDRAIN            0x0004
#define GPIO_OSPEED_MASK                0x0018
#define GPIO_OSPEED_SHIFT               3
#define GPIO_OSPEED_LOW                 0x0000
#define GPIO_OSPEED_MEDIUM              0x0008
#define GPIO_OSPEED_FAST                0x0010
#define GPIO_OSPEED_HIGH                0x0018
#define GPIO_PUPD_MASK                  0x0060
#define GPIO_PUPD_SHIFT                 5
#define GPIO_PUPD_NONE                  0x0000
#define GPIO_PUPD_PULLUP                0x0020
#define GPIO_PUPD_PULLDOWN              0x0040
#define GPIO_ANALOG_SWITCH              0x0080

#define GPIO_PIN_PA0                    0x00
#define GPIO_PIN_PA1                    0x01
#define GPIO_PIN_PA2                    0x02
#define GPIO_PIN_PA3                    0x03
#define GPIO_PIN_PA4                    0x04
#define GPIO_PIN_PA5                    0x05
#define GPIO_PIN_PA6                    0x06
#define GPIO_PIN_PA7                    0x07
#define GPIO_PIN_PA8                    0x08
#define GPIO_PIN_PA9                    0x09
#define GPIO_PIN_PA10                   0x0a
#define GPIO_PIN_PA11                   0x0b
#define GPIO_PIN_PA12                   0x0c
#define GPIO_PIN_PA13                   0x0d
#define GPIO_PIN_PA14                   0x0e
#define GPIO_PIN_PA15                   0x0f
#define GPIO_PIN_PB0                    0x10
#define GPIO_PIN_PB1                    0x11
#define GPIO_PIN_PB2                    0x12
#define GPIO_PIN_PB3                    0x13
#define GPIO_PIN_PB4                    0x14
#define GPIO_PIN_PB5                    0x15
#define GPIO_PIN_PB6                    0x16
#define GPIO_PIN_PB7                    0x17
#define GPIO_PIN_PB8                    0x18
#define GPIO_PIN_PB9                    0x19
#define GPIO_PIN_PB10                   0x1a
#define GPIO_PIN_PB11                   0x1b
#define GPIO_PIN_PB12                   0x1c
#define GPIO_PIN_PB13                   0x1d
#define GPIO_PIN_PB14                   0x1e
#define GPIO_PIN_PB15                   0x1f
#define GPIO_PIN_PC0                    0x20
#define GPIO_PIN_PC1                    0x21
#define GPIO_PIN_PC2                    0x22
#define GPIO_PIN_PC3                    0x23
#define GPIO_PIN_PC4                    0x24
#define GPIO_PIN_PC5                    0x25
#define GPIO_PIN_PC6                    0x26
#define GPIO_PIN_PC7                    0x27
#define GPIO_PIN_PC8                    0x28
#define GPIO_PIN_PC9                    0x29
#define GPIO_PIN_PC10                   0x2a
#define GPIO_PIN_PC11                   0x2b
#define GPIO_PIN_PC12                   0x2c
#define GPIO_PIN_PC13                   0x2d
#define GPIO_PIN_PC14                   0x2e
#define GPIO_PIN_PC15                   0x2f
#define GPIO_PIN_PD0                    0x30
#define GPIO_PIN_PD1                    0x31
#define GPIO_PIN_PD2                    0x32
#define GPIO_PIN_PD3                    0x33
#define GPIO_PIN_PD4                    0x34
#define GPIO_PIN_PD5                    0x35
#define GPIO_PIN_PD6                    0x36
#define GPIO_PIN_PD7                    0x37
#define GPIO_PIN_PD8                    0x38
#define GPIO_PIN_PD9                    0x39
#define GPIO_PIN_PD10                   0x3a
#define GPIO_PIN_PD11                   0x3b
#define GPIO_PIN_PD12                   0x3c
#define GPIO_PIN_PD13                   0x3d
#define GPIO_PIN_PD14                   0x3e
#define GPIO_PIN_PD15                   0x3f
#define GPIO_PIN_PE0                    0x40
#define GPIO_PIN_PE1                    0x41
#define GPIO_PIN_PE2                    0x42
#define GPIO_PIN_PE3                    0x43
#define GPIO_PIN_PE4                    0x44
#define GPIO_PIN_PE5                    0x45
#define GPIO_PIN_PE6                    0x46
#define GPIO_PIN_PE7                    0x47
#define GPIO_PIN_PE8                    0x48
#define GPIO_PIN_PE9                    0x49
#define GPIO_PIN_PE10                   0x4a
#define GPIO_PIN_PE11                   0x4b
#define GPIO_PIN_PE12                   0x4c
#define GPIO_PIN_PE13                   0x4d
#define GPIO_PIN_PE14                   0x4e
#define GPIO_PIN_PE15                   0x4f
#define GPIO_PIN_PF0                    0x50
#define GPIO_PIN_PF1                    0x51
#define GPIO_PIN_PF2                    0x52
#define GPIO_PIN_PF3                    0x53
#define GPIO_PIN_PF4                    0x54
#define GPIO_PIN_PF5                    0x55
#define GPIO_PIN_PF6                    0x56
#define GPIO_PIN_PF7                    0x57
#define GPIO_PIN_PF8                    0x58
#define GPIO_PIN_PF9                    0x59
#define GPIO_PIN_PF10                   0x5a
#define GPIO_PIN_PF11                   0x5b
#define GPIO_PIN_PF12                   0x5c
#define GPIO_PIN_PF13                   0x5d
#define GPIO_PIN_PF14                   0x5e
#define GPIO_PIN_PF15                   0x5f
#define GPIO_PIN_PG0                    0x60
#define GPIO_PIN_PG1                    0x61
#define GPIO_PIN_PG2                    0x62
#define GPIO_PIN_PG3                    0x63
#define GPIO_PIN_PG4                    0x64
#define GPIO_PIN_PG5                    0x65
#define GPIO_PIN_PG6                    0x66
#define GPIO_PIN_PG7                    0x67
#define GPIO_PIN_PG8                    0x68
#define GPIO_PIN_PG9                    0x69
#define GPIO_PIN_PG10                   0x6a
#define GPIO_PIN_PG11                   0x6b
#define GPIO_PIN_PG12                   0x6c
#define GPIO_PIN_PG13                   0x6d
#define GPIO_PIN_PG14                   0x6e
#define GPIO_PIN_PG15                   0x6f
#define GPIO_PIN_PH0                    0x70
#define GPIO_PIN_PH1                    0x71
#define GPIO_PIN_NONE                   0xff

#define GPIO_PIN_INDEX_MASK             0x000f
#define GPIO_PIN_INDEX_SHIFT            0
#define GPIO_PIN_GROUP_MASK             0x00f0
#define GPIO_PIN_GROUP_SHIFT            4
#define GPIO_PIN_AFSEL_MASK             0x0f00
#define GPIO_PIN_AFSEL_SHIFT            8

#define GPIO_PIN_IO_MASK                0x00ff
#define GPIO_PIN_IO_SHIFT               0

#define GPIO_PIN_PA8_MCO		0x0008
#define GPIO_PIN_PA13_JTMS_SWDIO	0x000d
#define GPIO_PIN_PA14_JTCK_SWCLK	0x000e
#define GPIO_PIN_PA15_JTDI		0x000f
#define GPIO_PIN_PB2_RTC_OUT		0x0012
#define GPIO_PIN_PB3_JTDO_TRACESWO	0x0013
#define GPIO_PIN_PB4_NJRST		0x0014
#define GPIO_PIN_PB15_RTC_REFIN		0x001f
#define GPIO_PIN_PE2_TRACECK		0x0042
#define GPIO_PIN_PE3_TRACED0		0x0043
#define GPIO_PIN_PE4_TRACED1		0x0044
#define GPIO_PIN_PE5_TRACED2		0x0045
#define GPIO_PIN_PE6_TRACED3		0x0046

#define GPIO_PIN_PA8_USART1_CK		0x0708
#define GPIO_PIN_PA9_USART1_TX		0x0709
#define GPIO_PIN_PA10_USART1_RX		0x070a
#define GPIO_PIN_PA11_USART1_CTS	0x070b
#define GPIO_PIN_PA12_USART1_RTS_DE	0x070c
#define GPIO_PIN_PB3_USART1_RTS_DE	0x0713
#define GPIO_PIN_PB4_USART1_CTS		0x0714
#define GPIO_PIN_PB5_USART1_CK		0x0715
#define GPIO_PIN_PB6_USART1_TX		0x0716
#define GPIO_PIN_PB7_USART1_RX		0x0717
#define GPIO_PIN_PG9_USART1_TX		0x0769
#define GPIO_PIN_PG10_USART1_RX		0x076a
#define GPIO_PIN_PG11_USART1_CTS	0x076b
#define GPIO_PIN_PG12_USART1_RTS_DE	0x076c
#define GPIO_PIN_PG13_USART1_CK		0x076d

#define GPIO_PIN_PA0_USART2_CTS		0x0700
#define GPIO_PIN_PA1_USART2_RTS_DE	0x0701
#define GPIO_PIN_PA2_USART2_TX		0x0702
#define GPIO_PIN_PA3_USART2_RX		0x0703
#define GPIO_PIN_PA4_USART2_CK		0x0704
#define GPIO_PIN_PD3_USART2_CTS		0x0733
#define GPIO_PIN_PD4_USART2_RTS_DE	0x0734
#define GPIO_PIN_PD5_USART2_TX		0x0735
#define GPIO_PIN_PD6_USART2_RX		0x0736
#define GPIO_PIN_PD7_USART2_CK		0x0737

#define GPIO_PIN_PA6_USART3_CTS		0x0706
#define GPIO_PIN_PB0_USART3_CK		0x0710
#define GPIO_PIN_PB1_USART3_RTS_DE	0x0711
#define GPIO_PIN_PB10_USART3_TX		0x071a
#define GPIO_PIN_PB11_USART3_RX		0x071b
#define GPIO_PIN_PB12_USART3_CK		0x071c
#define GPIO_PIN_PB13_USART3_CTS	0x071d
#define GPIO_PIN_PB14_USART3_RTS_DE	0x071e
#define GPIO_PIN_PC4_USART3_TX		0x0724
#define GPIO_PIN_PC5_USART3_RX		0x0725
#define GPIO_PIN_PC10_USART3_TX		0x072a
#define GPIO_PIN_PC11_USART3_RX		0x072b
#define GPIO_PIN_PC12_USART3_CK		0x072c
#define GPIO_PIN_PD2_USART3_RTS_DE	0x0732
#define GPIO_PIN_PD8_USART3_TX		0x0738
#define GPIO_PIN_PD9_USART3_RX		0x0739
#define GPIO_PIN_PD10_USART3_CK		0x073a
#define GPIO_PIN_PD11_USART3_CTS	0x073b
#define GPIO_PIN_PD12_USART3_RTS_DE	0x073c

#define GPIO_PIN_PA0_UART4_TX		0x0800
#define GPIO_PIN_PA1_UART4_RX		0x0801
#define GPIO_PIN_PA15_UART4_RTS_DE	0x080f
#define GPIO_PIN_PB7_UART4_CTS		0x0817
#define GPIO_PIN_PC10_UART4_TX		0x082a
#define GPIO_PIN_PC11_UART4_RX		0x082b

#define GPIO_PIN_PB4_UART5_RTS_DE	0x0814
#define GPIO_PIN_PB5_UART5_CTS		0x0815
#define GPIO_PIN_PC12_UART5_TX		0x082c
#define GPIO_PIN_PD2_UART5_RX		0x0832

#define GPIO_PIN_PB10_LPUART1_RX	0x081a
#define GPIO_PIN_PB11_LPUART1_TX	0x081b
#define GPIO_PIN_PB12_LPUART1_RTS_DE	0x081c
#define GPIO_PIN_PB13_LPUART1_CTS	0x081d
#define GPIO_PIN_PC0_LPUART1_RX		0x0820
#define GPIO_PIN_PC1_LPUART1_RX		0x0821
#define GPIO_PIN_PG5_LPUART1_CTS	0x0865
#define GPIO_PIN_PG6_LPUART1_RTS_DE	0x0866
#define GPIO_PIN_PG7_LPUART1_TX		0x0867
#define GPIO_PIN_PG8_LPUART1_RX		0x0868

#define GPIO_PIN_PB5_I2C1_SMBA		0x0415
#define GPIO_PIN_PB6_I2C1_SCL		0x0416
#define GPIO_PIN_PB7_I2C1_SDA		0x0417
#define GPIO_PIN_PB8_I2C1_SCL		0x0418
#define GPIO_PIN_PB9_I2C1_SDA		0x0419
#define GPIO_PIN_PG13_I2C1_SDA		0x046d
#define GPIO_PIN_PG14_I2C1_SCL		0x046e
#define GPIO_PIN_PG15_I2C1_SMBA		0x046f

#define GPIO_PIN_PB10_I2C2_SCL		0x041a
#define GPIO_PIN_PB11_I2C2_SDA		0x041b
#define GPIO_PIN_PB12_I2C2_SMBA		0x041c
#define GPIO_PIN_PB13_I2C2_SCL		0x041d
#define GPIO_PIN_PB14_I2C2_SDA		0x041e
#define GPIO_PIN_PF0_I2C2_SDA		0x0450
#define GPIO_PIN_PF1_I2C2_SCL		0x0451
#define GPIO_PIN_PF2_I2C2_SMBA		0x0452

#define GPIO_PIN_PB2_I2C3_SMBA		0x0412
#define GPIO_PIN_PC0_I2C3_SCL		0x0420
#define GPIO_PIN_PC1_I2C3_SDA		0x0421
#define GPIO_PIN_PG6_I2C3_SMBA		0x0466
#define GPIO_PIN_PG7_I2C3_SCL		0x0467
#define GPIO_PIN_PG8_I2C3_SDA		0x0468

#define GPIO_PIN_PA4_SPI1_NSS		0x0504
#define GPIO_PIN_PA5_SPI1_SCK		0x0505
#define GPIO_PIN_PA6_SPI1_MISO		0x0506
#define GPIO_PIN_PA7_SPI1_MOSI		0x0507
#define GPIO_PIN_PA15_SPI1_NSS		0x050f
#define GPIO_PIN_PB3_SPI1_SCK		0x0513
#define GPIO_PIN_PB4_SPI1_MISO		0x0514
#define GPIO_PIN_PB5_SPI1_MOSI		0x0515
#define GPIO_PIN_PE12_SPI1_NSS		0x054c
#define GPIO_PIN_PE13_SPI1_SCK		0x054d
#define GPIO_PIN_PE14_SPI1_MISO		0x054e
#define GPIO_PIN_PE15_SPI1_MOSI		0x054f
#define GPIO_PIN_PG2_SPI1_SCK		0x0562
#define GPIO_PIN_PG3_SPI1_MISO		0x0563
#define GPIO_PIN_PG4_SPI1_MOSI		0x0564
#define GPIO_PIN_PG5_SPI1_NSS		0x0565

#define GPIO_PIN_PB9_SPI2_NSS		0x0519
#define GPIO_PIN_PB10_SPI2_SCK		0x051a
#define GPIO_PIN_PB12_SPI2_NSS		0x051c
#define GPIO_PIN_PB13_SPI2_SCK		0x051d
#define GPIO_PIN_PB14_SPI2_MISO		0x051e
#define GPIO_PIN_PB15_SPI2_MOSI		0x051f
#define GPIO_PIN_PC2_SPI2_MISO		0x0522
#define GPIO_PIN_PC3_SPI2_MOSI		0x0523
#define GPIO_PIN_PD0_SPI2_NSS		0x0530
#define GPIO_PIN_PD1_SPI2_SCK		0x0531
#define GPIO_PIN_PD3_SPI2_MISO		0x0533
#define GPIO_PIN_PD4_SPI2_MOSI		0x0534

#define GPIO_PIN_PA4_SPI3_NSS		0x0604
#define GPIO_PIN_PA15_SPI3_NSS		0x060f
#define GPIO_PIN_PB3_SPI3_SCK		0x0613
#define GPIO_PIN_PB4_SPI3_MISO		0x0614
#define GPIO_PIN_PB5_SPI3_MOSI		0x0615
#define GPIO_PIN_PC10_SPI3_SCK		0x062a
#define GPIO_PIN_PC11_SPI3_MISO		0x062b
#define GPIO_PIN_PC12_SPI3_MOSI		0x062c
#define GPIO_PIN_PG9_SPI3_SCK		0x0669
#define GPIO_PIN_PG10_SPI3_MISO		0x066a
#define GPIO_PIN_PG11_SPI3_MOSI		0x066b
#define GPIO_PIN_PG12_SPI3_NSS		0x066c

#define GPIO_PIN_PA6_QUADSPI_BK1_IO3	0x0a06
#define GPIO_PIN_PA7_QUADSPI_BK1_IO2	0x0a07
#define GPIO_PIN_PB0_QUADSPI_BK1_IO1	0x0a10
#define GPIO_PIN_PB1_QUADSPI_BK1_IO0	0x0a11
#define GPIO_PIN_PB10_QUADSPI_CLK	0x0a1a
#define GPIO_PIN_PB11_QUADSPI_BK1_NCS	0x0a1b
#define GPIO_PIN_PE10_QUADSPI_CLK	0x0a4a
#define GPIO_PIN_PE11_QUADSPI_BK1_NCS	0x0a4b
#define GPIO_PIN_PE12_QUADSPI_BK1_IO0	0x0a4c
#define GPIO_PIN_PE13_QUADSPI_BK1_IO1	0x0a4d
#define GPIO_PIN_PE14_QUADSPI_BK1_IO2	0x0a4e
#define GPIO_PIN_PE15_QUADSPI_BK1_IO3	0x0a4f

#define GPIO_PIN_PB8_SDMMC1_D4		0x0c18
#define GPIO_PIN_PB9_SDMMC1_D5		0x0c19
#define GPIO_PIN_PC6_SDMMC1_D6		0x0c26
#define GPIO_PIN_PC7_SDMMC1_D7		0x0c27
#define GPIO_PIN_PC8_SDMMC1_D0		0x0c28
#define GPIO_PIN_PC9_SDMMC1_D1		0x0c29
#define GPIO_PIN_PC10_SDMMC1_D2		0x0c2a
#define GPIO_PIN_PC11_SDMMC1_D3		0x0c2b
#define GPIO_PIN_PC12_SDMMC1_CK		0x0c2c
#define GPIO_PIN_PD2_SDMMC1_CMD		0x0c32

#define GPIO_PIN_PA0_SAI1_EXTCLK	0x0d00
#define GPIO_PIN_PA4_SAI1_FS_B		0x0d04
#define GPIO_PIN_PB3_SAI1_SCK_B		0x0d13
#define GPIO_PIN_PB4_SAI1_MCLK_B	0x0d14
#define GPIO_PIN_PB5_SAI1_SD_B		0x0d15
#define GPIO_PIN_PB6_SAI1_FS_B		0x0d16
#define GPIO_PIN_PB8_SAI1_MCLK_A	0x0d18
#define GPIO_PIN_PB9_SAI1_FS_A		0x0d19
#define GPIO_PIN_PB10_SAI1_SCK_A	0x0d1a
#define GPIO_PIN_PC3_SAI1_SD_A		0x0d23
#define GPIO_PIN_PD6_SAI1_SD_A		0x0d36
#define GPIO_PIN_PE2_SAI1_MCLK_A	0x0d42
#define GPIO_PIN_PE3_SAI1_SD_B		0x0d43
#define GPIO_PIN_PE4_SAI1_FS_A		0x0d44
#define GPIO_PIN_PE5_SAI1_SCK_A		0x0d45
#define GPIO_PIN_PE6_SAI1_SD_A		0x0d46
#define GPIO_PIN_PE7_SAI1_SD_B		0x0d47
#define GPIO_PIN_PE8_SAI1_SCK_B		0x0d48
#define GPIO_PIN_PE9_SAI1_FS_B		0x0d49
#define GPIO_PIN_PE10_SAI1_MCLK_B	0x0d4a
#define GPIO_PIN_PF6_SAI1_SD_B		0x0d56
#define GPIO_PIN_PF7_SAI1_MCLK_B	0x0d57
#define GPIO_PIN_PF8_SAI1_SCK_B		0x0d58
#define GPIO_PIN_PF9_SAI1_FS_B		0x0d59

#define GPIO_PIN_PA2_SAI2_ExTCLK	0x0d02
#define GPIO_PIN_PA15_SAI2_FS_B		0x0d0f
#define GPIO_PIN_PB12_SAI2_FS_A		0x0d1c
#define GPIO_PIN_PB13_SAI2_SCK_A	0x0d1d
#define GPIO_PIN_PB14_SAI2_MCLK_A	0x0d1e
#define GPIO_PIN_PB15_SAI2_SD_A		0x0d1f
#define GPIO_PIN_PC6_SAI2_MCLK_A	0x0d26
#define GPIO_PIN_PC7_SAI2_MCLK_B	0x0d27
#define GPIO_PIN_PC9_SAI2_EXTCLK	0x0d29
#define GPIO_PIN_PC10_SAI2_SCK_B	0x0d2a
#define GPIO_PIN_PC11_SAI2_MCLK_B	0x0d2b
#define GPIO_PIN_PC12_SAI2_SD_B		0x0d2c
#define GPIO_PIN_PD9_SAI2_MCLK_A	0x0d39
#define GPIO_PIN_PD10_SAI2_SCK_A	0x0d3a
#define GPIO_PIN_PD11_SAI2_SD_A		0x0d3b
#define GPIO_PIN_PD12_SAI2_FS_A		0x0d3c
#define GPIO_PIN_PG2_SAI2_SCK_B		0x0d62
#define GPIO_PIN_PG3_SAI2_FS_B		0x0d63
#define GPIO_PIN_PG4_SAI2_MCLK_B	0x0d64
#define GPIO_PIN_PG5_SAI2_SD_B		0x0d65
#define GPIO_PIN_PG9_SAI2_SCK_A		0x0d69
#define GPIO_PIN_PG10_SAI2_FS_A		0x0d6a
#define GPIO_PIN_PG11_SAI2_MCLK_A	0x0d6b
#define GPIO_PIN_PG12_SAI2_SD_A		0x0d6c

#define GPIO_PIN_PB1_DFSDM_DATIN0	0x0611
#define GPIO_PIN_PB2_DFSDM_CKIN0	0x0612
#define GPIO_PIN_PB6_DFSDM_DATIN5	0x0616
#define GPIO_PIN_PB7_DFSDM_CKIN5	0x0617
#define GPIO_PIN_PB8_DFSDM_DATIN6	0x0618
#define GPIO_PIN_PB9_DFSDM_CKIN6	0x0619
#define GPIO_PIN_PB10_DFSDM_DATIN7	0x061a
#define GPIO_PIN_PB11_DFSDM_CKIN7	0x061b
#define GPIO_PIN_PB12_DFSDM_DATIN1	0x061c
#define GPIO_PIN_PB13_DFSDM_CKIN1	0x061d
#define GPIO_PIN_PB14_DFSDM_DATIN2	0x061e
#define GPIO_PIN_PB15_DFSDM_CKIN2	0x061f
#define GPIO_PIN_PC0_DFSDM_DATIN4	0x0620
#define GPIO_PIN_PC1_DFSDM_CKIN4	0x0621
#define GPIO_PIN_PC2_DFSDM_CKOUT	0x0622
#define GPIO_PIN_PC6_DFSDM_CKIN3	0x0626
#define GPIO_PIN_PC7_DFSDM_DATIN3	0x0627
#define GPIO_PIN_PD0_DFSDM_DATIN7	0x0630
#define GPIO_PIN_PD1_DFSDM_CKIN7	0x0631
#define GPIO_PIN_PD3_DFSDM_DATIN0	0x0633
#define GPIO_PIN_PD4_DFSDM_CKIN0	0x0634
#define GPIO_PIN_PD6_DFSDM_DATIN1	0x0636
#define GPIO_PIN_PD7_DFSDM_CKIN1	0x0637
#define GPIO_PIN_PE4_DFSDM_DATIN3	0x0644
#define GPIO_PIN_PE5_DFSDM_CKIN3	0x0645
#define GPIO_PIN_PE7_DFSDM_DATIN2	0x0647
#define GPIO_PIN_PE8_DFSDM_CKIN2	0x0648
#define GPIO_PIN_PE9_DFSDM_CKOUT	0x0649
#define GPIO_PIN_PE10_DFSDM_DATIN4	0x064a
#define GPIO_PIN_PE11_DFSDM_CKIN4	0x064b
#define GPIO_PIN_PE12_DFSDM_DATIN5	0x064c
#define GPIO_PIN_PE13_DFSDM_CKIN5	0x064d
#define GPIO_PIN_PF13_DFSDM_DATIN6	0x065d
#define GPIO_PIN_PF14_DFSDM_CKIN6	0x065e

#define GPIO_PIN_PB12_SWPMI1_IO		0x0c1c
#define GPIO_PIN_PB13_SWPMI1_TX		0x0c1d
#define GPIO_PIN_PB14_SWPMI1_RX		0x0c1e
#define GPIO_PIN_PB15_SWPMI1_SUSPEND	0x0c1f

#define GPIO_PIN_PA8_USB_OTG_FS_SOF	0x0a08
#define GPIO_PIN_PA10_USB_OTG_FS_VBUS	0x0a09
#define GPIO_PIN_PA10_USB_OTG_FS_ID	0x0a0a
#define GPIO_PIN_PA11_USB_OTG_FS_DM	0x0a0b
#define GPIO_PIN_PA12_USB_OTG_FS_DP	0x0a0c
#define GPIO_PIN_PA13_USB_OTG_FS_NOE	0x0a0d
#define GPIO_PIN_PC9_USB_OTG_FS_NOE	0x0a29

#define GPIO_PIN_PA11_CAN1_RX		0x090b
#define GPIO_PIN_PA12_CAN1_TX		0x090c
#define GPIO_PIN_PB8_CAN1_RX		0x0918
#define GPIO_PIN_PB9_CAN1_TX		0x0919
#define GPIO_PIN_PD0_CAN1_RX		0x0930
#define GPIO_PIN_PD1_CAN1_TX		0x0931

#define GPIO_PIN_PA13_IR_OUT		0x010d
#define GPIO_PIN_PB9_IR_OUT		0x0119

#define GPIO_PIN_PA6_TIM1_BKIN		0x0106
#define GPIO_PIN_PA6_TIM1_BKIN_COMP2	0x0c06
#define GPIO_PIN_PA7_TIM1_CH1IN		0x0107
#define GPIO_PIN_PA8_TIM1_CH1		0x0108
#define GPIO_PIN_PA9_TIM1_CH2		0x0109
#define GPIO_PIN_PA10_TIM1_CH3		0x010a
#define GPIO_PIN_PA11_TIM1_CH4		0x010b
#define GPIO_PIN_PA11_TIM1_BKIN2	0x020b
#define GPIO_PIN_PA11_TIM1_BKIN2_COMP1	0x0c0b
#define GPIO_PIN_PA12_TIM1_ETR		0x010c
#define GPIO_PIN_PB0_TIM1_CH2N		0x0110
#define GPIO_PIN_PB1_TIM1_CH3N		0x0111
#define GPIO_PIN_PB12_TIM1_BKIN		0x011c
#define GPIO_PIN_PB12_TIM1_BKIN_COMP2	0x031c
#define GPIO_PIN_PB13_TIM1_CH1N		0x011d
#define GPIO_PIN_PB14_TIM1_CH2N		0x011e
#define GPIO_PIN_PB15_TIM1_CH3N		0x011f
#define GPIO_PIN_PE7_TIM1_ETR		0x0147
#define GPIO_PIN_PE8_TIM1_CH1N		0x0148
#define GPIO_PIN_PE9_TIM1_CH1		0x0149
#define GPIO_PIN_PE10_TIM1_CH2N		0x014a
#define GPIO_PIN_PE11_TIM1_CH2		0x014b
#define GPIO_PIN_PE12_TIM1_CH3N		0x014c
#define GPIO_PIN_PE13_TIM1_CH3		0x014d
#define GPIO_PIN_PE14_TIM1_CH4		0x014e
#define GPIO_PIN_PE14_TIM1_BKIN2	0x024e
#define GPIO_PIN_PE14_TIM1_BKIN2_COMP2	0x034e
#define GPIO_PIN_PE15_TIM1_BKIN		0x014f
#define GPIO_PIN_PE15_TIM1_BKIN_COMP1	0x034f

#define GPIO_PIN_PA0_TIM2_CH1		0x0100
#define GPIO_PIN_PA0_TIM2_ETR		0x0e00
#define GPIO_PIN_PA1_TIM2_CH2		0x0101
#define GPIO_PIN_PA2_TIM2_CH3		0x0102
#define GPIO_PIN_PA3_TIM2_CH4		0x0103
#define GPIO_PIN_PA5_TIM2_CH5		0x0105
#define GPIO_PIN_PA5_TIM2_ETR		0x0205
#define GPIO_PIN_PA15_TIM2_CH1		0x010f
#define GPIO_PIN_PA15_TIM2_ETR		0x020f
#define GPIO_PIN_PB3_TIM2_CH2		0x0113
#define GPIO_PIN_PB10_TIM2_CH3		0x011a
#define GPIO_PIN_PB11_TIM2_CH4		0x011b

#define GPIO_PIN_PA6_TIM3_CH1		0x0206
#define GPIO_PIN_PA7_TIM3_CH2		0x0207
#define GPIO_PIN_PB0_TIM3_CH3		0x0210
#define GPIO_PIN_PB1_TIM3_CH4		0x0211
#define GPIO_PIN_PB4_TIM3_CH1		0x0214
#define GPIO_PIN_PB5_TIM3_CH2		0x0215
#define GPIO_PIN_PC6_TIM3_CH1		0x0226
#define GPIO_PIN_PC7_TIM3_CH2		0x0227
#define GPIO_PIN_PC8_TIM3_CH3		0x0228
#define GPIO_PIN_PC9_TIM3_CH4		0x0229
#define GPIO_PIN_PD2_TIM3_ETR		0x0232
#define GPIO_PIN_PE2_TIM3_ETR		0x0242
#define GPIO_PIN_PE3_TIM3_CH1		0x0243
#define GPIO_PIN_PE4_TIM3_CH2		0x0244
#define GPIO_PIN_PE5_TIM3_CH3		0x0245
#define GPIO_PIN_PE6_TIM3_CH4		0x0246

#define GPIO_PIN_PB6_TIM4_CH1		0x0216
#define GPIO_PIN_PB7_TIM4_CH2		0x0217
#define GPIO_PIN_PB8_TIM4_CH3		0x0218
#define GPIO_PIN_PB9_TIM4_CH4		0x0219
#define GPIO_PIN_PD12_TIM4_CH1		0x023c
#define GPIO_PIN_PD13_TIM4_CH2		0x023d
#define GPIO_PIN_PD14_TIM4_CH3		0x023e
#define GPIO_PIN_PD15_TIM4_CH4		0x023f
#define GPIO_PIN_PE0_TIM4_ETR		0x0240

#define GPIO_PIN_PA0_TIM5_CH1		0x0200
#define GPIO_PIN_PA1_TIM5_CH2		0x0201
#define GPIO_PIN_PA2_TIM5_CH3		0x0202
#define GPIO_PIN_PA3_TIM5_CH4		0x0203
#define GPIO_PIN_PF6_TIM5_ETR		0x0156
#define GPIO_PIN_PF6_TIM5_CH1		0x0256
#define GPIO_PIN_PF7_TIM5_CH2		0x0257
#define GPIO_PIN_PF8_TIM5_CH3		0x0258
#define GPIO_PIN_PF9_TIM5_CH4		0x0259

#define GPIO_PIN_PA0_TIM8_ETR		0x0300
#define GPIO_PIN_PA5_TIM8_CH1N		0x0305
#define GPIO_PIN_PA6_TIM8_BKIN		0x0306
#define GPIO_PIN_PA6_TIM8_BKIN_COMP2	0x0d06
#define GPIO_PIN_PA7_TIM8_CH1N		0x0307
#define GPIO_PIN_PB0_TIM8_CH2N		0x0310
#define GPIO_PIN_PB1_TIM8_CH3N		0x0311
#define GPIO_PIN_PB6_TIM8_BKIN2		0x0316
#define GPIO_PIN_PB6_TIM8_BKIN2_COMP2	0x0c16
#define GPIO_PIN_PB7_TIM8_BKIN		0x0317
#define GPIO_PIN_PB7_TIM8_BKIN_COMP1	0x0d17
#define GPIO_PIN_PB14_TIM8_CH2N		0x031e
#define GPIO_PIN_PB15_TIM8_CH3N		0x031f
#define GPIO_PIN_PC6_TIM8_CH1		0x0326
#define GPIO_PIN_PC7_TIM8_CH2		0x0327
#define GPIO_PIN_PC8_TIM8_CH3		0x0328
#define GPIO_PIN_PC9_TIM8_BKIN2		0x0129
#define GPIO_PIN_PC9_TIM8_CH4		0x0329
#define GPIO_PIN_PC9_TIM8_BKIN2_COMP1	0x0e29

#define GPIO_PIN_PA1_TIM15_CH1N		0x0e01
#define GPIO_PIN_PA2_TIM15_CH1		0x0e02
#define GPIO_PIN_PA3_TIM15_CH2		0x0e03
#define GPIO_PIN_PA9_TIM15_BKIN		0x0e09
#define GPIO_PIN_PB12_TIM15_BKIN	0x0e1c
#define GPIO_PIN_PB13_TIM15_CH1N	0x0e1d
#define GPIO_PIN_PB14_TIM15_CH1		0x0e1e
#define GPIO_PIN_PB15_TIM15_CH2		0x0e1f
#define GPIO_PIN_PF9_TIM15_CH1		0x0e59
#define GPIO_PIN_PF10_TIM15_CH2		0x0e5a
#define GPIO_PIN_PG9_TIM15_CH1N		0x0e69
#define GPIO_PIN_PG10_TIM15_CH1		0x0e6a
#define GPIO_PIN_PG11_TIM15_CH2		0x0e6b

#define GPIO_PIN_PA6_TIM16_CH1		0x0e06
#define GPIO_PIN_PB5_TIM16_BKIN		0x0e15
#define GPIO_PIN_PB6_TIM16_CH1N		0x0e16
#define GPIO_PIN_PB8_TIM16_CH1		0x0e18
#define GPIO_PIN_PE0_TIM16_CH1		0x0e40

#define GPIO_PIN_PA7_TIM17_CH1		0x0e07
#define GPIO_PIN_PA10_TIM17_BKIN	0x0e0a
#define GPIO_PIN_PB4_TIM17_BKIN		0x0e14
#define GPIO_PIN_PB7_TIM17_CH1N		0x0e17
#define GPIO_PIN_PB9_TIM17_CH1		0x0e19
#define GPIO_PIN_PE1_TIM17_CH1		0x0e41

#define GPIO_PIN_PB2_LPTIM1_OUT		0x0112
#define GPIO_PIN_PB5_LPTIM1_IN1		0x0115
#define GPIO_PIN_PB6_LPTIM1_ETR		0x0116
#define GPIO_PIN_PB7_LPTIM1_IN2		0x0117
#define GPIO_PIN_PC0_LPTIM1_IN1		0x0120
#define GPIO_PIN_PC1_LPTIM1_OUT		0x0121
#define GPIO_PIN_PC2_LPTIM1_IN2		0x0122
#define GPIO_PIN_PC3_LPTIM1_ETR		0x0123
#define GPIO_PIN_PG10_LPTIM1_IN1	0x016a
#define GPIO_PIN_PG11_LPTIM1_IN2	0x016b
#define GPIO_PIN_PG12_LPTIM1_ETR	0x016c
#define GPIO_PIN_PG15_LPTIM1_OUT	0x016f

#define GPIO_PIN_PA4_LPTIM2_OUT		0x0e04
#define GPIO_PIN_PA5_LPTIM2_ETR		0x0e05
#define GPIO_PIN_PA8_LPTIM2_OUT		0x0e08
#define GPIO_PIN_PB1_LPTIM2_IN1		0x0e11
#define GPIO_PIN_PC0_LPTIM2_IN1		0x0e20
#define GPIO_PIN_PC3_LPTIM2_ETR		0x0e23
#define GPIO_PIN_PD11_LPTIM2_ETR	0x0e3b
#define GPIO_PIN_PD12_LPTIM2_IN1	0x0e3c
#define GPIO_PIN_PD13_LPTIM2_OUT	0x0e3d

#define GPIO_PIN_PB0_COMP1_OUT		0x0c10
#define GPIO_PIN_PB10_COMP1_OUT		0x0c1a

#define GPIO_PIN_PB5_COMP2_OUT		0x0c15
#define GPIO_PIN_PB11_COMP2_OUT		0x0c1b

#define GPIO_PIN_PA15_TSC_G3_IO1	0x090f
#define GPIO_PIN_PB4_TSC_G2_IO1		0x0914
#define GPIO_PIN_PB5_TSC_G2_IO2		0x0915
#define GPIO_PIN_PB6_TSC_G2_IO3		0x0916
#define GPIO_PIN_PB7_TSC_G2_IO4		0x0917
#define GPIO_PIN_PB12_TSC_G1_IO1	0x091c
#define GPIO_PIN_PB13_TSC_G1_IO2	0x091d
#define GPIO_PIN_PB14_TSC_G1_IO3	0x091e
#define GPIO_PIN_PB15_TSC_G1_IO4	0x091f
#define GPIO_PIN_PC6_TSC_G4_IO1		0x0926
#define GPIO_PIN_PC7_TSC_G4_IO2		0x0927
#define GPIO_PIN_PC8_TSC_G4_IO3		0x0928
#define GPIO_PIN_PC9_TSC_G4_IO4		0x0929
#define GPIO_PIN_PC10_TSC_G3_IO2	0x092a
#define GPIO_PIN_PC11_TSC_G3_IO3	0x092b
#define GPIO_PIN_PC12_TSC_G3_IO4	0x092c
#define GPIO_PIN_PD2_TSC_SYNC		0x0932
#define GPIO_PIN_PD10_TSC_G6_IO1	0x093a
#define GPIO_PIN_PD11_TSC_G6_IO2	0x093b
#define GPIO_PIN_PD12_TSC_G6_IO3	0x093c
#define GPIO_PIN_PD13_TSC_G6_IO3	0x093d
#define GPIO_PIN_PE2_TSC_G7_IO1		0x0942
#define GPIO_PIN_PE3_TSC_G7_IO2		0x0943
#define GPIO_PIN_PE4_TSC_G7_IO3		0x0944
#define GPIO_PIN_PE5_TSC_G7_IO4		0x0945
#define GPIO_PIN_PE10_TSC_G5_IO1	0x094a
#define GPIO_PIN_PE11_TSC_G5_IO2	0x094b
#define GPIO_PIN_PE12_TSC_G5_IO3	0x094c
#define GPIO_PIN_PE13_TSC_G5_IO4	0x094d
#define GPIO_PIN_PF14_TSC_G8_IO1	0x095e
#define GPIO_PIN_PF15_TSC_G8_IO2	0x095f
#define GPIO_PIN_PG0_TSC_G8_IO3		0x0960
#define GPIO_PIN_PG1_TSC_G8_IO4		0x0961

#define GPIO_PIN_PA1_LCD_SEG0		0x0b01
#define GPIO_PIN_PA2_LCD_SEG1		0x0b02
#define GPIO_PIN_PA3_LCD_SEG2		0x0b03
#define GPIO_PIN_PA6_LCD_SEG3		0x0b06
#define GPIO_PIN_PA7_LCD_SEG4		0x0b07
#define GPIO_PIN_PA8_LCD_COM0		0x0b08
#define GPIO_PIN_PA9_LCD_COM1		0x0b09
#define GPIO_PIN_PA10_LCD_COM2		0x0b0a
#define GPIO_PIN_PA15_LCD_SEG17		0x0b0f
#define GPIO_PIN_PB0_LCD_SEG5		0x0b10
#define GPIO_PIN_PB1_LCD_SEG6		0x0b11
#define GPIO_PIN_PB3_LCD_SEG7		0x0b13
#define GPIO_PIN_PB4_LCD_SEG8		0x0b14
#define GPIO_PIN_PB5_LCD_SEG0		0x0b15
#define GPIO_PIN_PB7_LCD_SEG21		0x0b17
#define GPIO_PIN_PB8_LCD_SEG16		0x0b18
#define GPIO_PIN_PB9_LCD_COM3		0x0b19
#define GPIO_PIN_PB10_LCD_SEG10		0x0b1a
#define GPIO_PIN_PB11_LCD_SEG11		0x0b1b
#define GPIO_PIN_PB12_LCD_SEG12		0x0b1c
#define GPIO_PIN_PB13_LCD_SEG13		0x0b1d
#define GPIO_PIN_PB14_LCD_SEG14		0x0b1e
#define GPIO_PIN_PB15_LCD_SEG15		0x0b1f
#define GPIO_PIN_PC0_LCD_SEG18		0x0b20
#define GPIO_PIN_PC1_LCD_SEG19		0x0b21
#define GPIO_PIN_PC2_LCD_SEG20		0x0b22
#define GPIO_PIN_PC3_LCD_VLCD		0x0b23
#define GPIO_PIN_PC4_LCD_SEG22		0x0b24
#define GPIO_PIN_PC5_LCD_SEG23		0x0b25
#define GPIO_PIN_PC6_LCD_SEG24		0x0b26
#define GPIO_PIN_PC7_LCD_SEG25		0x0b27
#define GPIO_PIN_PC8_LCD_SEG26		0x0b28
#define GPIO_PIN_PC9_LCD_SEG27		0x0b29
#define GPIO_PIN_PC10_LCD_COM4		0x0b2a
#define GPIO_PIN_PC10_LCD_SEG28		0x0b2a
#define GPIO_PIN_PC10_LCD_SEG40		0x0b2a
#define GPIO_PIN_PC11_LCD_COM5		0x0b2b
#define GPIO_PIN_PC11_LCD_SEG29		0x0b2b
#define GPIO_PIN_PC11_LCD_SEG41		0x0b2b
#define GPIO_PIN_PC12_LCD_COM6		0x0b2c
#define GPIO_PIN_PC12_LCD_SEG30		0x0b2c
#define GPIO_PIN_PC12_LCD_SEG42		0x0b2c
#define GPIO_PIN_PD2_LCD_COM7		0x0b32
#define GPIO_PIN_PD2_LCD_SEG31		0x0b32
#define GPIO_PIN_PD2_LCD_SEG43		0x0b32
#define GPIO_PIN_PD8_LCD_SEG28		0x0b38
#define GPIO_PIN_PD9_LCD_SEG29		0x0b39
#define GPIO_PIN_PD10_LCD_SEG30		0x0b3a
#define GPIO_PIN_PD11_LCD_SEG31		0x0b3b
#define GPIO_PIN_PD12_LCD_SEG32		0x0b3c
#define GPIO_PIN_PD13_LCD_SEG33		0x0b3d
#define GPIO_PIN_PD14_LCD_SEG34		0x0b3e
#define GPIO_PIN_PD15_LCD_SEG35		0x0b3f
#define GPIO_PIN_PE0_LCD_SEG36		0x0b40
#define GPIO_PIN_PE1_LCD_SEG37		0x0b41
#define GPIO_PIN_PE2_LCD_SEG38		0x0b42
#define GPIO_PIN_PE3_LCD_SEG39		0x0b43

#define GPIO_PIN_PB7_FMC_NL		0x0c17
#define GPIO_PIN_PD0_FMC_D2		0x0c30
#define GPIO_PIN_PD1_FMC_D3		0x0c31
#define GPIO_PIN_PD3_FMC_CLK		0x0c33
#define GPIO_PIN_PD4_FMC_NOE		0x0c34
#define GPIO_PIN_PD5_FMC_NWE		0x0c35
#define GPIO_PIN_PD6_FMC_NWAIT		0x0c36
#define GPIO_PIN_PD7_FMC_NE1		0x0c37
#define GPIO_PIN_PD8_FMC_D13		0x0c38
#define GPIO_PIN_PD9_FMC_D14		0x0c39
#define GPIO_PIN_PD10_FMC_D15		0x0c3a
#define GPIO_PIN_PD11_FMC_A16		0x0c3b
#define GPIO_PIN_PD12_FMC_A17		0x0c3c
#define GPIO_PIN_PD13_FMC_A18		0x0c3d
#define GPIO_PIN_PD14_FMC_D0		0x0c3e
#define GPIO_PIN_PD15_FMC_D1		0x0c3f
#define GPIO_PIN_PE0_FMC_NBL0		0x0c40
#define GPIO_PIN_PE1_FMC_NBL1		0x0c41
#define GPIO_PIN_PE2_FMC_A23		0x0c42
#define GPIO_PIN_PE3_FMC_A19		0x0c43
#define GPIO_PIN_PE4_FMC_A20		0x0c44
#define GPIO_PIN_PE5_FMC_A21		0x0c45
#define GPIO_PIN_PE6_FMC_A22		0x0c46
#define GPIO_PIN_PE7_FMC_D4		0x0c47
#define GPIO_PIN_PE8_FMC_D5		0x0c48
#define GPIO_PIN_PE9_FMC_D6		0x0c49
#define GPIO_PIN_PE10_FMC_D7		0x0c4a
#define GPIO_PIN_PE11_FMC_D8		0x0c4b
#define GPIO_PIN_PE12_FMC_D9		0x0c4c
#define GPIO_PIN_PE13_FMC_D10		0x0c4d
#define GPIO_PIN_PE14_FMC_D11		0x0c4e
#define GPIO_PIN_PE15_FMC_D12		0x0c4f
#define GPIO_PIN_PF0_FMC_A0		0x0c50
#define GPIO_PIN_PF1_FMC_A1		0x0c51
#define GPIO_PIN_PF2_FMC_A2		0x0c52
#define GPIO_PIN_PF3_FMC_A3		0x0c53
#define GPIO_PIN_PF4_FMC_A4		0x0c54
#define GPIO_PIN_PF5_FMC_A5		0x0c55
#define GPIO_PIN_PF12_FMC_A6		0x0c5c
#define GPIO_PIN_PF13_FMC_A7		0x0c5d
#define GPIO_PIN_PF14_FMC_A8		0x0c5e
#define GPIO_PIN_PF15_FMC_A9		0x0c5f
#define GPIO_PIN_PG0_FMC_A10		0x0c60
#define GPIO_PIN_PG1_FMC_A11		0x0c61
#define GPIO_PIN_PG2_FMC_A12		0x0c62
#define GPIO_PIN_PG3_FMC_A13		0x0c63
#define GPIO_PIN_PG4_FMC_A14		0x0c64
#define GPIO_PIN_PG5_FMC_A15		0x0c65
#define GPIO_PIN_PG7_FMC_INT3		0x0c67
#define GPIO_PIN_PG9_FMC_NCE3		0x0c69
#define GPIO_PIN_PG9_FMC_NE2		0x0c69
#define GPIO_PIN_PG10_FMC_NE3		0x0c6a
#define GPIO_PIN_PG12_FMC_NE4		0x0c6c
#define GPIO_PIN_PG13_FMC_A24		0x0c6d
#define GPIO_PIN_PG14_FMC_A25		0x0c6e

#define GPIO_PIN_MASK(_pin)             (1ul << ((_pin) & 15))

static inline void stm32l4_gpio_pin_write(unsigned int pin, unsigned int data)
{
    GPIO_TypeDef *GPIO;
    uint32_t group, index;

    group = (pin & GPIO_PIN_GROUP_MASK) >> GPIO_PIN_GROUP_SHIFT;
    index = (pin & GPIO_PIN_INDEX_MASK) >> GPIO_PIN_INDEX_SHIFT;

    GPIO = (GPIO_TypeDef *)(GPIOA_BASE + (GPIOB_BASE - GPIOA_BASE) * group);

    if (data) {
	GPIO->BSRR = (1ul << index);
    } else {
	GPIO->BRR = (1ul << index);
    }
}

static inline unsigned int stm32l4_gpio_pin_read(unsigned int pin)
{
    GPIO_TypeDef *GPIO;
    uint32_t group, index;

    group = (pin & GPIO_PIN_GROUP_MASK) >> GPIO_PIN_GROUP_SHIFT;
    index = (pin & GPIO_PIN_INDEX_MASK) >> GPIO_PIN_INDEX_SHIFT;

    GPIO = (GPIO_TypeDef *)(GPIOA_BASE + (GPIOB_BASE - GPIOA_BASE) * group);

    return ((GPIO->IDR >> index) & 1);
}

extern void stm32l4_gpio_pin_configure(unsigned int pin, unsigned int mode);

extern void stm32l4_gpio_pin_input(unsigned int pin);
extern void stm32l4_gpio_pin_output(unsigned int pin);
extern void stm32l4_gpio_pin_alternate(unsigned int pin);

#ifdef __cplusplus
}
#endif

#endif /* _STM32L4_GPIO_H */
