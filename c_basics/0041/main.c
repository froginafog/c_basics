#include <stdio.h>

int main()
{
    //a pointer is a variable for storing memory address
    int * p; //create a pointer p
    int n;

    n = 10;
    printf("value stored in n: %d\n", n);
    printf("address of n in memory: %d\n", &n);

    p = &n; //assign the address of n to p
    //now p points to n

    printf("address stored in p: %d\n", p);
    printf("value stored in the variable at which p currently points to: %d\n", *p);

    return 0;
}

/*
value stored in n: 10
address of n in memory: 1734770188
address stored in p: 1734770188
value stored in the variable at which p currently points to: 10
*/
