#include "morse.h"
#include <avr/io.h>
#include <avr/interrupt.h>

volatile state_t timer_event_signal_state = STATE_NO_VALUE;

#define SIGNAL_INDICATOR (PORTD && 0x80)
ISR(TIMER2_OVF_vect, ISR_BLOCK)
{
	if (SIGNAL_INDICATOR)
		timer_event_signal_state = STATE_ON;
	else
		timer_event_signal_state = STATE_OFF;
}

