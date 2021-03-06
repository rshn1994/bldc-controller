/*
    ChibiOS - Copyright (C) 2006..2019 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*
 * Setup for BLDC Servo Controller board.
 */

/*
 * Board identifier.
 */
#define BOARD_BLDC_SERVO_CONTROLLER
#define BOARD_NAME                  "BLDC Servo Controller"

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0U
#endif

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000U
#endif

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   330U

/*
 * MCU type as defined in the ST header.
 */
#define STM32F40_41xxx

/*
 * IO pins assignments.
 */
#define GPIOA_LED_G                 0U
#define GPIOA_LED_B                 1U
#define GPIOA_LED_R                 2U
#define GPIOA_BONUS_0               3U
#define GPIOA_BONUS_1               4U
#define GPIOA_BONUS_2               5U
#define GPIOA_BONUS_3               6U
#define GPIOA_BONUS_4               7U
#define GPIOA_MDRV_PWM_C            8U
#define GPIOA_MDRV_PWM_B            9U
#define GPIOA_MDRV_PWM_A            10U
#define GPIOA_PIN11                 11U
#define GPIOA_RS485_SHUNT_EN        12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_DISCO_BUS_OUT         15U

#define GPIOB_BONUS_7               0U
#define GPIOB_BONUS_8               1U
#define GPIOB_PIN2                  2U
#define GPIOB_PIN3                  3U
#define GPIOB_DISCO_BUS_IN          4U
#define GPIOB_PIN5                  5U
#define GPIOB_RS485_TX              6U
#define GPIOB_RS485_RX              7U
#define GPIOB_LED_Y                 8U
#define GPIOB_ENC_CSN               9U
#define GPIOB_I2C_SCL               10U
#define GPIOB_I2C_SDA               11U
#define GPIOB_PIN12                 12U
#define GPIOB_TEMP_INT              13U
#define GPIOB_IMU_INT1              14U
#define GPIOB_MDRV_NOCTW            15U

#define GPIOC_ISENSE_C              0U
#define GPIOC_ISENSE_B              1U
#define GPIOC_ISENSE_A              2U
#define GPIOC_VSENSE_VIN            3U
#define GPIOC_BONUS_5               4U
#define GPIOC_BONUS_6               5U
#define GPIOC_MDRV_NFAULT           6U
#define GPIOC_MDRV_RST_A            7U
#define GPIOC_MDRV_RST_B            8U
#define GPIOC_MDRV_RST_C            9U
#define GPIOC_SPI_CLK               10U
#define GPIOC_SPI_MISO              11U
#define GPIOC_SPI_MOSI              12U
#define GPIOC_PIN13                 13U
#define GPIOC_PIN14                 14U
#define GPIOC_PIN15                 15U

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_RS485_DIR             2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U

#define GPIOE_PIN0                  0U
#define GPIOE_PIN1                  1U
#define GPIOE_PIN2                  2U
#define GPIOE_PIN3                  3U
#define GPIOE_PIN4                  4U
#define GPIOE_PIN5                  5U
#define GPIOE_PIN6                  6U
#define GPIOE_PIN7                  7U
#define GPIOE_PIN8                  8U
#define GPIOE_PIN9                  9U
#define GPIOE_PIN10                 10U
#define GPIOE_PIN11                 11U
#define GPIOE_PIN12                 12U
#define GPIOE_PIN13                 13U
#define GPIOE_PIN14                 14U
#define GPIOE_PIN15                 15U

#define GPIOF_PIN0                  0U
#define GPIOF_PIN1                  1U
#define GPIOF_PIN2                  2U
#define GPIOF_PIN3                  3U
#define GPIOF_PIN4                  4U
#define GPIOF_PIN5                  5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7                  7U
#define GPIOF_PIN8                  8U
#define GPIOF_PIN9                  9U
#define GPIOF_PIN10                 10U
#define GPIOF_PIN11                 11U
#define GPIOF_PIN12                 12U
#define GPIOF_PIN13                 13U
#define GPIOF_PIN14                 14U
#define GPIOF_PIN15                 15U

#define GPIOG_PIN0                  0U
#define GPIOG_PIN1                  1U
#define GPIOG_PIN2                  2U
#define GPIOG_PIN3                  3U
#define GPIOG_PIN4                  4U
#define GPIOG_PIN5                  5U
#define GPIOG_PIN6                  6U
#define GPIOG_PIN7                  7U
#define GPIOG_PIN8                  8U
#define GPIOG_PIN9                  9U
#define GPIOG_PIN10                 10U
#define GPIOG_PIN11                 11U
#define GPIOG_PIN12                 12U
#define GPIOG_PIN13                 13U
#define GPIOG_PIN14                 14U
#define GPIOG_PIN15                 15U

#define GPIOH_PIN0                  0U
#define GPIOH_PIN1                  1U
#define GPIOH_PIN2                  2U
#define GPIOH_PIN3                  3U
#define GPIOH_PIN4                  4U
#define GPIOH_PIN5                  5U
#define GPIOH_PIN6                  6U
#define GPIOH_PIN7                  7U
#define GPIOH_PIN8                  8U
#define GPIOH_PIN9                  9U
#define GPIOH_PIN10                 10U
#define GPIOH_PIN11                 11U
#define GPIOH_PIN12                 12U
#define GPIOH_PIN13                 13U
#define GPIOH_PIN14                 14U
#define GPIOH_PIN15                 15U

#define GPIOI_PIN0                  0U
#define GPIOI_PIN1                  1U
#define GPIOI_PIN2                  2U
#define GPIOI_PIN3                  3U
#define GPIOI_PIN4                  4U
#define GPIOI_PIN5                  5U
#define GPIOI_PIN6                  6U
#define GPIOI_PIN7                  7U
#define GPIOI_PIN8                  8U
#define GPIOI_PIN9                  9U
#define GPIOI_PIN10                 10U
#define GPIOI_PIN11                 11U
#define GPIOI_PIN12                 12U
#define GPIOI_PIN13                 13U
#define GPIOI_PIN14                 14U
#define GPIOI_PIN15                 15U

/*
 * IO lines assignments.
 */
#define LINE_LED_G                  PAL_LINE(GPIOA, 0U)
#define LINE_LED_B                  PAL_LINE(GPIOA, 1U)
#define LINE_LED_R                  PAL_LINE(GPIOA, 2U)
#define LINE_BONUS_0                PAL_LINE(GPIOA, 3U)
#define LINE_BONUS_1                PAL_LINE(GPIOA, 4U)
#define LINE_BONUS_2                PAL_LINE(GPIOA, 5U)
#define LINE_BONUS_3                PAL_LINE(GPIOA, 6U)
#define LINE_BONUS_4                PAL_LINE(GPIOA, 7U)
#define LINE_MDRV_PWM_C             PAL_LINE(GPIOA, 8U)
#define LINE_MDRV_PWM_B             PAL_LINE(GPIOA, 9U)
#define LINE_MDRV_PWM_A             PAL_LINE(GPIOA, 10U)
#define LINE_RS485_SHUNT_EN         PAL_LINE(GPIOA, 12U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_DISCO_BUS_OUT          PAL_LINE(GPIOA, 15U)
#define LINE_BONUS_7                PAL_LINE(GPIOB, 0U)
#define LINE_BONUS_8                PAL_LINE(GPIOB, 1U)
#define LINE_DISCO_BUS_IN           PAL_LINE(GPIOB, 4U)
#define LINE_RS485_TX               PAL_LINE(GPIOB, 6U)
#define LINE_RS485_RX               PAL_LINE(GPIOB, 7U)
#define LINE_LED_Y                  PAL_LINE(GPIOB, 8U)
#define LINE_ENC_CSN                PAL_LINE(GPIOB, 9U)
#define LINE_I2C_SCL                PAL_LINE(GPIOB, 10U)
#define LINE_I2C_SDA                PAL_LINE(GPIOB, 11U)
#define LINE_TEMP_INT               PAL_LINE(GPIOB, 13U)
#define LINE_IMU_INT1               PAL_LINE(GPIOB, 14U)
#define LINE_MDRV_NOCTW             PAL_LINE(GPIOB, 15U)
#define LINE_ISENSE_C               PAL_LINE(GPIOC, 0U)
#define LINE_ISENSE_B               PAL_LINE(GPIOC, 1U)
#define LINE_ISENSE_A               PAL_LINE(GPIOC, 2U)
#define LINE_VSENSE_VIN             PAL_LINE(GPIOC, 3U)
#define LINE_BONUS_5                PAL_LINE(GPIOC, 4U)
#define LINE_BONUS_6                PAL_LINE(GPIOC, 5U)
#define LINE_MDRV_NFAULT            PAL_LINE(GPIOC, 6U)
#define LINE_MDRV_RST_A             PAL_LINE(GPIOC, 7U)
#define LINE_MDRV_RST_B             PAL_LINE(GPIOC, 8U)
#define LINE_MDRV_RST_C             PAL_LINE(GPIOC, 9U)
#define LINE_SPI_CLK                PAL_LINE(GPIOC, 10U)
#define LINE_SPI_MISO               PAL_LINE(GPIOC, 11U)
#define LINE_SPI_MOSI               PAL_LINE(GPIOC, 12U)
#define LINE_RS485_DIR              PAL_LINE(GPIOD, 2U)

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
 * PA0  - LED_G                     (alternate 2).
 * PA1  - LED_B                     (alternate 2).
 * PA2  - LED_R                     (alternate 2).
 * PA3  - BONUS_0                   (input floating).
 * PA4  - BONUS_1                   (input floating).
 * PA5  - BONUS_2                   (input floating).
 * PA6  - BONUS_3                   (input floating).
 * PA7  - BONUS_4                   (input floating).
 * PA8  - MDRV_PWM_C                (alternate 1).
 * PA9  - MDRV_PWM_B                (alternate 1).
 * PA10 - MDRV_PWM_A                (alternate 1).
 * PA11 - PIN11                     (output pushpull maximum).
 * PA12 - RS485_SHUNT_EN            (output pushpull maximum).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - DISCO_BUS_OUT             (output pushpull maximum).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_ALTERNATE(GPIOA_LED_G) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_LED_B) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_LED_R) |      \
                                     PIN_MODE_INPUT(GPIOA_BONUS_0) |        \
                                     PIN_MODE_INPUT(GPIOA_BONUS_1) |        \
                                     PIN_MODE_INPUT(GPIOA_BONUS_2) |        \
                                     PIN_MODE_INPUT(GPIOA_BONUS_3) |        \
                                     PIN_MODE_INPUT(GPIOA_BONUS_4) |        \
                                     PIN_MODE_ALTERNATE(GPIOA_MDRV_PWM_C) | \
                                     PIN_MODE_ALTERNATE(GPIOA_MDRV_PWM_B) | \
                                     PIN_MODE_ALTERNATE(GPIOA_MDRV_PWM_A) | \
                                     PIN_MODE_OUTPUT(GPIOA_PIN11) |         \
                                     PIN_MODE_OUTPUT(GPIOA_RS485_SHUNT_EN) |\
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_OUTPUT(GPIOA_DISCO_BUS_OUT))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_LED_G) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED_B) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_LED_R) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_BONUS_0) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_BONUS_1) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_BONUS_2) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_BONUS_3) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_BONUS_4) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_MDRV_PWM_C) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_MDRV_PWM_B) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_MDRV_PWM_A) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_RS485_SHUNT_EN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_DISCO_BUS_OUT))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_HIGH(GPIOA_LED_G) |         \
                                     PIN_OSPEED_HIGH(GPIOA_LED_B) |         \
                                     PIN_OSPEED_HIGH(GPIOA_LED_R) |         \
                                     PIN_OSPEED_HIGH(GPIOA_BONUS_0) |       \
                                     PIN_OSPEED_HIGH(GPIOA_BONUS_1) |       \
                                     PIN_OSPEED_HIGH(GPIOA_BONUS_2) |       \
                                     PIN_OSPEED_HIGH(GPIOA_BONUS_3) |       \
                                     PIN_OSPEED_HIGH(GPIOA_BONUS_4) |       \
                                     PIN_OSPEED_HIGH(GPIOA_MDRV_PWM_C) |    \
                                     PIN_OSPEED_HIGH(GPIOA_MDRV_PWM_B) |    \
                                     PIN_OSPEED_HIGH(GPIOA_MDRV_PWM_A) |    \
                                     PIN_OSPEED_HIGH(GPIOA_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOA_RS485_SHUNT_EN) |\
                                     PIN_OSPEED_HIGH(GPIOA_SWDIO) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWCLK) |         \
                                     PIN_OSPEED_HIGH(GPIOA_DISCO_BUS_OUT))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_LED_G) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_LED_B) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_LED_R) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_BONUS_0) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_BONUS_1) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_BONUS_2) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_BONUS_3) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_BONUS_4) |    \
                                     PIN_PUPDR_FLOATING(GPIOA_MDRV_PWM_C) | \
                                     PIN_PUPDR_FLOATING(GPIOA_MDRV_PWM_B) | \
                                     PIN_PUPDR_FLOATING(GPIOA_MDRV_PWM_A) | \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN11) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_RS485_SHUNT_EN) |\
                                     PIN_PUPDR_FLOATING(GPIOA_SWDIO) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_DISCO_BUS_OUT))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_LED_G) |            \
                                     PIN_ODR_HIGH(GPIOA_LED_B) |            \
                                     PIN_ODR_HIGH(GPIOA_LED_R) |            \
                                     PIN_ODR_HIGH(GPIOA_BONUS_0) |          \
                                     PIN_ODR_HIGH(GPIOA_BONUS_1) |          \
                                     PIN_ODR_HIGH(GPIOA_BONUS_2) |          \
                                     PIN_ODR_HIGH(GPIOA_BONUS_3) |          \
                                     PIN_ODR_HIGH(GPIOA_BONUS_4) |          \
                                     PIN_ODR_LOW(GPIOA_MDRV_PWM_C) |        \
                                     PIN_ODR_LOW(GPIOA_MDRV_PWM_B) |        \
                                     PIN_ODR_LOW(GPIOA_MDRV_PWM_A) |        \
                                     PIN_ODR_HIGH(GPIOA_PIN11) |            \
                                     PIN_ODR_LOW(GPIOA_RS485_SHUNT_EN) |    \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_LOW(GPIOA_DISCO_BUS_OUT))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_LED_G, 2U) |         \
                                     PIN_AFIO_AF(GPIOA_LED_B, 2U) |         \
                                     PIN_AFIO_AF(GPIOA_LED_R, 2U) |         \
                                     PIN_AFIO_AF(GPIOA_BONUS_0, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_BONUS_1, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_BONUS_2, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_BONUS_3, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_BONUS_4, 0U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_MDRV_PWM_C, 1U) |    \
                                     PIN_AFIO_AF(GPIOA_MDRV_PWM_B, 1U) |    \
                                     PIN_AFIO_AF(GPIOA_MDRV_PWM_A, 1U) |    \
                                     PIN_AFIO_AF(GPIOA_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_RS485_SHUNT_EN, 0U) |\
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_DISCO_BUS_OUT, 0U))

/*
 * GPIOB setup:
 *
 * PB0  - BONUS_7                   (input floating).
 * PB1  - BONUS_8                   (input floating).
 * PB2  - PIN2                      (input pulldown).
 * PB3  - PIN3                      (input floating).
 * PB4  - DISCO_BUS_IN              (input floating).
 * PB5  - PIN5                      (input floating).
 * PB6  - RS485_TX                  (alternate 7).
 * PB7  - RS485_RX                  (alternate 7).
 * PB8  - LED_Y                     (output pushpull maximum).
 * PB9  - ENC_CSN                   (output pushpull maximum).
 * PB10 - I2C_SCL                   (alternate 4).
 * PB11 - I2C_SDA                   (alternate 4).
 * PB12 - PIN12                     (input pullup).
 * PB13 - TEMP_INT                  (input floating).
 * PB14 - IMU_INT1                  (input floating).
 * PB15 - MDRV_NOCTW                (input pullup).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_BONUS_7) |        \
                                     PIN_MODE_INPUT(GPIOB_BONUS_8) |        \
                                     PIN_MODE_INPUT(GPIOB_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOB_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOB_DISCO_BUS_IN) |   \
                                     PIN_MODE_INPUT(GPIOB_PIN5) |           \
                                     PIN_MODE_ALTERNATE(GPIOB_RS485_TX) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_RS485_RX) |   \
                                     PIN_MODE_OUTPUT(GPIOB_LED_Y) |         \
                                     PIN_MODE_OUTPUT(GPIOB_ENC_CSN) |       \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C_SCL) |    \
                                     PIN_MODE_ALTERNATE(GPIOB_I2C_SDA) |    \
                                     PIN_MODE_INPUT(GPIOB_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOB_TEMP_INT) |       \
                                     PIN_MODE_INPUT(GPIOB_IMU_INT1) |       \
                                     PIN_MODE_INPUT(GPIOB_MDRV_NOCTW))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_BONUS_7) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_BONUS_8) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_DISCO_BUS_IN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_RS485_TX) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_RS485_RX) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_LED_Y) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ENC_CSN) |    \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C_SCL) |   \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_I2C_SDA) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_TEMP_INT) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_IMU_INT1) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_MDRV_NOCTW))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_HIGH(GPIOB_BONUS_7) |       \
                                     PIN_OSPEED_HIGH(GPIOB_BONUS_8) |       \
                                     PIN_OSPEED_HIGH(GPIOB_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOB_DISCO_BUS_IN) |  \
                                     PIN_OSPEED_HIGH(GPIOB_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOB_RS485_TX) |      \
                                     PIN_OSPEED_HIGH(GPIOB_RS485_RX) |      \
                                     PIN_OSPEED_HIGH(GPIOB_LED_Y) |         \
                                     PIN_OSPEED_HIGH(GPIOB_ENC_CSN) |       \
                                     PIN_OSPEED_HIGH(GPIOB_I2C_SCL) |       \
                                     PIN_OSPEED_HIGH(GPIOB_I2C_SDA) |       \
                                     PIN_OSPEED_HIGH(GPIOB_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOB_TEMP_INT) |      \
                                     PIN_OSPEED_HIGH(GPIOB_IMU_INT1) |      \
                                     PIN_OSPEED_HIGH(GPIOB_MDRV_NOCTW))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_BONUS_7) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_BONUS_8) |    \
                                     PIN_PUPDR_PULLDOWN(GPIOB_PIN2) |       \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN3) |       \
                                     PIN_PUPDR_FLOATING(GPIOB_DISCO_BUS_IN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_PIN5) |       \
                                     PIN_PUPDR_PULLUP(GPIOB_RS485_TX) |     \
                                     PIN_PUPDR_PULLUP(GPIOB_RS485_RX) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_LED_Y) |      \
                                     PIN_PUPDR_FLOATING(GPIOB_ENC_CSN) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C_SCL) |    \
                                     PIN_PUPDR_FLOATING(GPIOB_I2C_SDA) |    \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_TEMP_INT) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_IMU_INT1) |   \
                                     PIN_PUPDR_PULLUP(GPIOB_MDRV_NOCTW))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_BONUS_7) |          \
                                     PIN_ODR_HIGH(GPIOB_BONUS_8) |          \
                                     PIN_ODR_HIGH(GPIOB_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOB_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOB_DISCO_BUS_IN) |     \
                                     PIN_ODR_HIGH(GPIOB_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOB_RS485_TX) |         \
                                     PIN_ODR_HIGH(GPIOB_RS485_RX) |         \
                                     PIN_ODR_HIGH(GPIOB_LED_Y) |            \
                                     PIN_ODR_HIGH(GPIOB_ENC_CSN) |          \
                                     PIN_ODR_HIGH(GPIOB_I2C_SCL) |          \
                                     PIN_ODR_HIGH(GPIOB_I2C_SDA) |          \
                                     PIN_ODR_HIGH(GPIOB_PIN12) |            \
                                     PIN_ODR_LOW(GPIOB_TEMP_INT) |          \
                                     PIN_ODR_LOW(GPIOB_IMU_INT1) |          \
                                     PIN_ODR_LOW(GPIOB_MDRV_NOCTW))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_BONUS_7, 0U) |       \
                                     PIN_AFIO_AF(GPIOB_BONUS_8, 0U) |       \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_DISCO_BUS_IN, 0U) |  \
                                     PIN_AFIO_AF(GPIOB_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_RS485_TX, 7U) |      \
                                     PIN_AFIO_AF(GPIOB_RS485_RX, 7U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_LED_Y, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_ENC_CSN, 0U) |       \
                                     PIN_AFIO_AF(GPIOB_I2C_SCL, 4U) |       \
                                     PIN_AFIO_AF(GPIOB_I2C_SDA, 4U) |       \
                                     PIN_AFIO_AF(GPIOB_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_TEMP_INT, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_IMU_INT1, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_MDRV_NOCTW, 0U))

/*
 * GPIOC setup:
 *
 * PC0  - ISENSE_C                  (analog).
 * PC1  - ISENSE_B                  (analog).
 * PC2  - ISENSE_A                  (analog).
 * PC3  - VSENSE_VIN                (analog).
 * PC4  - BONUS_5                   (input floating).
 * PC5  - BONUS_6                   (input floating).
 * PC6  - MDRV_NFAULT               (input pullup).
 * PC7  - MDRV_RST_A                (output pushpull maximum).
 * PC8  - MDRV_RST_B                (output pushpull maximum).
 * PC9  - MDRV_RST_C                (output pushpull maximum).
 * PC10 - SPI_CLK                   (alternate 6).
 * PC11 - SPI_MISO                  (alternate 6).
 * PC12 - SPI_MOSI                  (alternate 6).
 * PC13 - PIN13                     (input pullup).
 * PC14 - PIN14                     (input pullup).
 * PC15 - PIN15                     (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_ANALOG(GPIOC_ISENSE_C) |      \
                                     PIN_MODE_ANALOG(GPIOC_ISENSE_B) |      \
                                     PIN_MODE_ANALOG(GPIOC_ISENSE_A) |      \
                                     PIN_MODE_ANALOG(GPIOC_VSENSE_VIN) |    \
                                     PIN_MODE_INPUT(GPIOC_BONUS_5) |        \
                                     PIN_MODE_INPUT(GPIOC_BONUS_6) |        \
                                     PIN_MODE_INPUT(GPIOC_MDRV_NFAULT) |    \
                                     PIN_MODE_OUTPUT(GPIOC_MDRV_RST_A) |    \
                                     PIN_MODE_OUTPUT(GPIOC_MDRV_RST_B) |    \
                                     PIN_MODE_OUTPUT(GPIOC_MDRV_RST_C) |    \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI_CLK) |    \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI_MISO) |   \
                                     PIN_MODE_ALTERNATE(GPIOC_SPI_MOSI) |   \
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_ISENSE_C) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ISENSE_B) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ISENSE_A) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_VSENSE_VIN) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_BONUS_5) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_BONUS_6) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_MDRV_NFAULT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_MDRV_RST_A) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_MDRV_RST_B) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_MDRV_RST_C) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI_CLK) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI_MISO) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_SPI_MOSI) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_HIGH(GPIOC_ISENSE_C) |      \
                                     PIN_OSPEED_HIGH(GPIOC_ISENSE_B) |      \
                                     PIN_OSPEED_HIGH(GPIOC_ISENSE_A) |      \
                                     PIN_OSPEED_HIGH(GPIOC_VSENSE_VIN) |    \
                                     PIN_OSPEED_HIGH(GPIOC_BONUS_5) |       \
                                     PIN_OSPEED_HIGH(GPIOC_BONUS_6) |       \
                                     PIN_OSPEED_HIGH(GPIOC_MDRV_NFAULT) |   \
                                     PIN_OSPEED_HIGH(GPIOC_MDRV_RST_A) |    \
                                     PIN_OSPEED_HIGH(GPIOC_MDRV_RST_B) |    \
                                     PIN_OSPEED_HIGH(GPIOC_MDRV_RST_C) |    \
                                     PIN_OSPEED_HIGH(GPIOC_SPI_CLK) |       \
                                     PIN_OSPEED_HIGH(GPIOC_SPI_MISO) |      \
                                     PIN_OSPEED_HIGH(GPIOC_SPI_MOSI) |      \
                                     PIN_OSPEED_HIGH(GPIOC_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_ISENSE_C) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_ISENSE_B) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_ISENSE_A) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_VSENSE_VIN) | \
                                     PIN_PUPDR_FLOATING(GPIOC_BONUS_5) |    \
                                     PIN_PUPDR_FLOATING(GPIOC_BONUS_6) |    \
                                     PIN_PUPDR_PULLUP(GPIOC_MDRV_NFAULT) |  \
                                     PIN_PUPDR_FLOATING(GPIOC_MDRV_RST_A) | \
                                     PIN_PUPDR_FLOATING(GPIOC_MDRV_RST_B) | \
                                     PIN_PUPDR_FLOATING(GPIOC_MDRV_RST_C) | \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI_CLK) |    \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI_MISO) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_SPI_MOSI) |   \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN14) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_ISENSE_C) |         \
                                     PIN_ODR_HIGH(GPIOC_ISENSE_B) |         \
                                     PIN_ODR_HIGH(GPIOC_ISENSE_A) |         \
                                     PIN_ODR_HIGH(GPIOC_VSENSE_VIN) |       \
                                     PIN_ODR_HIGH(GPIOC_BONUS_5) |          \
                                     PIN_ODR_HIGH(GPIOC_BONUS_6) |          \
                                     PIN_ODR_LOW(GPIOC_MDRV_NFAULT) |       \
                                     PIN_ODR_LOW(GPIOC_MDRV_RST_A) |        \
                                     PIN_ODR_LOW(GPIOC_MDRV_RST_B) |        \
                                     PIN_ODR_LOW(GPIOC_MDRV_RST_C) |        \
                                     PIN_ODR_LOW(GPIOC_SPI_CLK) |           \
                                     PIN_ODR_LOW(GPIOC_SPI_MISO) |          \
                                     PIN_ODR_LOW(GPIOC_SPI_MOSI) |          \
                                     PIN_ODR_LOW(GPIOC_PIN13) |             \
                                     PIN_ODR_LOW(GPIOC_PIN14) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_ISENSE_C, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_ISENSE_B, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_ISENSE_A, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_VSENSE_VIN, 0U) |    \
                                     PIN_AFIO_AF(GPIOC_BONUS_5, 0U) |       \
                                     PIN_AFIO_AF(GPIOC_BONUS_6, 0U) |       \
                                     PIN_AFIO_AF(GPIOC_MDRV_NFAULT, 0U) |   \
                                     PIN_AFIO_AF(GPIOC_MDRV_RST_A, 0U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_MDRV_RST_B, 0U) |    \
                                     PIN_AFIO_AF(GPIOC_MDRV_RST_C, 0U) |    \
                                     PIN_AFIO_AF(GPIOC_SPI_CLK, 6U) |       \
                                     PIN_AFIO_AF(GPIOC_SPI_MISO, 6U) |      \
                                     PIN_AFIO_AF(GPIOC_SPI_MOSI, 6U) |      \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN15, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - RS485_DIR                 (output pushpull maximum).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN1) |           \
                                     PIN_MODE_OUTPUT(GPIOD_RS485_DIR) |     \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_RS485_DIR) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOD_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN1) |       \
                                     PIN_OSPEED_HIGH(GPIOD_RS485_DIR) |     \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLUP(GPIOD_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN1) |         \
                                     PIN_PUPDR_FLOATING(GPIOD_RS485_DIR) |  \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN1) |             \
                                     PIN_ODR_LOW(GPIOD_RS485_DIR) |         \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_RS485_DIR, 0U) |     \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN15, 0U))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input pullup).
 * PE1  - PIN1                      (input pullup).
 * PE2  - PIN2                      (input pullup).
 * PE3  - PIN3                      (input pullup).
 * PE4  - PIN4                      (input pullup).
 * PE5  - PIN5                      (input pullup).
 * PE6  - PIN6                      (input pullup).
 * PE7  - PIN7                      (input pullup).
 * PE8  - PIN8                      (input pullup).
 * PE9  - PIN9                      (input pullup).
 * PE10 - PIN10                     (input pullup).
 * PE11 - PIN11                     (input pullup).
 * PE12 - PIN12                     (input pullup).
 * PE13 - PIN13                     (input pullup).
 * PE14 - PIN14                     (input pullup).
 * PE15 - PIN15                     (input pullup).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOE_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0U))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input pullup).
 * PF1  - PIN1                      (input pullup).
 * PF2  - PIN2                      (input pullup).
 * PF3  - PIN3                      (input pullup).
 * PF4  - PIN4                      (input pullup).
 * PF5  - PIN5                      (input pullup).
 * PF6  - PIN6                      (input pullup).
 * PF7  - PIN7                      (input pullup).
 * PF8  - PIN8                      (input pullup).
 * PF9  - PIN9                      (input pullup).
 * PF10 - PIN10                     (input pullup).
 * PF11 - PIN11                     (input pullup).
 * PF12 - PIN12                     (input pullup).
 * PF13 - PIN13                     (input pullup).
 * PF14 - PIN14                     (input pullup).
 * PF15 - PIN15                     (input pullup).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOF_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_PULLUP(GPIOF_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0U))

/*
 * GPIOG setup:
 *
 * PG0  - PIN0                      (input pullup).
 * PG1  - PIN1                      (input pullup).
 * PG2  - PIN2                      (input pullup).
 * PG3  - PIN3                      (input pullup).
 * PG4  - PIN4                      (input pullup).
 * PG5  - PIN5                      (input pullup).
 * PG6  - PIN6                      (input pullup).
 * PG7  - PIN7                      (input pullup).
 * PG8  - PIN8                      (input pullup).
 * PG9  - PIN9                      (input pullup).
 * PG10 - PIN10                     (input pullup).
 * PG11 - PIN11                     (input pullup).
 * PG12 - PIN12                     (input pullup).
 * PG13 - PIN13                     (input pullup).
 * PG14 - PIN14                     (input pullup).
 * PG15 - PIN15                     (input pullup).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOG_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOG_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_PULLUP(GPIOG_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_HIGH(GPIOG_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOG_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOG_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOG_PIN15, 0U))

/*
 * GPIOH setup:
 *
 * PH0  - PIN0                      (input pullup).
 * PH1  - PIN1                      (input pullup).
 * PH2  - PIN2                      (input pullup).
 * PH3  - PIN3                      (input pullup).
 * PH4  - PIN4                      (input pullup).
 * PH5  - PIN5                      (input pullup).
 * PH6  - PIN6                      (input pullup).
 * PH7  - PIN7                      (input pullup).
 * PH8  - PIN8                      (input pullup).
 * PH9  - PIN9                      (input pullup).
 * PH10 - PIN10                     (input pullup).
 * PH11 - PIN11                     (input pullup).
 * PH12 - PIN12                     (input pullup).
 * PH13 - PIN13                     (input pullup).
 * PH14 - PIN14                     (input pullup).
 * PH15 - PIN15                     (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOH_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_PULLUP(GPIOH_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input pullup).
 * PI1  - PIN1                      (input pullup).
 * PI2  - PIN2                      (input pullup).
 * PI3  - PIN3                      (input pullup).
 * PI4  - PIN4                      (input pullup).
 * PI5  - PIN5                      (input pullup).
 * PI6  - PIN6                      (input pullup).
 * PI7  - PIN7                      (input pullup).
 * PI8  - PIN8                      (input pullup).
 * PI9  - PIN9                      (input pullup).
 * PI10 - PIN10                     (input pullup).
 * PI11 - PIN11                     (input pullup).
 * PI12 - PIN12                     (input pullup).
 * PI13 - PIN13                     (input pullup).
 * PI14 - PIN14                     (input pullup).
 * PI15 - PIN15                     (input pullup).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOI_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLUP(GPIOI_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_HIGH(GPIOI_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOI_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0U))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0U))

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
