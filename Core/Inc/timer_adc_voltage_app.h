/** @file timer_adc_voltage_app.h
 *  @brief Application layer functions.
 *
 *  Provides a layer of abstraction. Aim is to make the application portable,
 *  and separating the vendor dependence. Application layer makes use of the
 *  custom written functions in the library abstraction layer.
 *
 *  The functions config_timer() and setup_mcu() are helper functions.
 *
 *  A call to the function application() runs the application.
 *
 *  @author Mark Bilginer (GitHub: MarkBilginer)
 *  @bug No known bugs.
 */

#ifndef INC_TIMER_ADC_VOLTAGE_APP_H_
#define INC_TIMER_ADC_VOLTAGE_APP_H_

/* -- Includes -- */

/* -- Library abstraction layer -- */
#include "STM32_timer_adc_lib.h"

/* -- Exported functions prototypes -- */

/** @brief Configures timer. PeriodElapsed trigger is used to read, convert
 *  ADC value and print it to the console.
 *
 *  Helper and wrapper function.
 *
 *  @param None
 *  @return None
 */
void config_timer(void);

/** @brief Setup necessary functions of MCU.
 *
 *  Helper function.
 *
 *  @param None
 *  @return None
 */
void setup_mcu(void);

/** @brief The applications' entry point.
 *
 *  Calls helper and wrapper functions setup_mcu() and prints credentials
 *  using UART to the console.
 *  In addition, starts interrupt for timer in use.
 *
 *  @param None
 *  @return None
 */
void application(void);

#endif /* INC_TIMER_ADC_VOLTAGE_APP_H_ */
