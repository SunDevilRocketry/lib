/*******************************************************************************
*                                                                              *
* FILE:                                                                        * 
* 		sdr_pin_defines_A0010.h    		                                       *
*                                                                              *
* DESCRIPTION:                                                                 * 
* 	    Contains all the MCU pin definitions for flight computer rev 3         *
*                                                                              *
*******************************************************************************/


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef SDR_PIN_DEFINES 
#define SDR_PIN_DEFINES 

#ifdef __cplusplus
extern "C" {
#endif


/*------------------------------------------------------------------------------
Includes 
------------------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"


/*-----------------------------------------------------------------------------
 MCU Pin Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */
#define STATUS_B_PIN	        GPIO_PIN_1
#define STATUS_G_PIN            GPIO_PIN_2
#define STATUS_R_PIN            GPIO_PIN_3

/* Buzzer */
#define BUZZER_PIN              GPIO_PIN_0

/* Ignition */
#define SWITCH_PIN              GPIO_PIN_1
#define MAIN_PIN                GPIO_PIN_8
#define MAIN_CONT_PIN           GPIO_PIN_9
#define DROGUE_PIN              GPIO_PIN_6
#define DROGUE_CONT_PIN         GPIO_PIN_7

/* External Flash */
#define FLASH_CE_PIN            GPIO_PIN_3
#define FLASH_SCK_PIN           GPIO_PIN_2
#define FLASH_IO_0_PIN          GPIO_PIN_4
#define FLASH_IO_1_PIN          GPIO_PIN_5
#define FLASH_IO_2_PIN          GPIO_PIN_6
#define FLASH_IO_3_PIN          GPIO_PIN_7

/* Baro */
#define BARO_SCK_PIN            GPIO_PIN_2
#define BARO_INT_PIN            GPIO_PIN_3
#define BARO_CSB_PIN            GPIO_PIN_4
#define BARO_MISO_PIN           GPIO_PIN_5
#define BARO_MOSI_PIN           GPIO_PIN_6

/* IMU */
#define IMU_SCK_PIN             GPIO_PIN_5
#define IMU_CS_PIN              GPIO_PIN_4
#define IMU_MISO_PIN            GPIO_PIN_6
#define IMU_MOSI_PIN            GPIO_PIN_7
#define IMU_INT1_PIN            GPIO_PIN_4
#define IMU_INT2_PIN            GPIO_PIN_5

/* USB */
#define USB_DETECT_PIN          GPIO_PIN_10
#define USB_OTG_DP_PIN          GPIO_PIN_12
#define USB_OTG_DM_PIN          GPIO_PIN_11

/* Magnetometer */
#define MAG_SCL_PIN             GPIO_PIN_11
#define MAG_SDA_PIN             GPIO_PIN_10
#define MAG_INT_PIN             GPIO_PIN_12

/* GPS */
#define GPS_UART_TX_PIN         GPIO_PIN_9
#define GPS_UART_RX_PIN         GPIO_PIN_8
#define GPS_SAFEBOOT_PIN        GPIO_PIN_7
#define GPS_RESET_PIN           GPIO_PIN_6
#define GPS_EXTINT_PIN          GPIO_PIN_5
#define GPS_TIMEPULSE_PIN       GPIO_PIN_4

/*-----------------------------------------------------------------------------
 MCU Port Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */
#define STATUS_GPIO_PORT        GPIOA

/* Buzzer */
#define BUZZER_GPIO_PORT        GPIOC

/* Ignition */
#define SWITCH_GPIO_PORT        GPIOC
#define MAIN_GPIO_PORT          GPIOC
#define MAIN_CONT_GPIO_PORT     GPIOC
#define DROGUE_GPIO_PORT        GPIOC
#define DROGUE_CONT_GPIO_PORT   GPIOC

/* External Flash */
#define FLASH_CE_GPIO_PORT      GPIOD
#define FLASH_SCK_GPIO_PORT     GPIOB
#define FLASH_IO_0_GPIO_PORT    GPIOD
#define FLASH_IO_1_GPIO_PORT    GPIOD
#define FLASH_IO_2_GPIO_PORT    GPIOD
#define FLASH_IO_3_GPIO_PORT    GPIOD

/* Baro */
#define BARO_SCK_GPIO_PORT      GPIOE
#define BARO_INT_GPIO_PORT      GPIOE
#define BARO_CSB_GPIO_PORT      GPIOE
#define BARO_MISO_GPIO_PORT     GPIOE
#define BARO_MOSI_GPIO_PORT     GPIOE

/* IMU */
#define IMU_SCK_GPIO_PORT       GPIOA
#define IMU_CS_GPIO_PORT        GPIOA
#define IMU_MISO_GPIO_PORT      GPIOA
#define IMU_MOSI_GPIO_PORT      GPIOA
#define IMU_INT1_GPIO_PORT      GPIOC
#define IMU_INT2_GPIO_PORT      GPIOC

/* USB */
#define USB_DETECT_GPIO_PORT    GPIOA
#define USB_OTG_DP_GPIO_PORT    GPIOA
#define USB_OTG_DM_GPIO_PORT    GPIOA

/* Magnetometer */
#define MAG_SCL_GPIO_PORT       GPIOC
#define MAG_SDA_GPIO_PORT       GPIOC
#define MAG_INT_GPIO_PORT       GPIOC

/* GPS */
#define GPS_UART_TX_GPIO_PORT   GPIOB
#define GPS_UART_RX_GPIO_PORT   GPIOB
#define GPS_SAFEBOOT_GPIO_PORT  GPIOB
#define GPS_RESET_GPIO_PORT     GPIOB
#define GPS_EXTINT_GPIO_PORT    GPIOB
#define GPS_TIMEPULSE_GPIO_PORT GPIOB

/*--------------------------------------------------------------------------
 MCU Peripheral Configuration 
--------------------------------------------------------------------------*/

/* MCU Peripheral Handles */
extern FDCAN_HandleTypeDef hfdcan3; /* CANFD			*/
extern I2C_HandleTypeDef hi2c5;		/* Magnetometer		*/
extern OSPI_HandleTypeDef hospi2;   /* Flash QSPI		*/
extern SPI_HandleTypeDef hspi1;		/* IMU				*/
extern SPI_HandleTypeDef hspi2;		/* LoRa				*/
extern SPI_HandleTypeDef hspi4;		/* Barometer		*/
extern UART_HandleTypeDef huart4;	/* GPS				*/
extern UART_HandleTypeDef huart3;	/* Debugger Serial	*/

/* Peripheral Compatibility Macros */
#define GPS_HUART				  huart4
#define IMU_SPI                   hspi1
#define BARO_SPI                  hspi4
#define LORA_SPI                  hspi2
#define FLASH_OSPI                hospi2
#define MAG_I2C                   hi2c5

#define CAN_HANDLE                hfdcan3


#ifdef __cplusplus
}
#endif

#endif /* SDR_PIN_DEFINES */