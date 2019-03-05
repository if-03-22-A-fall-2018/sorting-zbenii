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
#ifndef ___STOPWATCH_H
#define ___STOPWATCH_H

void 	start_stopwatch ();

void 	stop_stopwatch ();

float 	elapsed_time ();

/**
*** @file stopwatch.h
*** @brief Description of stopwatch
*** @page Stopwatch
*** Functions to measure the processor time needed for a section of code. Usage
*** <pre>
*** <code>
*** start_stopwatch();
*** ...
*** // some code to be measured
*** float elapsed1 = elapsed_time(); // given in seconds
*** ...
*** // some more code to be measured
*** fload elapsed2 = elapsed_time(); // elapsed2 is time in seconds from start_stopwatch() on
*** ...
*** // some more code to be measured
*** stop_stopwatch();
*** float elapsed3 = elapsed_time(); // time between start_stopwatch() and stop_stopwatch();
*** </code>
*** </pre>
***
*** Care must be taken that we measure cpu time! Check out the function clock() and the constant
*** CLOCKS_PER_SEC from time.h in order to implement the functions correctly.
*/

#endif
