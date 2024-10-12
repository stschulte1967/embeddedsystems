#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#include "esp_log.h"
#include "esp_system.h"

#define BLINK_GPIO 15

static const char *TAG = "blink-idf-minimal";
static uint8_t s_led_state = 0;

void loop(void);
void setup(void);

void app_main(void)
{
    setup();

    while(true) {
        loop();
    }
    ESP_LOGI(TAG, "Hi I am here");
    esp_restart();   
}

void setup() {
    ESP_LOGI(TAG, "setup the device");
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);
}

void loop() {
    gpio_set_level(BLINK_GPIO, s_led_state);
    s_led_state = !s_led_state;
    vTaskDelay(10000 / portTICK_PERIOD_MS);
}

