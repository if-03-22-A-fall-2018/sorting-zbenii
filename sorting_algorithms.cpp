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
#include "sorting_algorithms.h"
#include <stdlib.h>

void 	init_random (int *array, unsigned long length){
  for(unsigned int i=0;i<length;i++)
  {
    array[i]=rand() % 100;
  }
}

void 	bubble_sort (int *array, unsigned long length){
  int temp;

   for (unsigned int i = 1; i < length ; i++)
   {
      for (unsigned int x = 0; x < length - i ; x++)
      {
          if (array[x] > array[x+1])
          {
              temp = array[x];
              array[x] = array[x+1];
              array[x+1] = temp;
          }
      }
   }
}

void 	insertion_sort (int *array, unsigned long length){
   int temp;
   int x;

   for (unsigned int i = 1; i < length; i++)
   {
       temp = array[i];
       x = i-1;

       while (x >= 0 && array[x] > temp)
       {
           array[x+1] = array[x];
           x = x-1;
       }
       array[x+1] = temp;
   }
}
