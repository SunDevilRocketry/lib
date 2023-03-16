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


/*------------------------------------------------------------------------------
 Macros 
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
 Typdefs 
------------------------------------------------------------------------------*/

/* Error codes */
typedef enum _ERROR_CODE 
    {
    ERROR_FLASH_INIT_ERROR             , /* Flash initialization error        */
    ERROR_BARO_INIT_ERROR              , /* Baro initialization error         */
    ERROR_IMU_INIT_ERROR               , /* IMU initialization error          */
    ERROR_DATA_LOG_LOAD_HEADER_ERROR   , /* Error loading flash header        */
    ERROR_DATA_LOG_CORRECT_HEADER_ERROR, /* Error correcting flash header     */
    ERROR_DATA_LOG_PREP_MEM_ERROR      , /* Error eraseing flight memory      */
    ERROR_CAL_GROUND_ALT_ERROR         , /* Error calibratiing the ground alt */
    ERROR_TERMINAL_ERROR               , /* Error from terminal command       */
    ERROR_FSM_STATE_ERROR              , /* State transition error            */
    ERROR_DUAL_DEPLOY_EXTRACT_ERROR    , /* Dual deploy extract data failed   */
    ERROR_RECORD_FLIGHT_EVENTS_ERROR   , /* Error recording flight evetns     */
    ERROR_SYSCLOCK_CONFIG_ERROR        , /* Error configuring the sysclock    */
    ERROR_COMMON_CLOCK_CONFIG_ERROR    , /* Error configuring shared clocks   */
    ERROR_IMU_I2C_INIT_ERROR           , /* Error initializing IMU I2C bus    */
    ERROR_BARO_I2C_INIT_ERROR          , /* Error initializing the baro I2C   */
    ERROR_FLASH_SPI_INIT_ERROR         , /* Error initializing the flash SPI  */
    ERROR_USB_UART_INIT_ERROR          , /* Error initializing the USB UART   */
    ERROR_BUZZER_TIM_INIT_ERROR        , /* Error initializing the buzzer TIM */
    ERROR_I2C_HAL_MSP_ERROR            , /* Error in I2C HAL MSP              */
    ERROR_SPI_HAL_MSP_ERROR            , /* Error in SPI HAL MSP              */
    ERROR_UART_HAL_MSP_ERROR           , /* Error in UART HAL MSP             */
    ERROR_RF_ERROR                     , /* RF tx/rx error                    */
    ERROR_RF_UNRECOGNIZED_PING         , /* RF ping byte incorrect            */
    ERROR_USB_UART_ERROR               , /* General UART USB I/O error        */
    ERROR_XBEE_UART_CONFIG_ERROR         /* Error initializing XBee UART      */
    } ERROR_CODE;


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