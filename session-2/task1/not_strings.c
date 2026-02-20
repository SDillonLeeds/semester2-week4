
#include <stdio.h>

int main( void ) {

    char charArray[6] = {'h','e','l','l','o','\0'};
    char charString[] = "hello";
 
    printf("As array: %s\n",charArray);     // strange behaviour? : Keeps reading past end of array due to lack of \0 terminator char.
    printf("Length of array: %ld\n",sizeof(charArray));   // expected result

    printf("As string: %s\n",charString);   // normal behaviour
    printf("Length of string: %ld\n",sizeof(charString));   // includes silent character \O

    return 0;
}
