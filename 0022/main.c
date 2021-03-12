#include <stdio.h>

int add(int n1, int n2)  //this function adds 2 integers and returns the sum
{                        //the first argument of this function is "int n1"
    int sum;             //the second argument of this function is "int n2"

    sum = n1 + n2;

    return sum;
}

int main()
{
    int result;

    result = add(5, 10);  //the sum of these 2 integers in stored in "result"

    printf("result: %d\n", result);

    return 0;
}

/*
result: 15
*/
