#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int sum;
    int difference;
    int product;
    int quotient;

    n1 = 10;
    n2 = 3;

    sum = n1 + n2;
    difference = n1 - n2;
    product = n1 * n2;
    quotient = n1 / n2;  //for integer division, the result is the whole part of n1/n2
                         //the remainder of n1/n2 is discarded
                         //for example,
                         //10/3 = (9 + 1)/3 = 9/3 + 1/3 = 9/3 + 0 = 3 + 0 = 3
                         //there is no whole integer in 1/3, so 1/3 = 0 for integers

    printf("n1        : %d\n", n1);
    printf("n2        : %d\n", n2);
    printf("sum       : %d\n", sum);
    printf("difference: %d\n", difference);
    printf("product   : %d\n", product);
    printf("quotient  : %d\n", quotient);

	return 0;
}

/*
n1        : 10
n2        : 3
sum       : 13
difference: 7
product   : 30
quotient  : 3
*/
