#include <stdio.h>

int main()
{
	float x1;  //declare a variable for storing a floating point number, the name of the variable is x1
	float x2;  //declare a variable for storing a floating point number, the name of the variable is x2

	x1 = 3.14159;
	x2 = 10.12345;

	printf("%f", x1);
	printf("\n");
	printf("%f", x2);
	printf("\n");

	printf("---------------1-------------\n");

	float sum;

	sum = x1 + x2;  //add x1 and x2 together and store the result in the variable sum

	printf("x1 + x2: %f\n", sum);
	printf("---------------2-------------\n");
	printf("%f + %f: %f\n", x1, x2, sum);

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
