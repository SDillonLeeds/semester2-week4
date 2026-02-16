/* Dot product of 2 vectors */

#include <stdio.h>

#define NUM_ELEMENTS 5

int main( void ) {
   float a[NUM_ELEMENTS]={ 1.0,1.0,1.0,1.0,1.0 };
   float b[NUM_ELEMENTS]={ 2.0,3.0,4.0,5.0,6.0 };
   float d;

   /*
   Code to compute the dot product
   Store your answer in d
   print your final answer
   */
   for (unsigned int eIndex=0u; eIndex<NUM_ELEMENTS; eIndex++) {
      d += (a[eIndex] * b[eIndex]); 
   }
   printf("Dot product result: %f\n", d);


   return 0;
}