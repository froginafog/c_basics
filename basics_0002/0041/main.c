#include <stdio.h>

int main()
{
    //a pointer is a variable for storing memory address
    int * pointer; //create a pointer
    int n;

    n = 10;
    printf("value stored in n: %d\n", n);
    printf("address of n in memory: %p\n", &n);

    pointer = &n; //assign the address of n to pointer
    //now pointer points to n

    printf("address stored in pointer: %p\n", pointer);
    printf("value stored in the variable at which pointer currently points to: %d\n", *pointer);

    return 0;
}

/*
value stored in n: 10
address of n in memory: 0x7ffe899fa4cc
address stored in pointer: 0x7ffe899fa4cc
value stored in the variable at which pointer currently points to: 10
*/
