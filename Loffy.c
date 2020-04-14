#include "Register.h"
#include "GPIO_MCAL.h"
#include "LED_ECU.h"
#include "Seven_Segment_ECU.h"
#include "LCD_ECU.h"
#include "KeyPad_ECU.h"
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void){
	u8 x;
	keypad_vInit('d');
	LCD_vInit(Eight_Bit,High_Nibble,'a','b',0,'b',2,'b',3);
	 x=keypad_u8check_press('d');
	 //LCD_Move_Cursor(Eight_Bit,High_Nibble,'a','b',0,'b',3,1,6);
	 //LCD_vsend_string(Eight_Bit,High_Nibble,'a','b',0,'b',3,"HELMY");
	while(1){
		  while(x == NOTPRESSED){
	             x = keypad_u8check_press('d');
		  }
	if (x=='A'){
		LCD_clear_screen(Eight_Bit,High_Nibble,'a','b',0,'b',3);
    x=NOTPRESSED;
		
	}else{	
	LCD_vsend_char(Eight_Bit,High_Nibble,'a','b',0,'b',3,x);
    x=NOTPRESSED;
	_delay_ms(500);		
	}		
	}		
		
	
}
