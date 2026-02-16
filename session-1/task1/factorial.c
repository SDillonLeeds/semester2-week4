/* Factorial */

#include <stdio.h>

int main( void ) {
   long unsigned int f[20];

   long unsigned int cumulativeProduct = 1u;
   for (unsigned int index=0u; index<20; index++) {
      f[index] = cumulativeProduct;
      printf("%d --> %ld\n", index, cumulativeProduct);
      cumulativeProduct *= (index+1);
   }

   return 0;
}
