/*
 * APP.c
 *
 *  Created on: Feb 4, 2022
 *      Author: abdalah
 */


#include "primitive_data_types.h"
#include "LED_INTERFACE.h"



int main ()
{

	uint8_t au8_arrRecivingData[6]={0};
           /*LED initialization*/
	    LED_INIT(PORTA,PIN0);
	    LED_INIT(PORTA,PIN1);
	    LED_INIT(PORTA,PIN2);
	           /*UART initialization */
	    USART_VoidInit(PORTD,PIN1,PIN0);
	           /*UART receiving data*/
      uint8_t au8_State =5 ;
	    while(1)
      {

    		UART_U8ReciveBufferSyn(au8_arrRecivingData,au8_State);
    	      	       /* check if start word */
    	      	if(au8_arrRecivingData[0]=='s' &&
    	      	   au8_arrRecivingData[1]=='t' &&
    			   au8_arrRecivingData[2]=='a' &&
    			   au8_arrRecivingData[3]=='r' &&
    			   au8_arrRecivingData[4]=='t' )
    	      	{
    	      		 /*green LED ON*/
    	      		LED_HighOrLow(PORTA,PIN0,HIGH);
    	      		LED_HighOrLow(PORTA,PIN1,LOW);
    	      		LED_HighOrLow(PORTA,PIN2,LOW);
    	      		    /*SEND RESPONSE */
    	      	   UART_U8SendBufferSyn("GREEN LED IS ON",15);
    	      	 au8_State -=1;

    	      	}
    	      else if(au8_arrRecivingData[0]=='w'   &&
    	      	      au8_arrRecivingData[1]=='a'   &&
    			      au8_arrRecivingData[2]=='i'   &&
    			      au8_arrRecivingData[3]=='t' )
    	      {
    	    	  /*Turn OFF ALL LEDs */
    	    		LED_HighOrLow(PORTA,PIN0,LOW);
    	    		LED_HighOrLow(PORTA,PIN2,LOW);
    	    		/*Turn ON yellow LED*/
    	    		LED_HighOrLow(PORTA,PIN1,HIGH);
    	    		/*SEND RESPONSE*/
    	       	  UART_U8SendBufferSyn("YELLOW LED IS ON",16);
    	      }
    	      else if(au8_arrRecivingData[0]=='s'   &&
    	      	      au8_arrRecivingData[1]=='t'   &&
    			      au8_arrRecivingData[2]=='o'   &&
    			      au8_arrRecivingData[3]=='p' )
    	      {
    	    	          /*Turn OFF ALL LEDs */
    	    		LED_HighOrLow(PORTA,PIN0,LOW);
    	    		LED_HighOrLow(PORTA,PIN1,LOW);
    	    		/*Turn ON yellow LED*/
    	    		LED_HighOrLow(PORTA,PIN2,HIGH);
    	    		/*SEND RESPONSE*/
    	       	  UART_U8SendBufferSyn("RED LED IS ON",12);
    	       	  au8_State+=1;
    	      }



      }
	return 0;
}
