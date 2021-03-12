#include <stdio.h>

double add(double x1, double x2)
{
    double result;
    result = x1 + x2;
    return result;
}

double subtract(double x1, double x2)
{
    double result;
    result = x1 - x2;
    return result;
}

double multiply(double x1, double x2)
{
    double result;
    result = x1 * x2;
    return result;
}

double divide(double x1, double x2)
{
    double result;
    result = x1 / x2;
    return result;
}

int main()
{
    double result_of_add;
    double result_of_subtract;
    double result_of_multiply;
    double result_of_divide;

    result_of_add = add(10.5, 1.5);
    result_of_subtract = subtract(10.5, 1.5);
    result_of_multiply = multiply(10.5, 1.5);
    result_of_divide = divide(10.5, 1.5);

    printf("result_of_add: %lf\n", result_of_add);
    printf("result_of_subtract: %lf\n", result_of_subtract);
    printf("result_of_multiply: %lf\n", result_of_multiply);
    printf("result_of_divide: %lf\n", result_of_divide);

    return 0;
}

/*
result_of_add: 12.000000
result_of_subtract: 9.000000
result_of_multiply: 15.750000
result_of_divide: 7.000000
*/
