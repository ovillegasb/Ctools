// Addition program.
#include <stdio.h>

// function main begins program execution
int main( void )
{
    int val1; // first number to be entered by user
    int val2; // second number to be entered by user

    printf("Enter first integer\n");
    scanf("%d", &val1); // read an integer

    printf("Enter second integer\n");
    scanf("%d", &val2); // read an integer

    int sum; // variable in which sum will be stored
    sum = val1 + val2; // assing total to sum

    printf("Sum is %d\n", sum); // print sum
} // end function main