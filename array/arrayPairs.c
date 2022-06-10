// Initializing the elements of array s to the even integers from 2 to 10.
#include <stdio.h>
#define SIZE 5 // maximun size of array

int main (void){
    // symbolic constant SIZE can by used to specify array size
    int s[SIZE]; // array s has SIZE elements

    for (size_t j = 0; j < SIZE; ++j){
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n", "Element", "Value");
    // output contents of array s in tabular format
    for (size_t j = 0; j < SIZE; ++j){
        printf("%7u%13d\n", j, s[j]);
    }
}