/*

    __QIRCV_Hal.h

    Copyright (c) 2011-2017 MikroElektronika.  All right reserved.

------------------------------------------------------------------------------*/

/**
@file           __QIRCV_Hal.h
@addtogroup  QIRCV
@{

| Global HAL Prefix     | **HAL**       |
|:---------------------:|:-------------:|
| Version               | **2.1.0**     |
| Date                  | **Jun 2017**  |
| Developer             | *MilosV*      |

#### MikroC HAL covers : ####
 - ARM (CEC, MSP, KINETIS, STM32, TIVA)
 - PIC
 - PIC32
 - FT90x
 - dsPIC
 - AVR
*/

#ifndef _QIRCV_HAL_
#define _QIRCV_HAL_

#define QIRCV_SPI_CLICK     (0)
#define QIRCV_I2C_CLICK     (1)
#define QIRCV_UART_CLICK    (0)

/** @cond PORTING_GUIDE */
/*--------------------------------------------------------- GPIO HAL POINTERS */
typedef void (*T_QIRCV_GPIO_Set)(char set);
typedef char (*T_QIRCV_GPIO_Get)();

#if QIRCV_SPI_CLICK == 1
/*---------------------------------------------------------- SPI HAL POINTERS */
#if defined( __MIKROC_PRO_FOR_ARM__ ) || defined( __MIKROC_PRO_FOR_DSPIC__ )
typedef void                              ( *T_QIRCV_SPI_Write )(unsigned int data_out);
typedef unsigned int         ( *T_QIRCV_SPI_Read )(unsigned int buffer);
#elif defined( __MIKROC_PRO_FOR_AVR__ ) || defined( __MIKROC_PRO_FOR_PIC__ )
typedef void                             ( *T_QIRCV_SPI_Write )(unsigned char data_out);
typedef unsigned char ( *T_QIRCV_SPI_Read )(unsigned char dummy);
#elif defined( __MIKROC_PRO_FOR_PIC32__ )
typedef void                             ( *T_QIRCV_SPI_Write )(unsigned long data_out);
typedef unsigned long        ( *T_QIRCV_SPI_Read )(unsigned long dummy);
#elif defined( __MIKROC_PRO_FOR_FT90x__ )
typedef void                             ( *T_QIRCV_SPI_Write )(unsigned char data_out);
typedef unsigned char ( *T_QIRCV_SPI_Read )(unsigned char dummy);
#elif defined( PLD_EXT_TOOLCHAIN )
/**
    @todo: Toolchain specific typedefs for functions used for SPI BUS

 - T_QIRCV_SPI_Write - Writes one byte
 - T_QIRCV_SPI_Read - Reads one byte

@note
Functions should not have influence on CS pin.
*/
#endif
#endif
#if QIRCV_I2C_CLICK == 1
/*---------------------------------------------------------- I2C HAL POINTERS */
#if defined( __MIKROC_PRO_FOR_ARM__ )
    #if defined( __STM32__ ) || defined( __KINETIS__ ) || defined( __MCHP__ )
typedef unsigned int        ( *T_QIRCV_I2C_Start )();
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Stop )();
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Restart )();                                                
typedef unsigned int         ( *T_QIRCV_I2C_Write )(unsigned char slave, unsigned char *buffer, unsigned long count, unsigned long end_mode);
typedef void                             ( *T_QIRCV_I2C_Read )(unsigned char slave, unsigned char *buffer, unsigned long count, unsigned long end_mode);
    #elif defined( __MSP__ )
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Start )();
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Stop )();
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Restart )();
typedef unsigned int         ( *T_QIRCV_I2C_Write )(unsigned char slave, unsigned char *buffer, unsigned long count, unsigned long end_mode);
typedef void                             ( *T_QIRCV_I2C_Read )(unsigned char slave, unsigned char *buffer, unsigned long count, unsigned long end_mode);
    #elif defined( __TI__ )
typedef void                             ( *T_QIRCV_I2C_Start )(char slave_address,        char dir);
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Stop )();
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Restart )();
typedef unsigned char ( *T_QIRCV_I2C_Write )(unsigned char data_in, unsigned char mode);
typedef unsigned char        ( *T_QIRCV_I2C_Read )(unsigned char *data_out, unsigned char mode);
    #endif
#elif  defined( __MIKROC_PRO_FOR_AVR__ )
typedef unsigned char        ( *T_QIRCV_I2C_Start )();
typedef void                             ( *T_QIRCV_I2C_Stop )();
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Restart )();
typedef void                             ( *T_QIRCV_I2C_Write )( unsigned char data_out);
typedef unsigned char ( *T_QIRCV_I2C_Read )( unsigned char ack);
#elif  defined( __MIKROC_PRO_FOR_PIC__ )
typedef unsigned char        ( *T_QIRCV_I2C_Start )();
typedef void                             ( *T_QIRCV_I2C_Stop )();
typedef void                             ( *T_QIRCV_I2C_Restart )();
typedef unsigned char        ( *T_QIRCV_I2C_Write )(unsigned char data_out);
typedef unsigned char        ( *T_QIRCV_I2C_Read )(unsigned char ack);
#elif defined( __MIKROC_PRO_FOR_PIC32__ )
typedef unsigned int         ( *T_QIRCV_I2C_Start )();
typedef void                             ( *T_QIRCV_I2C_Stop )();
typedef unsigned int         ( *T_QIRCV_I2C_Restart )();
typedef unsigned int         ( *T_QIRCV_I2C_Write )(unsigned char data_out);
typedef unsigned char ( *T_QIRCV_I2C_Read )(unsigned int ack);
#elif defined( __MIKROC_PRO_FOR_DSPIC__ )
typedef unsigned int         ( *T_QIRCV_I2C_Start )();
typedef void                             ( *T_QIRCV_I2C_Stop )();
typedef void                             ( *T_QIRCV_I2C_Restart )();
typedef unsigned int         ( *T_QIRCV_I2C_Write )(unsigned char data_out);
typedef unsigned char ( *T_QIRCV_I2C_Read )(unsigned int ack);
#elif defined( __MIKROC_PRO_FOR_8051__ )
typedef unsigned char        ( *T_QIRCV_I2C_Start )();
typedef void                             ( *T_QIRCV_I2C_Stop )();
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Restart )();
typedef void                             ( *T_QIRCV_I2C_Write )(unsigned char data_out);
typedef unsigned char        ( *T_QIRCV_I2C_Read )(unsigned char ack);
#elif defined( __MIKROC_PRO_FOR_FT90x__ )
typedef void                             ( *T_QIRCV_I2C_Start )(unsigned char slave);
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Stop )();
/* DUMMY */ typedef void ( *T_QIRCV_I2C_Restart )();
typedef unsigned char         ( *T_QIRCV_I2C_Write )(unsigned char *buffer, unsigned int count);
typedef unsigned char         ( *T_QIRCV_I2C_Read )(unsigned char *buffer, unsigned int count);
#elif defined( PLD_EXT_TOOLCHAIN )
/**
    @todo: Toolchain specific typedefs for functions used for I2C BUS

 - T_QIRCV_I2C_Start       - I2C Start
 - T_QIRCV_I2C_Stop        - I2C Stop
 - T_QIRCV_I2C_Restart     - I2C Reastart
 - T_QIRCV_I2C_Write       - Write n bytes
 - T_QIRCV_I2C_Read        - Read n bytes

@note
Not all are required to implement complete write or read sequence
*/
#endif
#endif
#if QIRCV_UART_CLICK == 1
/*--------------------------------------------------------- UART HAL POINTERS */
#if defined( __MIKROC_PRO_FOR_ARM__ ) || defined( __MIKROC_PRO_FOR_DSPIC__ ) || defined( __MIKROC_PRO_FOR_PIC32__ )
typedef void                             ( *T_QIRCV_UART_Write )(unsigned int data_out);
typedef unsigned int         ( *T_QIRCV_UART_Read )();
typedef unsigned int         ( *T_QIRCV_UART_Ready )();
#elif defined( __MIKROC_PRO_FOR_AVR__ ) || defined( __MIKROC_PRO_FOR_PIC__ ) || defined( __MIKROC_PRO_FOR_FT90x__ )
typedef void                             ( *T_QIRCV_UART_Write )(unsigned char data_out);
typedef unsigned char ( *T_QIRCV_UART_Read )();
typedef unsigned char ( *T_QIRCV_UART_Ready )();
#elif defined( PLD_EXT_TOOLCHAIN )
/**
    @todo: Toolchain specific functions prototypes for UART BUS

 - T_QIRCV_UART_Write     - writes one byte
 - T_QIRCV_UART_Read      - reads one byte
 - T_QIRCV_UART_Ready     - checks rx buffer
*/
#endif
#endif
/** @endcond */
/** @} */
#endif
/*------------------------------------------------------------------------------

  __QIRCV_Hal.h

  Copyright (c) 2011-2017 MikroElektronika.  All right reserved.

    This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.

------------------------------------------------------------------------------*/