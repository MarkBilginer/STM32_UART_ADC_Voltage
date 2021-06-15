/*
 * STM32_timer_adc_lib.c
 *
 *  Created on: May 26, 2021
 *      Author: mark
 */

#ifndef INC_STM32_TIMER_ADC_LIB_C_
#define INC_STM32_TIMER_ADC_LIB_C_

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Exported functions prototypes ---------------------------------------------*/
void config_system_clock(void);
void init_gpio(void);
void init_uart(uint32_t baudrate);
void init_adc1(void);
void init_timer1(uint32_t prescaler, uint32_t cnt_mode, uint32_t period,
		uint32_t clk_div, uint32_t rep_cnt, uint32_t reload_preload_enable);
void Error_Handler(void);
void reverse(char* str, int len);
int intToStr(int x, char str[], int d);
void ftoa(float n, char* res, int afterpoint);
void uart_print(char text[]);

/* Private defines -----------------------------------------------------------*/
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
