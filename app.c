/* 
 * File:   app.c
 * Author: Hadal Magdy Ahmed
 * Created on May 24, 2025, 10:00 AM
 */

#include "app.h"
#include "MCAL/GPIO/hal_gbio.h"


uint8 hours = 11;
uint8 minutes = 8;
uint8 seconds = 55;

int main() {
    init();

    while (1) {
        for (uint8 l_time = ZERO_INIT; l_time <= 50; ++l_time) {
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 0);


            ret = seven_segment_write_number(&ssegment, ((uint8) (seconds / 10)));
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 64);
            __delay_ms(3.333);
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 0);

            ret = seven_segment_write_number(&ssegment, ((uint8) (seconds % 10)));
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 128);
            __delay_ms(3.333);
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 0);

            ret = seven_segment_write_number(&ssegment, ((uint8) (minutes / 10)));
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 8);
            __delay_ms(3.333);
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 0);

            ret = seven_segment_write_number(&ssegment, ((uint8) (minutes % 10)));
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 16);
            __delay_ms(3.333);
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 0);

            ret = seven_segment_write_number(&ssegment, ((uint8) (hours / 10)));
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 1);
            __delay_ms(3.333);
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 0);

            ret = seven_segment_write_number(&ssegment, ((uint8) (hours % 10)));
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 2);
            __delay_ms(3.333);
            ret = gbio_port_write_logic(GPIO_PORTD_INDEX, 0);

        }
        ++seconds;
        if (seconds == 60) {
            ++minutes;
            seconds = 0;
        }
        if (minutes == 60) {
            ++hours;
            minutes = 0;
        }
        if (hours == 12) {
            hours = 0;

        }
    }
    return (EXIT_SUCCESS);
}

