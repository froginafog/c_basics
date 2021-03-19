#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int * p;
    int i;
    int num_elements;

    p = &a[0];
    num_elements = sizeof(a)/sizeof(a[0]);
    //sizeof(a) is the total size of "a" in bytes
    //sizeof(a[0]) is the size of "a[0]" in bytes

    for(i = 0; i < num_elements; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    return 0;
}

/*
10 20 30 40 50
*/
