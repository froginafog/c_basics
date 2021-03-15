#include <stdio.h>

void print_integer_array(int * a, int num_elements)
{
    int i;
    for(i = 0; i < num_elements; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int i;
    int a[] = {10, 20, 30, 40, 50};
    int n;

    n = sizeof(a)/sizeof(a[0]);  //number of elements in "a"
    print_integer_array(a, n);

    return 0;
}

/*
10 20 30 40 50
*/
