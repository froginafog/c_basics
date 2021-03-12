#include <stdio.h>

int main()
{
    double x = 1234.56789;

    printf("x: %lf\n", x);  //output with the default number of digits after the decimal point
    printf("x: %.1lf\n", x);  //output with 1 digit after the decimal point (with rounding)
    printf("x: %.2lf\n", x);  //output with 2 digits after the decimal point (with rounding)
    printf("x: %.3lf\n", x);  //output with 3 digits after the decimal point (with rounding)
    printf("x: %.4lf\n", x);  //output with 4 digits after the decimal point (with rounding)

    return 0;
}

/*
x: 1234.567890
x: 1234.6
x: 1234.57
x: 1234.568
x: 1234.5679
*/
