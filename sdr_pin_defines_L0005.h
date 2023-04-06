/*******************************************************************************
*                                                                              *
* FILE:                                                                        * 
* 		sdr_pin_defines_L0005.h                                                *
*                                                                              *
* DESCRIPTION:                                                                 * 
* 	    Contains all the MCU pin definitions of the valve controller           *	
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


/* Rev 2.0 */
#ifdef L0005_REV2
	/*-------------------------------------------------------------------------
	 MCU Pin Assignments                                                          
	--------------------------------------------------------------------------*/

	/* LEDs */
	#define STATUS_PIN           GPIO_PIN_15
	#define EXCEPT_PIN           GPIO_PIN_13

	/* Solenoids */
	#define SOL1_PIN             GPIO_PIN_2
	#define SOL2_PIN             GPIO_PIN_3
	#define SOL3_PIN             GPIO_PIN_4
	#define SOL4_PIN             GPIO_PIN_0
	#define SOL5_PIN             GPIO_PIN_1
	#define SOL6_PIN             GPIO_PIN_2

	/* Servo Valves */
	#define LOX_ENC_A_PIN        GPIO_PIN_8
	#define LOX_ENC_B_PIN        GPIO_PIN_9
	#define KER_ENC_A_PIN        GPIO_PIN_6
	#define KER_ENC_B_PIN        GPIO_PIN_15
	#define LOX_EN_PIN           GPIO_PIN_8
	#define LOX_DIR_PIN          GPIO_PIN_12
	#define KER_EN_PIN           GPIO_PIN_11
	#define KER_DIR_PIN          GPIO_PIN_7


	/*-------------------------------------------------------------------------
	 MCU Port Assignments                                                          
	--------------------------------------------------------------------------*/

	/* LEDs */
	#define STATUS_GPIO_PORT     GPIOA
	#define EXCEPT_GPIO_PORT     GPIOD

	/* Solenoids */
	#define SOL1_GPIO_PORT       GPIOE
	#define SOL2_GPIO_PORT       GPIOE
	#define SOL3_GPIO_PORT       GPIOE
	#define SOL4_GPIO_PORT       GPIOA
	#define SOL5_GPIO_PORT       GPIOA
	#define SOL6_GPIO_PORT       GPIOA
	
	/* Servo Valves */
	#define LOX_ENC_GPIO_PORT    GPIOC
	#define KER_ENC_A_GPIO_PORT  GPIOC
	#define KER_ENC_B_GPIO_PORT  GPIOD
	#define LOX_EN_GPIO_PORT     GPIOA
	#define LOX_DIR_GPIO_PORT    GPIOA
	#define KER_EN_GPIO_PORT     GPIOA
	#define KER_DIR_GPIO_PORT    GPIOC


	/*--------------------------------------------------------------------------
	 MCU Peripheral Configuration 
	--------------------------------------------------------------------------*/

	/* Peripheral handles */
	extern UART_HandleTypeDef huart3; /* USB UART                      */
	extern TIM_HandleTypeDef  htim15; /* Valve control PWM signals     */

	/* Peripheral Macros */
	#define USB_HUART         huart3
	#define VALVE_TIM         htim15

	/* Timer Channels */
	#define LOX_TIM_CHANNEL   TIM_CHANNEL_1
	#define FUEL_TIM_CHANNEL  TIM_CHANNEL_2

/* Rev 3.0 */
#elif defined( L0005_REV3 )
	/*-------------------------------------------------------------------------
	 MCU Pin Assignments                                                          
	--------------------------------------------------------------------------*/

	/* LEDs */
	#define STATUS_B_PIN         GPIO_PIN_10
	#define STATUS_G_PIN         GPIO_PIN_8
	#define STATUS_R_PIN         GPIO_PIN_9

	/* Solenoids */
	#define SOL1_PIN             GPIO_PIN_2
	#define SOL2_PIN             GPIO_PIN_3
	#define SOL3_PIN             GPIO_PIN_4
	#define SOL4_PIN             GPIO_PIN_0
	#define SOL5_PIN             GPIO_PIN_1
	#define SOL6_PIN             GPIO_PIN_2

	/* Servo Valves */
	#define LOX_ENC_A_PIN        GPIO_PIN_8
	#define LOX_ENC_B_PIN        GPIO_PIN_9
	#define KER_ENC_A_PIN        GPIO_PIN_14
	#define KER_ENC_B_PIN        GPIO_PIN_15
	#define LOX_EN_PIN           GPIO_PIN_8
	#define LOX_DIR_PIN          GPIO_PIN_12
	#define LOX_PUL_PIN          GPIO_PIN_5
	#define KER_PUL_PIN          GPIO_PIN_3
	#define KER_EN_PIN           GPIO_PIN_11
	#define KER_DIR_PIN          GPIO_PIN_7

	/* USB */
	#define USB_DETECT_PIN       GPIO_PIN_13

	/* Photogates */
	#define LOX_PHOTOGATE_PIN   GPIO_PIN_1
	#define FUEL_PHOTOGATE_PIN  GPIO_PIN_0


	/*-------------------------------------------------------------------------
	 MCU Port Assignments                                                          
	--------------------------------------------------------------------------*/

	/* LEDs */
	#define STATUS_GPIO_PORT     GPIOD

	/* Solenoids */
	#define SOL1_GPIO_PORT       GPIOE
	#define SOL2_GPIO_PORT       GPIOE
	#define SOL3_GPIO_PORT       GPIOE
	#define SOL4_GPIO_PORT       GPIOA
	#define SOL5_GPIO_PORT       GPIOA
	#define SOL6_GPIO_PORT       GPIOA
	
	/* Servo Valves */
	#define LOX_ENC_GPIO_PORT    GPIOC
	#define KER_ENC_GPIO_PORT    GPIOD
	#define LOX_EN_GPIO_PORT     GPIOA
	#define LOX_DIR_GPIO_PORT    GPIOA
	#define LOX_PUL_GPIO_PORT    GPIOE
	#define KER_EN_GPIO_PORT     GPIOA
	#define KER_DIR_GPIO_PORT    GPIOC
	#define KER_PUL_GPIO_PORT    GPIOA

	/* USB */
	#define USB_DETECT_GPIO_PORT GPIOD

	/* Photogates */
	#define PHOTOGATE_GPIO_PORT  GPIOC


	/*--------------------------------------------------------------------------
	 MCU Peripheral Configuration 
	--------------------------------------------------------------------------*/

	/* Peripheral handles */
	extern TIM_HandleTypeDef  htim2;  /* Fuel main valve control PWM signals  */
	extern TIM_HandleTypeDef  htim15; /* LOX main valve control PWM signals   */
	extern UART_HandleTypeDef huart1; /* USB UART                             */
	extern UART_HandleTypeDef huart3; /* Valve Control UART                   */

	/* Peripheral Macros */
	#define VALVE_LOX_TIM     htim15
	#define VALVE_FUEL_TIM    htim2
	#define USB_HUART         huart1
	#define VALVE_HUART       huart3

	/* Timer Channels */
	#define VALVE_LOX_TIM_CHANNEL    TIM_CHANNEL_1
	#define VALVE_FUEL_TIM_CHANNEL   TIM_CHANNEL_4

#endif /* L0005_REV2 */


#ifdef __cplusplus
}
#endif

#endif /* SDR_PIN_DEFINES */
