#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "ssd1306.h"

const uint8_t num_chars_per_disp[]={7,7,7,5};

#define SLEEPTIME 25

void setup_gpios(void);
void animation(void);

int main() {
    stdio_init_all();
    setup_gpios();
    animation();

    return 0;
}


void setup_gpios(void) {
    i2c_init(i2c1, 400000);
    gpio_set_function(2, GPIO_FUNC_I2C);
    gpio_set_function(3, GPIO_FUNC_I2C);
    gpio_pull_up(2);
    gpio_pull_up(3);
}


void animation(void) {

    ssd1306_t disp;
    disp.external_vcc=false;
    ssd1306_init(&disp, 128, 64, 0x3C, i2c1);
    ssd1306_clear(&disp);
while(1){
            ssd1306_clear(&disp);
            ssd1306_draw_string(&disp, 45, 0, 10, "F");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            ssd1306_clear(&disp);

            ssd1306_draw_string(&disp, 45, 0, 10, "E");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            ssd1306_clear(&disp);

            ssd1306_draw_string(&disp, 45, 0, 10, "R");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            ssd1306_clear(&disp);

            ssd1306_draw_string(&disp, 45, 0, 10, "N");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            ssd1306_clear(&disp);

            
            ssd1306_draw_string(&disp, 45, 0, 10, "A");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            ssd1306_clear(&disp);


            ssd1306_draw_string(&disp, 45, 0, 10, "N");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            ssd1306_clear(&disp);
            
            ssd1306_draw_string(&disp, 45, 0, 10, "D");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            ssd1306_clear(&disp);

            
            ssd1306_draw_string(&disp, 45, 0, 10, "O");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            ssd1306_clear(&disp);

            ssd1306_draw_string(&disp, 0, 30, 2, "HERNANDEZ P.");
            ssd1306_show(&disp);  
            sleep_ms(2000);
            

        }
        
    }
