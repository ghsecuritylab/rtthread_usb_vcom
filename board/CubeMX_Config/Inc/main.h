/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <rtthread.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AD9959_RST_Pin GPIO_PIN_6
#define AD9959_RST_GPIO_Port GPIOF
#define AD9959_UPDATE_Pin GPIO_PIN_7
#define AD9959_UPDATE_GPIO_Port GPIOF
#define AD9959_CS_Pin GPIO_PIN_8
#define AD9959_CS_GPIO_Port GPIOF
#define AD9959_SCK_Pin GPIO_PIN_9
#define AD9959_SCK_GPIO_Port GPIOF
#define AD9959_SDIO_Pin GPIO_PIN_10
#define AD9959_SDIO_GPIO_Port GPIOF
#define AD1256_RESET_Pin GPIO_PIN_8
#define AD1256_RESET_GPIO_Port GPIOD
#define AD1256_CS_Pin GPIO_PIN_9
#define AD1256_CS_GPIO_Port GPIOD
#define AD1256_DRDY_Pin GPIO_PIN_10
#define AD1256_DRDY_GPIO_Port GPIOD
#define AD1256_DOUT_Pin GPIO_PIN_11
#define AD1256_DOUT_GPIO_Port GPIOD
#define AD1256_DIN_Pin GPIO_PIN_12
#define AD1256_DIN_GPIO_Port GPIOD
#define AD1256_SCLK_Pin GPIO_PIN_13
#define AD1256_SCLK_GPIO_Port GPIOD
#define AD9954_RESET_Pin GPIO_PIN_4
#define AD9954_RESET_GPIO_Port GPIOG
#define AD9954_SCLK_Pin GPIO_PIN_5
#define AD9954_SCLK_GPIO_Port GPIOG
#define AD9954_SDIO_Pin GPIO_PIN_6
#define AD9954_SDIO_GPIO_Port GPIOG
#define AD9954_P0_Pin GPIO_PIN_7
#define AD9954_P0_GPIO_Port GPIOG
#define AD9954_UPDATE_Pin GPIO_PIN_8
#define AD9954_UPDATE_GPIO_Port GPIOG
/* USER CODE BEGIN Private defines */
#define AD9959_GPIO_Port GPIOF
#define AD1256_GPIO_Port GPIOD
#define AD9954_GPIO_Port GPIOG
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/