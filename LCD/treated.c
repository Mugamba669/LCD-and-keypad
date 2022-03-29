#include <avr/io.h>

int main(void){
	DDRD = 0xff;
	DDRB = 0xff;
	DDRA = 0xff;
	
	while(1){
		PORTA = 0x4f;
	}
}