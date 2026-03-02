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


/* Ignition */


/*-----------------------------------------------------------------------------
 MCU Port Assignments                                                          
------------------------------------------------------------------------------*/

/* LED */


/* Ignition */


/*--------------------------------------------------------------------------
 MCU Peripheral Configuration 
--------------------------------------------------------------------------*/

/* MCU Peripheral Handles */
extern UART_HandleTypeDef huart4; /* GPS UART	  */

/* Peripheral Compatibility Macros */
#define GPS_HUART				  huart4


#ifdef __cplusplus
}
#endif

#endif /* SDR_PIN_DEFINES */