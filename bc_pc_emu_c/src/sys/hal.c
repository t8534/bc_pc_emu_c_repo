/*
 * hal.c
 *
 *  Created on: 10-08-2012
 *      Author: arek
 */

#include <stdint.h>
#include "type_def.h" // todo: is it needed ?

//todo example of calculate
    /* NOTE! Resolution 32[us]. */
/*
        #define  HWTIMER_US_2_CNT(x)    ((TmrCnt_t)((x)>>5))
        #define  HWTIMER_MS_2_CNT(x)    ((TmrCnt_t)(((x)*1000UL)>>5))
        #define  HWTIMER_CNT_2_MS(x)    ((uint32_t)(x)>>5)
*/

//nice hack
    /* Read the higer part of the counter twice to detect
     * overflows from lo to hi part of the counter.
     */

/*
    hiWord1 = TPU1.TCNT;
    loWord = TPU2.TCNT;
    hiWord2 = TPU1.TCNT;

    if (hiWord2 != hiWord1) {
        loWord = TPU2.TCNT;
    }
*/


/* HW board initialization */
void HAL_BoardInit(void)
{
	//For LPC*

	//SystemCoreClockUpdate();

	//Board_Init();

	// Call all peripherials initialization


	//For PC

	// Initialize SDL library, and other pc related modules.

}

void HAL_BoardDeinit(void)
{

}



/* The main application timer. Hardware layer
 *
 * Expected period length: todo
 *
 */
void HAL_SysTickTimerInit()
{

}

void HAL_SysTickTimerDeinit()
{
	// Switch power of timer off here
}

void HAL_SysTickTimerIRSHandler()
{

}

void HAL_SysTickTimerSetPeriod(uint32_t period_ms)
{

}

void HAL_SysTickTimerStart()
{

}

void HAL_SysTickTimerStop()
{

}


/* PWM generator used for sound frequency generate
 *
 * Expected frequency range: 0 - 10 kHz
 *
 */
void HAL_PWMInit()
{

}


void HAL_PWMDeinit()
{
	// power off
}


void HAL_PWMSetPeriod(uint16_t period)
{

}


void HAL_PWMSetDuty(uint16_t period)
{

}


void HAL_PWMStart()
{

}

void HAL_PWMStop()
{

}


/*
 * The sound duration timer
 *
 */
void HAL_Timer1Init()
{

}

void HAL_Timer1Deinit()
{
	// power off
}


void HAL_Timer1IRS()
{

}

void HAL_Timer1SetPeriod(uint32_t period_ms)
{

}

void HAL_Timer1Start()
{

}

void HAL_Timer1Stop()
{

}



/* Serial communication for debug purposes.
 * Use UART2 pins, common with ICSP, for ease use with PicKit2 UART tool.
 *
 * 8928baud for FCY = 250kHz, you have to select "custom baud rate" in the
 * PicKit2 UART tool.
 */
void HAL_DebugSerialOpen()
{
   /*
   uint8_t tmp;
   U2BRG  = 6;     // 8928baud for FCY = 250kHz
   U2MODEbits.BRGH = 1;
   U2MODEbits.UARTEN = 1;
   U2MODEbits.RTSMD = 1;	// no flow control
   U2MODEbits.PDSEL = 0;	// 8 bits, no parity
   U2MODEbits.STSEL = 0;	// 1 stop bit
   while(U2STAbits.URXDA == 1) {
      tmp = U2RXREG;
   }
   // clear IF flags
   IFS1bits.U2RXIF = 0;
   IFS1bits.U2TXIF = 0;
   // set priority
   IPC7bits.U2RXIP = 1;
   IPC7bits.U2TXIP = 1;
   // disable interrupt
   IEC1bits.U2RXIE = 0;
   IEC1bits.U2TXIE = 0;
   // enable transmit
   U2STAbits.UTXEN = 1;
   */
}


void HAL_DebugSerialClose()
{
	// power off
}


void HAL_DebugSerialPrint(uint8_t *buff)
{
	/*
	while(*buff) {
		U2TXREG = *buff++;
		while(!U2STAbits.TRMT) {};
	}
	*/
}


/* I2C communication
 *
 *
 */
void HAL_I2CInit()
{

}

