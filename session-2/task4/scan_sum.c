
#include <stdio.h>

int main( void ) {

    // define suitable data
    int operands[2];
    char operator;

    // use scanf to read from the terminal
    // print the output from scanf and the data values 
    int count = scanf("%i %c %i", &(operands[0]), &(operator), &(operands[1]));
    if (count >= 3) {
        int result = 0;
        switch(operator) {
            case '+': {result = operands[0] + operands[1]; break;}
            case '-': {result = operands[0] - operands[1]; break;}
            case '*': {result = operands[0] * operands[1]; break;}
            case '/': {
                if (operands[1] == 0) {break;}
                result = operands[0] / operands[1];
                break;
            }
            default: {break;}
        } 
        printf("%i %c %i = %i\n", operands[0], operator, operands[1], result);
    }

    return 0;
}