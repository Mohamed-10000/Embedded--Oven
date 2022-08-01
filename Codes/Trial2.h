#ifndef __TRIAL2__
#define __TRIAL2__

#include <stdint.h>
#include <stdbool.h>
#include <FreeRTOS.h>
#include "FreeRTOSConfig.h"
#include "tm4c123gh6pm.h"
#include <task.h>
#include "queue.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/uart.h"
#include "driverlib/pin_map.h"
#include "LCD.h"
#include "TM4C123.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void PORTE_init(void);
void PORTF_init(void);
void UART_Init(void);
void ADC_Init(void);
void PROJECT_Init(void);

char* itoa(int value, char* buffer, int base);	//string to integar function
void swap(char *x, char *y);	//itoa helping function
char* reverse(char *buffer, int i, int j);	//itoa helping function



void Buzzer_Task(void *pvParameters);
void UART_Task(void *pvParameters);
void Main_Task(void *pvParameters);
void LCD_Task(void *pvParameters);

void Delay(unsigned long counter);
char UART0_Receiver(void);
void UART0_Transmitter(unsigned char data);
void printstring(char *str);


#endif