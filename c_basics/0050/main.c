#include <stdio.h>

void permutate(int * a, int num_elements)
{
    int temp;  //temporary variable
    int i;

    temp = a[num_elements - 1];  //assign the last element of "a" to temp
    for(i = num_elements - 2; i >= 0; i--)
    {
        a[i+1] = a[i];
    }
    a[0] = temp;
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
    printf("-----------------1----------------\n");
    permutate(numbers, n);
    print_integer_array(numbers, n);
    printf("-----------------2----------------\n");
    permutate(numbers, n);
    print_integer_array(numbers, n);
    printf("-----------------3----------------\n");
    permutate(numbers, n);
    print_integer_array(numbers, n);
    printf("-----------------4----------------\n");
    permutate(numbers, n);
    print_integer_array(numbers, n);
    printf("-----------------5----------------\n");
    permutate(numbers, n);
    print_integer_array(numbers, n);

    return 0;
}

/*
10 20 30 40 50
-----------------1----------------
50 10 20 30 40
-----------------2----------------
40 50 10 20 30
-----------------3----------------
30 40 50 10 20
-----------------4----------------
20 30 40 50 10
-----------------5----------------
10 20 30 40 50
*/
