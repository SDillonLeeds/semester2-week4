/* Sum of 2 matrices */

#include <stdio.h>

void initMat(float (*mat)[4][4]) {
   for (unsigned int u=0u; u<4; u++) {
      for (unsigned int v=0u; v<4; v++) {
         (*mat)[u][v] = 1.0f;
      }
   }
}

void displayMat(float (*mat)[4][4], const char* name) {
   printf("%s = {", name);
   for (unsigned int u=0u; u<4; u++) {
      printf("\n  ");
      for (unsigned int v=0u; v<4; v++) {
         printf("%f, ", (*mat)[u][v]);
      }
   }
   printf("\n}\n");
}

void sumMatrices(float (*a)[4][4], float (*b)[4][4], float (*result)[4][4]) {
   for (unsigned int u=0u; u<4; u++) {
      for (unsigned int v=0u; v<4; v++) {
         (*result)[u][v] = (*a)[u][v] + (*b)[u][v];
      }
   }
}

int main( void ) {
   float a[4][4];
   float b[4][4];
   float c[4][4];

   initMat(&a); initMat(&b);

   displayMat(&a, "a");
   displayMat(&b, "b");

   /*
   Intialise the matrix a and b entries to 1. 
   Write code to compute the sum.
   Store your answer in matrix c
   Print your final answer
   */

   sumMatrices(&a, &b, &c);

   displayMat(&c, "c");

   return 0;
}
