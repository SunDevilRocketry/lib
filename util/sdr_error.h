/*******************************************************************************
*
* FILE: 
* 		sdr_error.h
*
* DESCRIPTION: 
*       Contains error codes to pass to the Error_Handler() to allow for 
*       easier debugging once the error handler has been invoked
*
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef SDR_ERROR_H 
#define SDR_ERROR_H 

#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------------------------------------------------
 Includes 
------------------------------------------------------------------------------*/
#include "common.h"


/*------------------------------------------------------------------------------
 Macros 
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
 Function Prototypes 
------------------------------------------------------------------------------*/

/* This function is executed in case of error occurrence */
void Error_Handler
	(
	volatile ERROR_CODE error_code
	);

#ifdef __cplusplus
}
#endif

#endif /* SDR_ERROR_H */

/*******************************************************************************
* END OF FILE                                                                  *
*******************************************************************************/
