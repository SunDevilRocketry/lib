/*******************************************************************************
*                                                                              *
* FILE:                                                                        * 
* 		sdr_pin_defines_A0007_rev1.h                                           *
*                                                                              *
* DESCRIPTION:                                                                 * 
* 	    Contains all the MCU pin definitions for the flight computer lite      *
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
#define FLASH_WP_PIN              GPIO_PIN_13
#define FLASH_HOLD_PIN            GPIO_PIN_12

/* Baro Pressure Sensor */
#define BP_INT_PIN                GPIO_PIN_3

/* USB */
#define USB_SUSPEND_PIN           GPIO_PIN_8
#define USB_RST_PIN               GPIO_PIN_12
#define USB_DETECT_PIN            GPIO_PIN_9


/*-----------------------------------------------------------------------------
 MCU Port Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */
#define STATUS_GPIO_PORT          GPIOA

/* Ignition */
#define SWITCH_GPIO_PORT          GPIOD
#define MAIN_GPIO_PORT            GPIOE
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

/* Baro Pressure Sensor */
#define BP_INT_GPIO_PORT          GPIOE

/* USB */
#define USB_SUSPEND_GPIO_PORT     GPIOA 
#define USB_RST_GPIO_PORT         GPIOA 
#define USB_DETECT_GPIO_PORT      GPIOD 


/*--------------------------------------------------------------------------
 MCU Peripheral Configuration 
--------------------------------------------------------------------------*/

/* MCU Peripheral Handles */
extern I2C_HandleTypeDef  hi2c1;  /* Baro I2C     */
extern SPI_HandleTypeDef  hspi2;  /* Flash SPI    */
extern TIM_HandleTypeDef  htim4;  /* Buzzer Timer */
extern UART_HandleTypeDef huart6; /* USB UART     */

/* Peripheral Compatibility Macros */
#define BARO_I2C                  hi2c1 
#define FLASH_SPI                 hspi2
#define USB_HUART                 huart6
#define BUZZ_TIM                  htim4

/* Timer channels */
#define BUZZ_TIM_CHANNEL         TIM_CHANNEL_3


#ifdef __cplusplus
}
#endif

#endif /* SDR_PIN_DEFINES */