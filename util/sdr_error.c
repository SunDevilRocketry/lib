/*******************************************************************************
*
* FILE: 
* 		sdr_error.c
*
* DESCRIPTION: 
*       Contains error codes to pass to the Error_Handler() to allow for 
*       easier debugging once the error handler has been invoked
*
*******************************************************************************/


/*------------------------------------------------------------------------------
 Includes 
------------------------------------------------------------------------------*/
#include "main.h"
#include "sdr_error.h"
#include "led.h"


/*------------------------------------------------------------------------------
 Procedures 
------------------------------------------------------------------------------*/


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
*       Error_Handler                                                          *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		This function is executed in case of error occurrence                  *
*                                                                              *
*******************************************************************************/
void Error_Handler
	(
	volatile ERROR_CODE error_code
	)
{
/* User can add his own implementation to report the HAL error return state */
__disable_irq();

/* LED indication */
led_error_assert();

/* Idle */
while (1)
	{
	}
} /* Error_Handler */


/*******************************************************************************
* END OF FILE                                                                  *
*******************************************************************************/