/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1619
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include <string.h>
#include <stdbool.h>

uint8_t code = 0x00;
char Key = 'n';
unsigned int Val, Val_mod, Code, ID;
unsigned int Val_mods[13];
unsigned int counter = 13;

// void incMessage(char msg[], int delay){

// }

void main(void)
{
  SYSTEM_Initialize();
  I2C_Master_Init();
  LCD_Init(0x4E); // Initialize LCD module with I2C address = 0x4E

  LCD_Clear();
  LCD_Set_Cursor(1, 1);
  LCD_Write_String("Solution Factory");

  char msg[] = "WELCOME";
  char dispmsg[] = "";
  for (int i = 0; i < strlen(msg); i++)
  {
    LCD_Set_Cursor(2, 1);
    strncat(&dispmsg, &msg[i], 1);
    LCD_Write_String(dispmsg);
    __delay_ms(300);
  }

  __delay_ms(2000);

  LCD_Clear();
  LCD_Set_Cursor(1, 1);
  LCD_Write_String("Press '*' to");
  LCD_Set_Cursor(2, 1);
  LCD_Write_String("continue ..");

  Key = 'n';
  while (Key != '*') // Wait until '' is pressed
  {
    keypad_scanner(&Key, &Val);
  }

  // Completer le code
  while (!EUSART_is_tx_ready())
    ;
  EUSART_Write(Val);

  LCD_Clear();
  LCD_Set_Cursor(1, 1);
  LCD_Write_String("Initialisation FPGA");
  LCD_Set_Cursor(2, 1);
  LCD_Write_String("Please Wait...");

  __delay_ms(2000);

  while (1)
  {
    LCD_Clear();
    LCD_Set_Cursor(1, 1);
    LCD_Write_String("Pwd | # > Submit");
    LCD_Set_Cursor(2, 1);

    counter = 0;
    bool forcesubmit = false;
    char dispCode[16] = "";
    while ((counter < 13))
    {
      switch_press_scan(&Key, &Val);
      if (Key == '#')
      {
        forcesubmit = true;
        counter = 13;
      }
      else
      {
        if (Key == 'D' && counter > 0)
        {
          counter = counter - 1;
          int size = strlen(dispCode); //Total size of string
          dispCode[size - 1] = '\0';
          LCD_Clear();
          LCD_Set_Cursor(1, 1);
          LCD_Write_String("Pwd | # > Submit");
          LCD_Set_Cursor(2, 1);
          LCD_Write_String(dispCode);
        }
        else
        {

          // LCD_Write_Char(Key);
          strncat(&dispCode, &Key, 1);

          LCD_Set_Cursor(2, 1);
          LCD_Write_String(dispCode);

          ID = counter;
          ID &= 0x0F;
          ID <<= 4;
          Code = Val;
          Code &= 0x0F;
          Val_mod = ID | Code;
          Val_mods[counter] = Val_mod;

          counter = counter + 1;
          __delay_ms(500);
        }
      }
    }

    if (!forcesubmit)
    {
      LCD_Clear();
      LCD_Set_Cursor(1, 1);
      LCD_Write_String("Press '#' to");
      LCD_Set_Cursor(2, 1);
      LCD_Write_String("continue ...");

      Key = 'n';
      while (Key != '#')
      {
        keypad_scanner(&Key, &Val);
      }
    }

    LCD_Clear();
    LCD_Set_Cursor(1, 1);
    LCD_Write_String("Sending Code");
    LCD_Set_Cursor(2, 1);
    LCD_Write_String("...");

    for (int i = 0; i < 13; i++)
    {
      while (!EUSART_is_tx_ready())
        ;
      EUSART_Write(Val_mods[i]);
      __delay_ms(500);
    }

    while (!EUSART_is_tx_ready())
      ; //init the FPGA
    EUSART_Write(Val);

    LCD_Clear();
    LCD_Set_Cursor(1, 1);
    LCD_Write_String("FPGA Processing");
    LCD_Set_Cursor(2, 1);
    LCD_Write_String("Please wait ...");

    code = EUSART_Read();
    RC1STA = 0x00;

    __delay_ms(2000);

    if (code == 0xF1)
    {
      LCD_Clear();
      LCD_Set_Cursor(1, 1);
      LCD_Write_String("Code is correct");
      LCD_Set_Cursor(2, 1);
      LCD_Write_String("Thank you..");
    }
    else
    {
      LCD_Clear();
      LCD_Set_Cursor(1, 1);
      LCD_Write_String("Code is wrong");
    }
    __delay_ms(2000);

    LCD_Clear();
    LCD_Set_Cursor(1, 1);
    LCD_Write_String("Press '*' to ");
    LCD_Set_Cursor(2, 1);
    LCD_Write_String("try again..");

    Key = 'n';
    while (Key != '*')
    {
      keypad_scanner(&Key, &Val);
    }
    RC1STA = 0x90;

    while (!EUSART_is_tx_ready())
      ; //init the fpga
    EUSART_Write(Val);

    LCD_Clear();
    LCD_Set_Cursor(1, 1);
    LCD_Write_String("Initialize the FPGA");
    LCD_Set_Cursor(2, 1);
    LCD_Write_String("Please Wait ..");

    __delay_ms(2000);
  }
}
/**
 End of File
*/