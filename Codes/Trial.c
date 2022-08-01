#include "stdint.h"
#include "stdbool.h"
#include "LCD.h"
#include "tm4c123gh6pm.h"

int main(){
	
	uint32_t x=0;
	LCD LCD;
//	SysCtlClockSet();
	x=SysCtlClockGet();
	LCD=LCD_create();
	
	LCD_setup(&LCD);
	LCD_init(&LCD);
	
	
	
	LCD_clear(&LCD);
	LCD_setPosition(&LCD,1,3);
	LCD_sendString(&LCD, "Good Morning");
	LCD_setPosition(&LCD,2,5);
	LCD_sendString(&LCD, "Shahenda");
	return 0;
}