/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define TARGET_BOARD_IDENTIFIER                          "S411"
#define USBD_PRODUCT_STRING                              "GEPRCF411 PRO"
#define TARGET_MANUFACTURER_IDENTIFIER                   "GEPR"

#define ENABLE_DSHOT_DMAR                                true

//Aux
#define LED0_PIN                                         PC13
#define LED1_PIN                                         PC14

#define USE_BEEPER
#define BEEPER_PIN                                       PB2
#define BEEPER_INVERTED

//MPU-6000
#define USE_GYRO
#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_EXTI
#define USE_MPU_DATA_READY_SIGNAL

#define MPU_INT_EXTI                                     PA1                    //MPU_INT_EXTI
#define MPU6000_CS_PIN                                   PA4                    //GYRO_1_CS_PIN
#define MPU6000_SPI_INSTANCE                             SPI1                   //GYRO_1_SPI_INSTANCE
#define GYRO_MPU6000_ALIGN                               CW0_DEG
#define ACC_MPU6000_ALIGN                                CW0_DEG

// OSD
#define USE_MAX7456
#define MAX7456_SPI_INSTANCE                             SPI2
#define MAX7456_SPI_CS_PIN                               PB12
#define MAX7456_SPI_CLK                                  (SPI_CLOCK_STANDARD)   // 10MHz
#define MAX7456_RESTORE_CLK                              (SPI_CLOCK_FAST)

// Uarts
#define USE_UART1
#define UART1_RX_PIN                                     PA10
#define UART1_TX_PIN                                     PA9

#define USE_UART2
#define UART2_RX_PIN                                     PA3
#define UART2_TX_PIN                                     PA2
#define USE_SOFTSERIAL1
#define SERIAL_PORT_COUNT                                4                      //VCP, USART1, USART2,USART3,USART4,USART5,USART6

// ESC
#define USE_ESCSERIAL
#define USE_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE                     VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE                     CURRENT_METER_ADC
#define CURRENT_METER_ADC_PIN                            PB0
#define VBAT_ADC_PIN                                     PB1
#define CURRENT_METER_SCALE_DEFAULT                      250                    // 3.3/120A  = 25mv/A

//I2C
#define USE_I2C
#define USE_I2C_PULLUP
#define USE_I2C_DEVICE_1
#define I2C1_SCL                                        PB8
#define I2C1_SDA                                        PB9
#define I2C_DEVICE                                      (I2CDEV_1)

#define USE_BARO
#define USE_BARO_BMP280
#define BARO_I2C_INSTANCE                               (I2CDEV_1)

// SPI devices
#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3

#define SPI1_MISO_PIN                                   PA6
#define SPI1_MOSI_PIN                                   PA7
#define SPI1_SCK_PIN                                    PA5

#define SPI2_MISO_PIN                                   PB14
#define SPI2_MOSI_PIN                                   PB15
#define SPI2_SCK_PIN                                    PB13

#define SPI3_SCK_PIN                                    PB3
#define SPI3_MISO_PIN                                   PB4
#define SPI3_MOSI_PIN                                   PB5

//Flash
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define FLASH_CS_PIN                                    PA15
#define FLASH_SPI_INSTANCE                              SPI3

// USB
#define USE_VCP
#define USE_USB_DETECT
#define USB_DETECT_PIN                                  PC15
#define DEFAULT_RX_FEATURE                              FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER                               SERIALRX_SBUS
#define SERIALRX_UART                                   SERIAL_PORT_USART2

// IO Ports
#define TARGET_IO_PORTA                                 0xffff
#define TARGET_IO_PORTB                                 0xffff
#define TARGET_IO_PORTC                                 0xffff
#define TARGET_IO_PORTD                                 (BIT(2))

// timers
#define USABLE_TIMER_CHANNEL_COUNT                      6                       //updated timer count to compensate for Nf Motor 4
#define USED_TIMERS ( TIM_N(1) | TIM_N(2) | TIM_N(4) | TIM_N(5) | TIM_N(9)   ) //update based on update CLRACINGF7 Target BF4.1+
