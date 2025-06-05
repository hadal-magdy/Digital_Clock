/* 
 * File:   app.h
 * Author: Hadal Magdy Ahmed
 *
 * Created on May 24, 2025, 10:01 AM
 */

#ifndef APP_H
#define	APP_H

/*Section : Includes*/
#include "ECU/ecu_init.h"
#include "ECU/LED/ecu_led.h"
#include "ECU/7SEG/seven_segment.h"
/*Section : Macro Declarations*/
extern seven_segment_t ssegment;
extern Std_ReturnType ret;
/*Section : Macro Functions Declarations*/

/*Section : Data Type Declarations*/

/*Section : Function Declarations*/
void counter(void);

#endif	/* APP_H */

