#include <stdio.h>

int main()
{
	double x1;  //declare a variable for storing a floating point number, the name of the variable is x1
	double x2;  //declare a variable for storing a floating point number, the name of the variable is x2

	//double is the bigger version of float

	x1 = 3.14159;
	x2 = 10.12345;

	printf("%lf", x1);
	printf("\n");
	printf("%lf", x2);
	printf("\n");

	printf("---------------1-------------\n");

	double sum;

	sum = x1 + x2;  //add x1 and x2 together and store the result in the variable sum

	printf("x1 + x2: %lf\n", sum);
	printf("---------------2-------------\n");
	printf("%lf + %lf: %lf\n", x1, x2, sum);

	return 0;
}

/*
3.141590
10.123450
---------------1-------------
x1 + x2: 13.265040
---------------2-------------
3.141590 + 10.123450: 13.265040
*/
