/*
 * hal.h
 *
 *  Created on: 10-08-2012
 *      Author: arek
 */

#ifndef HAL_H_
#define HAL_H_

#include <stdint.h>
#include "types.h" // todo: is it needed ?


/* IO definitions */

#define SPEAKER_OUT_PLUS		// todo
#define SPEAKER_OUT_MINUS		// todo


//todo: not directly but by bus layer
/* BP085 Sensor inputs */
#define SENSOR_EOC		// End od conversion todo
#define SENSOR_SDA		// I2C data todo
#define SENSOR_SCL		// I2C clock todo



/* Main Application Timer */
void HAL_AppTimerInit(void);
void HAL_AppTimerDeinit(void);
void HAL_AppTimerIRS(void);
void HAL_AppTimerSetPeriod(uint16_t period);
void HAL_AppTimerStart(void);
void HAL_AppTimerStop(void);


/* PWM generator used for sound frequency generate */
void HAL_PWMInit(void);
void HAL_PWMDeinit(void);
void HAL_PWMSetCycle(uint16_t cycle);
void HAL_PWMStart(void);
void HAL_PWMStop(void);


/* The sound duration timer */
void HAL_SoundTimerInit(void);
void HAL_SoundTimerDeinit(void);
void HAL_SoundTimerIRS(void);
void HAL_SoundTimerSetPeriod(uint16_t period);
void HAL_SoundTimerStart(void);
void HAL_SoundTimerStop(void);


/* Serial port for debug purposes */
void HAL_DebugSerialInit();
void HAL_DebugSerialDeinit();
void HAL_DebugSerialPrint(uint8_t *szBuf);


#endif /* HAL_H_ */
