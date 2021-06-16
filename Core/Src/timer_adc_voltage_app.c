/** @file timer_adc_voltage_app.c
 *  @brief Application helper and wrapper functions.
 *
 *  This file contains the applications' helper and wrapper functions.
 *  Aims to make the code more readable. Application layer,
 *  library layer and driver layer concept was in mind.
 *
 *  @author Mark Bilginer (GitHub: MarkBilginer)
 *  @bug No known bugs.
 */

/* -- Includes -- */
#include "timer_adc_voltage_app.h"

void config_timer(void)
{
	init_timer1(1000, TIM_COUNTERMODE_UP, 32000, TIM_CLOCKDIVISION_DIV1,
		0, TIM_AUTORELOAD_PRELOAD_ENABLE);
}

void setup_mcu(void)
{
	/* Reset of all peripherals, Initializes the Flash interface and the Systick.*/
	init_hal();

	/* Configure the system clock */
	config_system_clock();

	/* Initialize all configured peripherals */
	init_gpio();
	init_uart(115200);
	init_adc1();
	config_timer();

}

void application(void)
{
	setup_mcu();

	char credentials[] = "Assignment 2 - <Mark> <Bilginer>\r\n";
	uart_print(credentials);

	tim_base_start_interrupt();
}
