/* Sum of 2 vectors */

#include <stdio.h>

#define NUM_ELEMENTS 5u

int main( void ) {
   float a[NUM_ELEMENTS]={ 1.0,1.0,1.0,1.0,1.0 };
   float b[NUM_ELEMENTS]={ 2.0,3.0,4.0,5.0,6.0 };
   float c[NUM_ELEMENTS];

   /*
   Code to compute the sum
   Store your answer in array c
   Print your final answer
   */

   printf("c = { ");
   for (unsigned int eIndex=0u; eIndex<NUM_ELEMENTS; eIndex++) {
      c[eIndex] = a[eIndex] + b[eIndex];
      printf("%f, ", c[eIndex]);
   }
   printf("}\n");

   return 0;
}
