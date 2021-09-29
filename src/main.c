#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
  DDRB=0b111;

  while(1)
  {
    PORTB = 0b111;
    _delay_ms(500);
    PORTB=0;
    _delay_ms(500);
  }
}