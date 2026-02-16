
/* Matrix-vector product */

#include <stdio.h>

void initMat(float (*mat)[4][4], float value) {
   for (unsigned int u=0u; u<4; u++) {
      for (unsigned int v=0u; v<4; v++) {
         (*mat)[u][v] = value;
      }
   }
}


void initVec(float (*vec)[4], float value) {
   for (unsigned int u=0u; u<4; u++) {
      (*vec)[u] = value;
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


void displayVec(float (*vec)[4], const char* name) {
   printf("%s = { ", name);
   for (unsigned int u=0u; u<4; u++) {
      printf("%f, ", (*vec)[u]);
   }
   printf("}\n");
}


void productMatVec(float (*mat)[4][4], float (*vec)[4], float (*result)[4]) {
   //c[k] = sum_j (a_[k][j]x[b][j])
   for (unsigned int k=0u; k<4; k++) {
      for (unsigned int j=0u; j<4; j++) {
         (*result)[k] += (*mat)[k][j] * (*vec)[j];
      }
   }
}


int main( void ) {
   float a[4][4];
   float b[4];
   float c[4];

   initMat(&a, 1.0f); initVec(&b, 1.0f); initVec(&c, 0.0f);

   displayMat(&a, "a");
   displayVec(&b, "b");

   /*
   Intialise the matrix a and vector b entries to 1. 
   Write code to compute the product.
   Store your answer in vector c
   Print your final answer
   */

   productMatVec(&a, &b, &c);
   displayVec(&c, "c");

   return 0;
}
