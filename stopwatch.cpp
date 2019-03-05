/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer, Benjamin Besic
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * Sort Algorythms with a added stopwatch
 *-----------------------------------------------------------------------------
*/

#include "stopwatch.h"
#include <time.h>

static clock_t start;
static clock_t end;

void 	start_stopwatch (){
 start=clock();
}

void 	stop_stopwatch (){

}

float elapsed_time (){
  end=clock();
  return (float)(end - start) / CLOCKS_PER_SEC;
}
