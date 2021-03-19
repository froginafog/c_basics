#include <stdio.h>

int main()
{
	int n1;  //declare a variable for storing an integer, the name of the variable is n1
	int n2;  //declare a variable for storing an integer, the name of the variable is n2

	n1 = 5;
	n2 = 10;

	printf("%d", n1);
	printf("\n");
	printf("%d", n2);
	printf("\n");

	printf("---------------1-------------\n");

	int sum;

	sum = n1 + n2;  //add n1 and n2 together and store the result in the variable sum

	printf("n1 + n2: %d\n", sum);
	printf("---------------2-------------\n");
	printf("%d + %d: %d\n", n1, n2, sum);

	return 0;
}

/*
5
10
---------------1-------------
n1 + n2: 15
---------------2-------------
5 + 10: 15
*/
