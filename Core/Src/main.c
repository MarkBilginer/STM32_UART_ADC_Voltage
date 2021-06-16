/** @file main.c
 *  @brief Application entry point.
 *
 *  This file contains the applications' main() function.
 *
 *  This is the entry point for the application.
 *  Application name is STM32_UART_ADC_Voltage.
 *  What the Application does? Reads external potentiometer
 *  value using ADC converts it to voltage, and prints the result
 *  using UART into the console.
 *
 *  @author Mark Bilginer (GitHub: MarkBilginer)
 *  @bug After reaching 4096 on potentiometer turning more reduces the
 *  	value read somehow.
 */

/* -- Includes -- */
#include "main.h"

/** @brief Application entry point.
 *
 *  This is the entry point for your Application.
 *  You will use this to test and debug your
 *  application.
 *
 * @todo timer base and interrupt to be stopped.
 * @return Should not return.
 */
int main(void)
{
	application();
}
