/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			compare_sorts_main.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/

/**
*** @file sorting_algorithms_main_driver.cpp
*** @brief File with main function built if <code>make</code> is called
*** @details <code>make</code> makes an executable by linking the main
*** function of this file. This function has to call the sorting algorithms on
*** arrays of the sizes as defined below.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "stopwatch.h"
#include "sorting_algorithms.h"

#define HUGE			65535	// 2^16
#define VERY_LARGE 		16384	// 2^14
#define LARGE			8192	// 2^13
#define MIDDLE			4096	// 2^12
#define SMALL			2048	// 2^11
#define VERY_SMALL		1024	// 2^10
#define TINY			256 	// 2 ^8

float getTime(int* array,unsigned long length,int number)
{
  init_random(array,length);

  //if number 0 then bubble sort
  if(number==0)
  {
    start_stopwatch();
    bubble_sort(array,length);
  }
  //else insertion sort
  else
  {
    start_stopwatch();
    insertion_sort(array,length);
  }

  return elapsed_time();
}

int main(int argc, char const *argv[]) {
  int array[HUGE];

  //getting times for bubble sort
  float bubbleT,bubbleVS,bubbleS,bubbleM,bubbleL,bubbleVL,bubbleH;
  bubbleT=getTime(array,TINY,0);
  bubbleVS=getTime(array,VERY_SMALL,0);
  bubbleS=getTime(array,SMALL,0);
  bubbleM=getTime(array,MIDDLE,0);
  bubbleL=getTime(array,LARGE,0);
  bubbleVL=getTime(array,VERY_LARGE,0);
  bubbleH=getTime(array,HUGE,0);

  //getting times for insertion sort
  float insertT,insertVS,insertS,insertM,insertL,insertVL,insertH;
  insertT=getTime(array,TINY,1);
  insertVS=getTime(array,VERY_SMALL,1);
  insertS=getTime(array,SMALL,1);
  insertM=getTime(array,MIDDLE,1);
  insertL=getTime(array,LARGE,1);
  insertVL=getTime(array,VERY_LARGE,1);
  insertH=getTime(array,HUGE,1);

  //printing out the times
  printf("Algorithm     tiny           v_small           small           middle           large           v_large           huge \n");
  printf("Bubble        %f       %f          %f        %f         %f        %f          %f   \n",bubbleT,bubbleVS,bubbleS,bubbleM,bubbleL,bubbleVL,bubbleH);
  printf("Insertion     %f       %f          %f        %f         %f        %f          %f   \n",insertT,insertVS,insertS,insertM,insertL,insertVL,insertH);
}


/*
* Suggestion how to initialize the arrays which must be sorted with test data.
* 1. Create a array of size HUGE and initialize it with random data.
* 2. Copy from this array as many elements as needed into the seven target directories
*     (to make this efficiently, consider to use the function memcpy() of string.h).
*/
