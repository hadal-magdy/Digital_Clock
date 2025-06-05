/* 
 * File:   ecu_init.c
 * Author: Hadal Magdy Ahmed
 *
 * Created on June 2, 2025, 6:51 PM
 */
#include "ecu_init.h"

Std_ReturnType ret = E_NOT_OK;

seven_segment_t ssegment = {
    .pins[PIN0].port = GPIO_PORTC_INDEX,
    .pins[PIN0].pin = GPIO_PIN0,
    .pins[PIN0].logic = GPIO_LOW,
    .pins[PIN0].direction = GPIO_OUTPUT,
    .pins[PIN1].port = GPIO_PORTC_INDEX,
    .pins[PIN1].pin = GPIO_PIN1,
    .pins[PIN1].logic = GPIO_LOW,
    .pins[PIN1].direction = GPIO_OUTPUT,
    .pins[PIN2].port = GPIO_PORTC_INDEX,
    .pins[PIN2].pin = GPIO_PIN2,
    .pins[PIN2].logic = GPIO_LOW,
    .pins[PIN2].direction = GPIO_OUTPUT,
    .pins[PIN3].port = GPIO_PORTC_INDEX,
    .pins[PIN3].pin = GPIO_PIN3,
    .pins[PIN3].logic = GPIO_LOW,
    .pins[PIN3].direction = GPIO_OUTPUT,
    .seven_segment_type = COMMON_ANODE
};

void init() {
    ret = seven_segment_init(&ssegment);
    ret = gbio_port_direction_init(GPIO_PORTD_INDEX,0);
}