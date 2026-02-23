
/*
Name:
Student ID:
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[64];
    for (int idx=1; idx<argc-1; idx++) {
        strcat(buffer, argv[idx]);
        strcat(buffer, "-");
    }
    strcat(buffer, argv[argc-1]);

    // process the command-line data using appropriate string functions

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}