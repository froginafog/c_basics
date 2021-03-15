#include <stdio.h>

void modify_integer_array(int * a, int num_elements)
{
    int i;

    for(i = 0; i < num_elements; i++)
    {
        a[i]++;
    }

    //When a function receives data by pointer, the changes done to the data is reflected
    //outside the function. That is, the changes applied to the data are "permanent".
}

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
    int numbers[] = {10, 20, 30, 40, 50};
    int n = sizeof(numbers)/sizeof(numbers[0]);

    print_integer_array(numbers, n);
    modify_integer_array(numbers, n);
    printf("modify_integer_array() is called\n");
    print_integer_array(numbers, n);

    return 0;
}

/*
10 20 30 40 50
modify_integer_array() is called
11 21 31 41 51
*/
