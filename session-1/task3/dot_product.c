/* Dot product of 2 vectors */

#include <stdio.h>
#include <stdlib.h>

void initVec(float* vec, float value) {
   for (unsigned int u=0u; u<4; u++) {
      *(vec+u) = value;
   }
}


void displayVec(float* vec, const char* name) {
   printf("%s = { ", name);
   for (unsigned int u=0u; u<4; u++) {
      printf("%f, ", *(vec+u));
   }
   printf("}\n");
}


void dotProduct(float* a, float* b, unsigned int n, float* result) {
   for (unsigned int i=0u; i<n; i++) {
      *result += *(a+i) * *(b+i);
   }
}


int main( void ) {
   unsigned int n = 5;
   float *a, *b, *d;  // stack-based pointers

   // allocation of heap memory for vectors
   a = calloc( n, sizeof(float) ); initVec(a, 1); //calloc inits values at 0
   b = calloc( n, sizeof(float) ); initVec(b, 2); //[not here] malloc does not, which makes it faster but useless initial data.
   d = calloc( 1, sizeof(float) ); *d = 0.0f;

   /*
   Code to initialise the vectors with numerical data 
   Code to compute the dot product 
   - does this differ from the initial code?
   - note that loop now run k=0;k<n 
   Store your answer in d
   print your final answer
   */

   displayVec(a, "a");
   displayVec(b, "b");

   dotProduct(a, b, n, d);
   printf("Dot Product Result: %f\n", *d);

   // explicit deallocation of heap memory before exit */
   free(a);
   free(b);
   free(d);

   return 0;
}