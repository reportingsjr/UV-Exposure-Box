#include <msp430.h>

void main(void) {
  P1DIR |= (BIT0 + BIT6); // set 1.0 and 1.6 as outputs
  for(;;) {
    P1OUT ^= (BIT0 + BIT6); // toggle the LED pins on/off
    __delay_cycles(100000);
  }
}
