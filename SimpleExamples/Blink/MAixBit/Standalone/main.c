/* Copyright 2018 Canaan Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * Modified by Stephan Schulte to make it compatible with MAix Bit on 23.03.2019
 *  
 */
 
#include <stdio.h>
#include <unistd.h>
#include "fpioa.h"
#include "gpio.h"

#define LED_R 14

int main(void)
{
    fpioa_set_function(LED_R, FUNC_GPIO3);

    gpio_init();
    gpio_set_drive_mode(3, GPIO_DM_OUTPUT);
    gpio_pin_value_t value = GPIO_PV_HIGH;
    gpio_set_pin(3, value);
    while (1)
    {
        sleep(1);
        gpio_set_pin(3, value = !value);
    }
    return 0;
}
