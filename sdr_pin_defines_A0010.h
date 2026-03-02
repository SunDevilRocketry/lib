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
#define STATUS_B_PIN	          GPIO_PIN_1
#define STATUS_G_PIN              GPIO_PIN_2
#define STATUS_R_PIN              GPIO_PIN_3

/* Ignition */
#define SWITCH_PIN                GPIO_PIN_1
#define MAIN_PIN                  GPIO_PIN_8
#define MAIN_CONT_PIN             GPIO_PIN_9
#define DROGUE_PIN                GPIO_PIN_6
#define DROGUE_CONT_PIN           GPIO_PIN_7

/*-----------------------------------------------------------------------------
 MCU Port Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */
#define STATUS_GPIO_PORT          GPIOA

/* Ignition */
#define SWITCH_GPIO_PORT          GPIOC
#define MAIN_GPIO_PORT            GPIOC
#define MAIN_CONT_GPIO_PORT       GPIOC
#define DROGUE_GPIO_PORT          GPIOC
#define DROGUE_CONT_GPIO_PORT     GPIOC

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


#ifdef __cplusplus
}
#endif

#endif /* SDR_PIN_DEFINES */