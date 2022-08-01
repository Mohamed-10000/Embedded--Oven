#include "Trial2.h"

int main()
{
	
	PROJECT_Init();
	xTaskCreate(Main_Task,"Main Controller",400, NULL,7, NULL);
	xTaskCreate(UART_Task,"UART Controller",400, NULL,7, NULL);
	xTaskCreate(LCD_Task,"LCD Controller",400, NULL,7, NULL);
	xTaskCreate(Buzzer_Task,"Buzzer Controller",400, NULL,7, NULL);

	vTaskStartScheduler();// Start the RTOS scheduler
	
	while(1);
	return 0;
}