/*
MIT License

Copyright (c) 2018 ShellAddicted <github.com/ShellAddicted>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef _SERVO_CONTROL_H_
#define _SERVO_CONTROL_H_

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/ledc.h>

typedef struct ESP32Servo_s {
	int _freqHz;
	ledc_channel_t _ledcChannel;
	unsigned int _min;
	unsigned int _max;
} ESP32Servo;

ESP32Servo *ESP32Servo_create(gpio_num_t pin, unsigned int minuS, unsigned int maxuS, ledc_channel_t ledcChannel, ledc_timer_t ledcTimer);
void ESP32Servo_writeMicroSeconds(ESP32Servo *servo, unsigned int uS);
void ESP32Servo_write(ESP32Servo *servo, unsigned int value);
void ESP32Servo_free(ESP32Servo *servo);
#endif
