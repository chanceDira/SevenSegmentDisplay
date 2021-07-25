/*
 * File:   ass2.c
 * Author: PANEL TECH
 *
 * Created on July 24, 2021, 11:53 AM
 */


#include <xc.h>
#define _XTAL_FREQ 8000000

void main(void) {
    TRISB = 0x00; // Port B is configured as Output
  unsigned int segment[11]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6f},counter;
  
    while (1) 
    {
        for (counter = 0; counter <=9; counter++) // The counter will will help to loop from 0 to 9
        {
            PORTB = segment[counter]; 
            __delay_ms(1000);
        }
    }
    return;
}
