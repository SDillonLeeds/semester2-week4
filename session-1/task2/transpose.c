
/* Transpose of a matrix */

#include <stdio.h>
#include <string.h>


void initMat(int (*mat)[4][4]) {
   for (unsigned int i=0u; i<4; i++) {
      for (unsigned int j=0u; j<4; j++) {
         (*mat)[i][j] = (2*i) - j;
      }
   }
}


void displayMat(int (*mat)[4][4], const char* name) {
   printf("%s = {", name);
   for (unsigned int u=0u; u<4; u++) {
      printf("\n  ");
      for (unsigned int v=0u; v<4; v++) {
         printf("%d, ", (*mat)[u][v]);
      }
   }
   printf("\n}\n");
}


void transpose(int (*mat)[4][4]) {
   //Transpose a matrix without creating a copy.
   for (unsigned int i=0u; i<4; i++) {
      for (unsigned int j=0u; j<=i; j++) {
         int tempValue = (*mat)[i][j];
         (*mat)[i][j] = (*mat)[j][i];
         (*mat)[j][i] = tempValue;
      }
   }
}


int main( void ) {
   int a[4][4];

   /*
   Intialise the matrix a to 2i-j.
   Print out matrix a. 
   Write code for the transpose - you can use other variables as necessary but not a cpoy of the matrix 
   Print the transpose.
   */

   initMat(&a);
   displayMat(&a, "before");
   
   transpose(&a);
   displayMat(&a, "after");

   return 0;
}
