/** @file STM32_timer_adc_lib.h
 *  @brief Library layer functions.
 *
 *  Provides a layer of abstraction. Aim is to make the application portable,
 *  and separating the vendor dependence. The library layer wraps around the
 *  vendor specific driver layer.
 *
 *  @author Mark Bilginer (GitHub: MarkBilginer)
 *  @bug No known bugs.
 */

#ifndef INC_STM32_TIMER_ADC_LIB_C_
#define INC_STM32_TIMER_ADC_LIB_C_

#ifdef __cplusplus
extern "C" {
#endif

/* -- Includes -- */

/* -- Vendor specific Hardware Abstraction layer -- */
#include "stm32l4xx_hal.h"

/* -- Exported functions prototypes -- */

/** @brief  Initializes the Hardware Abstraction Layer of STM32.
 *
 *  Wrapper function. Calls the vendor specific function HAL_Init().
 *
 *  @param None
 *  @return None
*/
void init_hal();


/** @brief Starts the timers' interrupt mode in non-blocking mode.
 *
 *  Wrapper function. Takes global variable of TIM1 as input.
 *  Type of global variable: TIM_HandleTypeDef.
 *
 *  @param None
 *  @return None
 */
void tim_base_start_interrupt();

/** @brief Calculates and returns length of parameter char *p.
 *  @param p the string whose length should be calculated
 *  @return the length of the string.
 */
unsigned int strlength(char *p);

/** @brief calculate x raised to the power y.
 *  @param x the base.
 *  @param y the power.
 *  @return result of calculation.
 */
int power(int x, unsigned int y);

/** @brief Using UART prints an input string to the console.
 *  @param text string to be printed.
 *  @return None.
 */
void uart_print(char text[]);

/** @brief Reverses a string.
 *  @param str string to be reversed.
 *  @param len length of the string to be reversed.
 *  @return None.
 */
void reverse(char* str, int len);

/** @brief Converts a given integer to a string.
 *
 * 	Converts a given integer x to string str[].
 * 	d is the number of digits required in the output.
 *  If d is more than the number of digits in x,
 *  then 0s are added at the beginning.
 *
 *  @param x integer to be converted.
 *  @param str buffer where the conversion result is saved.
 *  @param d number of digits required in the output.
 *  @return None.
 */
int intToStr(int x, char str[], int d);

// Converts a floating-point/double number to a string.

/** @brief Converts a floating-pointnumber to a string.
 *  @param n number to be converted.
 *  @param res string buffer where the result is saved.
 *  @param afterpoint how many digits after the decimal seperator.
 *  @return None.
 */
void float_to_str(float n, char* res, int afterpoint);

/** @brief System Clock Configuration.
 *  @return None
 */
void config_system_clock(void);

/** @brief ADC1 Initialization Function.
 *  @param None
 *  @retval None
 */
void init_adc1(void);

/** @brief TIM1 initialization.
 *
 *  Wrapper function. Takes global variable of TIM1 as input.
 *  Type of global variable: TIM_HandleTypeDef.
 *
 *  @param prescaler Prescaler of TIM1.
 *  @param cnt_mode Counting mode of TIM1.
 *  @param period Period of TIM1.
 *  @param clk_div Clock division of TIM1.
 *  @param rep_cnt Repetition counter of TIM1.
 *  @param auto_re_pre Auto reload preload mode of TIM1.
 *  @return None
 */
void init_timer1(uint32_t prescaler, uint32_t cnt_mode, uint32_t period,
		uint32_t clk_div, uint32_t rep_cnt, uint32_t reload_preload_enable);

/** @brief UART initialization.
 *
 *  Wrapper function. Takes global variable of UART as input. Type of global
 *  variable: UART_HandleTypeDef.
 *
 *  @param baudrate rate of information transmission.
 *  @return None
 */
void init_uart(uint32_t baudrate);

/** @brief GPIO Initialization Function.
 *  @param None
 *  @return None
 */
void init_gpio(void);

/** @brief This function is executed in case of error occurrence.
 *  @param None
 *  @return None
*/
void Error_Handler(void);

/* -- Private defines -- */
#define VCP_TX_Pin GPIO_PIN_2
#define VCP_TX_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_15
#define VCP_RX_GPIO_Port GPIOA
#define LD3_Pin GPIO_PIN_3
#define LD3_GPIO_Port GPIOB

#ifdef __cplusplus
}
#endif

#endif /* INC_STM32_TIMER_ADC_LIB_C_ */
