#include <stdio.h>

void reverse_integer_array(int * a, int num_elements)
{
    int i;
    int temp[num_elements];

    for(i = 0; i < num_elements; i++)
    {
        temp[i] = a[i];
    }

    int k;

    for(i = num_elements - 1, k = 0; i >= 0; i--, k++)
    {
        a[k] = temp[i];
    }
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
    int n = sizeof(numbers)/sizeof(numbers[0]);  //number of elements in the array called "numbers"

    print_integer_array(numbers, n);
    reverse_integer_array(numbers, n);
    printf("reverse_integer_array() is called\n");
    print_integer_array(numbers, n);

    return 0;
}

/*
10 20 30 40 50
reverse_integer_array() is called
50 40 30 20 10
*/
