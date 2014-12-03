/*
 * app_timer.h
 *
 *  Created on: 14-07-2013
 *      Author: arek
 */

#ifndef APP_TIMER_H_
#define APP_TIMER_H_


#include <stdint.h>
#include "types.h" // todo: is it needed ?

void APPTIMER_TimerInit(void);
void APPTIMER_TimerDeinit(void);
void APPTIMER_TimerIRS(void);
void APPTIMER_TimerSetPeriod(uint16_t period);
void APPTIMER_TimerStart(void);
void APPTIMER_TimerStop(void);


#endif /* APP_TIMER_H_ */
