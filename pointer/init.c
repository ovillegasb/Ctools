
#include <stdio.h>

int main(void){
    int y = 5;
    int *yPtr;

    yPtr = &y;

    printf("%d\n", *yPtr);
}