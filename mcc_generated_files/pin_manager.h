/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1619
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_L1 aliases
#define IO_L1_TRIS                 TRISAbits.TRISA1
#define IO_L1_LAT                  LATAbits.LATA1
#define IO_L1_PORT                 PORTAbits.RA1
#define IO_L1_WPU                  WPUAbits.WPUA1
#define IO_L1_OD                   ODCONAbits.ODA1
#define IO_L1_ANS                  ANSELAbits.ANSA1
#define IO_L1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_L1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_L1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_L1_GetValue()           PORTAbits.RA1
#define IO_L1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_L1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_L1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define IO_L1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define IO_L1_SetPushPull()        do { ODCONAbits.ODA1 = 0; } while(0)
#define IO_L1_SetOpenDrain()       do { ODCONAbits.ODA1 = 1; } while(0)
#define IO_L1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_L1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_L2 aliases
#define IO_L2_TRIS                 TRISAbits.TRISA2
#define IO_L2_LAT                  LATAbits.LATA2
#define IO_L2_PORT                 PORTAbits.RA2
#define IO_L2_WPU                  WPUAbits.WPUA2
#define IO_L2_OD                   ODCONAbits.ODA2
#define IO_L2_ANS                  ANSELAbits.ANSA2
#define IO_L2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_L2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_L2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_L2_GetValue()           PORTAbits.RA2
#define IO_L2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_L2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_L2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define IO_L2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define IO_L2_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define IO_L2_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define IO_L2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_L2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_C2 aliases
#define IO_C2_TRIS                 TRISBbits.TRISB4
#define IO_C2_LAT                  LATBbits.LATB4
#define IO_C2_PORT                 PORTBbits.RB4
#define IO_C2_WPU                  WPUBbits.WPUB4
#define IO_C2_OD                   ODCONBbits.ODB4
#define IO_C2_ANS                  ANSELBbits.ANSB4
#define IO_C2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_C2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_C2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_C2_GetValue()           PORTBbits.RB4
#define IO_C2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_C2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_C2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_C2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_C2_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define IO_C2_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define IO_C2_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_C2_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set IO_C3 aliases
#define IO_C3_TRIS                 TRISBbits.TRISB5
#define IO_C3_LAT                  LATBbits.LATB5
#define IO_C3_PORT                 PORTBbits.RB5
#define IO_C3_WPU                  WPUBbits.WPUB5
#define IO_C3_OD                   ODCONBbits.ODB5
#define IO_C3_ANS                  ANSELBbits.ANSB5
#define IO_C3_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_C3_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_C3_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_C3_GetValue()           PORTBbits.RB5
#define IO_C3_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_C3_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_C3_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_C3_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_C3_SetPushPull()        do { ODCONBbits.ODB5 = 0; } while(0)
#define IO_C3_SetOpenDrain()       do { ODCONBbits.ODB5 = 1; } while(0)
#define IO_C3_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_C3_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_C4 aliases
#define IO_C4_TRIS                 TRISBbits.TRISB6
#define IO_C4_LAT                  LATBbits.LATB6
#define IO_C4_PORT                 PORTBbits.RB6
#define IO_C4_WPU                  WPUBbits.WPUB6
#define IO_C4_OD                   ODCONBbits.ODB6
#define IO_C4_ANS                  ANSELBbits.ANSB6
#define IO_C4_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_C4_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_C4_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_C4_GetValue()           PORTBbits.RB6
#define IO_C4_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_C4_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_C4_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_C4_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_C4_SetPushPull()        do { ODCONBbits.ODB6 = 0; } while(0)
#define IO_C4_SetOpenDrain()       do { ODCONBbits.ODB6 = 1; } while(0)
#define IO_C4_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO_C4_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set IO_L3 aliases
#define IO_L3_TRIS                 TRISCbits.TRISC0
#define IO_L3_LAT                  LATCbits.LATC0
#define IO_L3_PORT                 PORTCbits.RC0
#define IO_L3_WPU                  WPUCbits.WPUC0
#define IO_L3_OD                   ODCONCbits.ODC0
#define IO_L3_ANS                  ANSELCbits.ANSC0
#define IO_L3_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_L3_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_L3_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_L3_GetValue()           PORTCbits.RC0
#define IO_L3_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_L3_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IO_L3_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IO_L3_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IO_L3_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define IO_L3_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define IO_L3_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IO_L3_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IO_L4 aliases
#define IO_L4_TRIS                 TRISCbits.TRISC1
#define IO_L4_LAT                  LATCbits.LATC1
#define IO_L4_PORT                 PORTCbits.RC1
#define IO_L4_WPU                  WPUCbits.WPUC1
#define IO_L4_OD                   ODCONCbits.ODC1
#define IO_L4_ANS                  ANSELCbits.ANSC1
#define IO_L4_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_L4_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_L4_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_L4_GetValue()           PORTCbits.RC1
#define IO_L4_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_L4_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_L4_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_L4_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_L4_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define IO_L4_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define IO_L4_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IO_L4_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set IO_C1 aliases
#define IO_C1_TRIS                 TRISCbits.TRISC2
#define IO_C1_LAT                  LATCbits.LATC2
#define IO_C1_PORT                 PORTCbits.RC2
#define IO_C1_WPU                  WPUCbits.WPUC2
#define IO_C1_OD                   ODCONCbits.ODC2
#define IO_C1_ANS                  ANSELCbits.ANSC2
#define IO_C1_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_C1_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_C1_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_C1_GetValue()           PORTCbits.RC2
#define IO_C1_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_C1_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_C1_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_C1_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_C1_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define IO_C1_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define IO_C1_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define IO_C1_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/