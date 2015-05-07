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



/* HW board initialization */
void HAL_BoardInit(void);
void HAL_BoardDeinit(void);


/* Main Application Timer */
void HAL_SysTickTimerInit(void);
void HAL_SysTickTimerDeinit(void);
void HAL_SysTickTimerIRSHandler(void);
void HAL_SysTickTimerSetPeriod(uint32_t period_ms);
void HAL_SysTickTimerStart(void);
void HAL_SysTickTimerStop(void);


/* PWM generator used for sound frequency generate */
void HAL_PWMInit(void);
void HAL_PWMDeinit(void);
void HAL_PWMSetPeriod(uint16_t cycle);
void HAL_PWMSetDuty(uint16_t cycle);
void HAL_PWMStart(void);
void HAL_PWMStop(void);


/* The sound duration timer */
void HAL_Timer1Init(void);
void HAL_Timer1Deinit(void);
void HAL_Timer1IRS(void);
void HAL_Timer1SetPeriod(uint32_t period_ms);
void HAL_Timer1Start(void);
void HAL_Timer1Stop(void);


/* Serial port for debug purposes */
void HAL_DebugSerialInit();
void HAL_DebugSerialDeinit();
void HAL_DebugSerialPrint(uint8_t *szBuf);


#endif /* HAL_H_ */
