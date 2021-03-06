/*
 * FASTUSBasp v2 - Fastest programmer for AVR
 * Copyright (C) 2018  Amitesh Singh <singh.amitesh@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CONFIG_H
#define _CONFIG_H

#define INBUILT_LED GPIO13
#define INBUILT_LED_PORT GPIOC
#define INBUILT_LED_RCC RCC_GPIOC

#define ISP_BUS SPI2
#define ISP_BUS_RCC RCC_SPI2

#define ISP_PORT_RCC RCC_GPIOB
#define ISP_PORT GPIOB
#define ISP_MOSI GPIO15
#define ISP_MISO GPIO14
#define ISP_SCK  GPIO13

#define ISP_RST_RCC RCC_GPIOA
#define ISP_RST_PORT GPIOA
#define ISP_RST GPIO8

//define this to 1, if blue pill has wrong pull up at USB D+ line
#define USBDPLUS_WRONG_PULLUP 0

#endif
