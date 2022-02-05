/*
 * LED_INTERFACE.h
 *
 *  Created on: Feb 4, 2022
 *      Author: abdalah
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

                   /*you can use it to initialize the led pin*/


                     uint8_t LED_INIT(uint8_t PORT ,uint8_t PIN);


                    /*you can use it to change the current statues of LED*/

              uint8_t LED_HighOrLow(uint8_t PORT ,uint8_t pin ,uint8_t statues);


     /****************************************************************************************/


     ///////////////////////////////////////////////////////////////////////////////////////////


      /* LED configuration  */

              // DIO macros
              #define PORTA 0
              #define PORTB 1
              #define PORTC 2
              #define PORTD 3

              /* pin direction*/
              #define OUTPUT 1
              #define INPUT  0

              /* pin values*/
              #define LOW  0
              #define HIGH 1

              /* Pin numbers*/
              #define PIN0 0
              #define PIN1 1
              #define PIN2 2
              #define PIN3 3
              #define PIN4 4
              #define PIN5 5
              #define PIN6 6
              #define PIN7 7

#endif /* LED_INTERFACE_H_ */
