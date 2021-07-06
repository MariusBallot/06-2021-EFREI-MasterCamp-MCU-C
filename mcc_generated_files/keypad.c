/*
 * File:   keypad.c
 * Author: Moe
 *
 * Created on June 22, 2021, 6:12 PM
 */


#include <xc.h>
#include "mcc.h"

void switch_press_scan(char *key_o, unsigned int *val_o)         // Get key from user
{
    char key = 'n';                     // Assume no key pressed
    unsigned int val = 0xFF;
                      
            while(key == 'n')               // Wait until a key is pressed
            {
                keypad_scanner(&key, &val);
            }                               // Scan the keys again and again

    *key_o = key;
    *val_o = val;
}

void keypad_scanner(char *key_o, unsigned int *val_o)
{       
    *key_o = 'n'; *val_o = 0xFF;
    
    IO_L1_LAT = 0; IO_L2_LAT = 1; IO_L3_LAT = 1; IO_L4_LAT = 1;
    
    if (IO_C1_PORT == 0) {__delay_ms(50); if (IO_C1_PORT == 0) {while(IO_C1_PORT == 0); *key_o = '1'; *val_o = 0x01;}}//'1'
    if (IO_C2_PORT == 0) {__delay_ms(50); if (IO_C2_PORT == 0) {while(IO_C2_PORT == 0); *key_o = '2'; *val_o = 0x02;}}//'2'
    if (IO_C3_PORT == 0) {__delay_ms(50); if (IO_C3_PORT == 0) {while(IO_C3_PORT == 0); *key_o = '3'; *val_o = 0x03;}}//'3'
    if (IO_C4_PORT == 0) {__delay_ms(50); if (IO_C4_PORT == 0) {while(IO_C4_PORT == 0); *key_o = 'A'; *val_o = 0x0A;}}//'A'
    
    IO_L1_LAT = 1; IO_L2_LAT = 0; IO_L3_LAT = 1; IO_L4_LAT = 1;
    
    if (IO_C1_PORT == 0) {__delay_ms(50); if (IO_C1_PORT == 0) {while(IO_C1_PORT == 0); *key_o = '4'; *val_o = 0x04;}}//'4'
    if (IO_C2_PORT == 0) {__delay_ms(50); if (IO_C2_PORT == 0) {while(IO_C2_PORT == 0); *key_o = '5'; *val_o = 0x05;}}//'5'
    if (IO_C3_PORT == 0) {__delay_ms(50); if (IO_C3_PORT == 0) {while(IO_C3_PORT == 0); *key_o = '6'; *val_o = 0x06;}}//'6'
    if (IO_C4_PORT == 0) {__delay_ms(50); if (IO_C4_PORT == 0) {while(IO_C4_PORT == 0); *key_o = 'B'; *val_o = 0x0B;}}//'B'

    IO_L1_LAT = 1; IO_L2_LAT = 1; IO_L3_LAT = 0; IO_L4_LAT = 1; 
    
    if (IO_C1_PORT == 0) {__delay_ms(50); if (IO_C1_PORT == 0) {while(IO_C1_PORT == 0); *key_o = '7'; *val_o = 0x07;}}//'7'
    if (IO_C2_PORT == 0) {__delay_ms(50); if (IO_C2_PORT == 0) {while(IO_C2_PORT == 0); *key_o = '8'; *val_o = 0x08;}}//'8'
    if (IO_C3_PORT == 0) {__delay_ms(50); if (IO_C3_PORT == 0) {while(IO_C3_PORT == 0); *key_o = '9'; *val_o = 0x09;}}//'9'
    if (IO_C4_PORT == 0) {__delay_ms(50); if (IO_C4_PORT == 0) {while(IO_C4_PORT == 0); *key_o = 'C'; *val_o = 0x0C;}}//'C'

    IO_L1_LAT = 1; IO_L2_LAT = 1; IO_L3_LAT = 1; IO_L4_LAT = 0;
    
    if (IO_C1_PORT == 0) {__delay_ms(50); if (IO_C1_PORT == 0) {while(IO_C1_PORT == 0); *key_o = '*'; *val_o = 0x0E;}}//'*'
    if (IO_C2_PORT == 0) {__delay_ms(50); if (IO_C2_PORT == 0) {while(IO_C2_PORT == 0); *key_o = '0'; *val_o = 0x00;}}//'0'
    if (IO_C3_PORT == 0) {__delay_ms(50); if (IO_C3_PORT == 0) {while(IO_C3_PORT == 0); *key_o = '#'; *val_o = 0x0F;}}//'#'
    if (IO_C4_PORT == 0) {__delay_ms(50); if (IO_C4_PORT == 0) {while(IO_C4_PORT == 0); *key_o = 'D'; *val_o = 0x0D;}}//'D'
    
}