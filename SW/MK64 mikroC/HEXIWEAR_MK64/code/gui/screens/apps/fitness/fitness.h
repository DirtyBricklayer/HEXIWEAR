// File: fitness.h

// Declarations of main functionalities in the fitness gui module.

#ifndef _fitness_h_
#define _fitness_h_

////////////////////////////////////////////////////////////////////////////////
// Header file inclusions.                                                    //
////////////////////////////////////////////////////////////////////////////////

#include <stdbool.h>
#include "gui_driver.h"
//#include "gui_pedometer.h"

////////////////////////////////////////////////////////////////////////////////
// Macro definitions.                                                         //
////////////////////////////////////////////////////////////////////////////////

#define FITNESS_STACK_SIZE  ( 0x400 )
#define FITNESS_PRIO  ( HEXIWEAR_GUI_PRIO )

////////////////////////////////////////////////////////////////////////////////
// Global variable declarations.                                              //
////////////////////////////////////////////////////////////////////////////////
 
extern guiScreen_t fitnessScreen;

#endif