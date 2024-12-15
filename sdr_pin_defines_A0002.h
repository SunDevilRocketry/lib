/*******************************************************************************
*                                                                              *
* FILE:                                                                        * 
* 		sdr_pin_defines_A0002_rev1.h                                           *
*                                                                              *
* DESCRIPTION:                                                                 * 
* 	    Contains all the MCU pin definitions for flight computer               *
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
#define STATUS_B_PIN	          GPIO_PIN_9    
#define STATUS_G_PIN              GPIO_PIN_10  
#define STATUS_R_PIN              GPIO_PIN_11  

/* Ignition */
#define SWITCH_PIN                GPIO_PIN_7
#define MAIN_PIN                  GPIO_PIN_6
#define MAIN_CONT_PIN             GPIO_PIN_4
#define DROGUE_PIN                GPIO_PIN_13
#define DROGUE_CONT_PIN           GPIO_PIN_14

/* External Flash */
#define FLASH_SS_PIN			  GPIO_PIN_12
#define FLASH_SCK_PIN             GPIO_PIN_13
#define FLASH_MISO_PIN            GPIO_PIN_14
#define FLASH_MOSI_PIN            GPIO_PIN_15
#define FLASH_WP_PIN              GPIO_PIN_12
#define FLASH_HOLD_PIN            GPIO_PIN_13

/* SD Card */
#define SDR_SD_DETECT_PIN         GPIO_PIN_15

/* Baro Pressure Sensor */
#define BP_INT_PIN                GPIO_PIN_3

/* IMU */
#if   defined( A0002_REV1 )
	#define IMU_INT_PIN           GPIO_PIN_2
#elif defined( A0002_REV2 )
	#define IMU_INT1_PIN          GPIO_PIN_2
	#define IMU_INT2_PIN          GPIO_PIN_2
#endif

/* USB */
#define USB_SUSPEND_PIN           GPIO_PIN_8
#define USB_RST_PIN               GPIO_PIN_12
#ifdef A0002_REV2
	#define USB_DETECT_PIN        GPIO_PIN_9
#endif

/* Magnetometer */
#ifdef A0002_REV2
	#define MAG_INT_PIN           GPIO_PIN_7
	#define MAG_DRDY_PIN          GPIO_PIN_2
#endif

/* LORA */
#define LORA_SCK_PIN 			GPIO_PIN_2
#define LORA_MISO_PIN 			GPIO_PIN_5
#define LORA_MOSI_PIN 			GPIO_PIN_6
		
#define LORA_NSS_PIN			GPIO_PIN_0
#define LORA_RST_PIN 			GPIO_PIN_1
		
#define LORA_DIO0_PIN			GPIO_PIN_8
#define LORA_DIO4_PIN 			GPIO_PIN_9
#define LORA_DIO1_PIN 			GPIO_PIN_10
#define LORA_DIO3_PIN 			GPIO_PIN_11
#define LORA_DIO2_PIN 			GPIO_PIN_12
#define LORA_DIO5_PIN 			GPIO_PIN_13

/*-----------------------------------------------------------------------------
 MCU Port Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */
#define STATUS_GPIO_PORT          GPIOA

/* Ignition */
#define SWITCH_GPIO_PORT          GPIOD
#define MAIN_GPIO_PORT            GPIOD
#define MAIN_CONT_GPIO_PORT       GPIOE
#define DROGUE_GPIO_PORT          GPIOC
#define DROGUE_CONT_GPIO_PORT     GPIOC

/* External Flash */
#define FLASH_SS_GPIO_PORT        GPIOB
#define FLASH_SCK_GPIO_PORT       GPIOB
#define FLASH_MISO_GPIO_PORT      GPIOB
#define FLASH_MOSI_GPIO_PORT      GPIOB
#define FLASH_WP_GPIO_PORT        GPIOD
#define FLASH_HOLD_GPIO_PORT      GPIOD

/* SD Card */
#define SDR_SD_DETECT_GPIO_PORT   GPIOD

/* Baro Pressure Sensor */
#define BP_INT_GPIO_PORT          GPIOE

/* IMU */
#if   defined( A0002_REV1 )
	#define IMU_INT_GPIO_PORT     GPIOA 
#elif defined( A0002_REV2 )
	#define IMU_INT1_GPIO_PORT    GPIOC 
	#define IMU_INT2_GPIO_PORT    GPIOA 
#endif

/* USB */
#define USB_SUSPEND_GPIO_PORT     GPIOA 
#define USB_RST_GPIO_PORT         GPIOA 
#ifdef A0002_REV2
	#define USB_DETECT_GPIO_PORT  GPIOD 
#endif

/* Magnetometer */
#ifdef A0002_REV2
	#define MAG_INT_GPIO_PORT     GPIOE
	#define MAG_DRDY_GPIO_PORT    GPIOB 
#endif

/* LORA */
#define LORA_SCK_GPIO_PORT 		GPIOE
#define LORA_MISO_GPIO_PORT 	GPIOE
#define LORA_MOSI_GPIO_PORT 	GPIOE

#define LORA_RST_GPIO_PORT 		GPIOC
#define LORA_NSS_GPIO_PORT		GPIOC

#define LORA_DIO0_GPIO_PORT		GPIOE
#define LORA_DIO4_GPIO_PORT		GPIOE
#define LORA_DIO1_GPIO_PORT		GPIOE
#define LORA_DIO3_GPIO_PORT		GPIOE
#define LORA_DIO2_GPIO_PORT		GPIOE
#define LORA_DIO5_GPIO_PORT		GPIOE

/*--------------------------------------------------------------------------
 MCU Peripheral Configuration 
--------------------------------------------------------------------------*/

/* MCU Peripheral Handles */
extern I2C_HandleTypeDef  hi2c1;  /* Baro I2C     */
extern I2C_HandleTypeDef  hi2c2;  /* IMU I2C      */
extern SD_HandleTypeDef   hsd1;   /* SD Card      */
extern SPI_HandleTypeDef  hspi2;  /* Flash SPI    */
extern TIM_HandleTypeDef  htim4;  /* Buzzer Timer */
extern UART_HandleTypeDef huart6; /* USB UART     */
extern SPI_HandleTypeDef hspi4;   /* LORA SPI */

/* Peripheral Compatibility Macros */
#define BARO_I2C                  hi2c1 
#define FLASH_SPI                 hspi2
#define IMU_I2C                   hi2c2
#define USB_HUART                 huart6
#define BUZZ_TIM                  htim4
#define SD_HSD                    hsd1

/* Timer channels */
#define BUZZ_TIM_CHANNEL         TIM_CHANNEL_3


#ifdef __cplusplus
}
#endif

#endif /* SDR_PIN_DEFINES */