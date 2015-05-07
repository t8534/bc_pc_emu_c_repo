/*
 * app_timer.c
 *
 *  Created on: 14-07-2013
 *      Author: arek
 */

#include "app_timer.h"
#include "bc_pc_emu_c.h"

/* The main application timer. Hardware layer
 *
 * Expected period length: todo
 *
 */
void APPTIMER_TimerInit(void)
{

}

void APPTIMER_TimerDeinit(void)
{
	// Switch power of timer off here
}


void APPTIMER_TimerIRS(void)
{
	APP_mainLoop();
}


void APPTIMER_TimerSetPeriod(uint16_t period)
{

}

void APPTIMER_TimerStart(void)
{

}

void APPTIMER_TimerStop(void)
{

}

