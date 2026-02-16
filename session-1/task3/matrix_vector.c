
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>


void initVec(float* vec, float value) {
   for (unsigned int u=0u; u<4; u++) {
      *(vec+u) = value;
   }
}

void initMat(float** mat, float value) {
   for (unsigned int u=0u; u<4; u++) {
      for (unsigned int v=0u; v<4; v++) {
         *(*(mat+u)+v) = value;
      }
   }
}


void displayVec(float* vec, const char* name) {
   printf("%s = { ", name);
   for (unsigned int u=0u; u<4; u++) {
      printf("%f, ", *(vec+u));
   }
   printf("}\n");
}

void displayMat(float** mat, const char* name) {
   printf("%s = {", name);
   for (unsigned int u=0u; u<4; u++) {
      printf("\n  ");
      for (unsigned int v=0u; v<4; v++) {
         printf("%f, ", *(*(mat+u)+v));
      }
   }
   printf("\n}\n");
}


void productMatVec(float** mat, float* vec, float* result) {
   //c[k] = sum_j (a_[k][j]x[b][j])
   for (unsigned int k=0u; k<4; k++) {
      for (unsigned int j=0u; j<4; j++) {
         *(result+k) += *(*(mat+k)+j) * *(vec+j);
      }
   }
}


int main( void ) {
   int n = 4;           
   float **a, *b, *c;

    
   a = calloc( n, sizeof(float) );
   for (unsigned int i=0u; i<n; i++) { a[i] = calloc( n, sizeof(float) );}
   initMat(a, 1.0f); displayMat(a, "a");

   b = calloc( n, sizeof(float) ); initVec(b, 1.0f);
   displayVec(b, "b");

   c = calloc( n, sizeof(float) ); initVec(c, 0.0f);

   /*
   Dynamically allocate the matrix a and vectors b and c using size n
   Intialise the matrix a and vector b entries to 1. 
   Write code to compute the product.
   Store your answer in vector c
   Print your final answer
   Free the allocated memory
   */

   productMatVec(a, b, c);
   displayVec(c, "c");

   free(a); free(b); free(c); //Free memory
    
   return 0;
}
