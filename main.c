#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "hardware/gpio.h"

uint setup_pwm(uint gpio, uint freq)
{
    gpio_set_function(gpio, GPIO_FUNC_PWM);
    uint slice = pwm_gpio_to_slice_num(gpio);
    uint channel = pwm_gpio_to_channel(gpio);

    uint wrap = 125000000 / freq / 2; // Assuming a 125 MHz clock

    pwm_set_wrap(slice, wrap);
    pwm_set_chan_level(slice, channel, wrap / 2); // 50% duty cycle
    pwm_set_enabled(slice, true);

    return slice;
}

int main()
{
    const uint LED_PIN = 25;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    
    const uint BUZZER_PIN = 2;
    gpio_init(BUZZER_PIN);
    const uint slice = setup_pwm(BUZZER_PIN, 1000);

    while (true)
    {

        // Turn on the buzzer
        pwm_set_enabled(slice, true);
        
        // Turn on the LED
        gpio_put(LED_PIN, true);

        sleep_ms(500);
        
        // Turn off the buzzer
        pwm_set_enabled(slice, false);
        gpio_set_function(BUZZER_PIN, GPIO_FUNC_SIO);
        gpio_set_dir(BUZZER_PIN, GPIO_OUT);
        gpio_put(BUZZER_PIN, false);

        // Turn off the LED
        gpio_put(LED_PIN, false);

        sleep_ms(500);

        // Reinitialize the buzzer for PWM
        gpio_set_function(BUZZER_PIN, GPIO_FUNC_PWM);
    }
}