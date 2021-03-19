#include <stdio.h>

int main()
{
	int n1;  //declare a variable for storing an integer, the name of the variable is n1
	int n2;  //declare a variable for storing an integer, the name of the variable is n2

	n1 = 5;  //assign the value 5 to n1
	n2 = 10;  //assign the value 10 to n2

	printf("%d", n1);  //print the value stored in n1
	printf("\n");  //go to the next line
	printf("%d", n2);  //print the value stored in n2
	printf("\n");  //go to the next line

	printf("---------------1-------------\n");

	int sum;

	sum = n1 + n2;  //add n1 and n2 together and store the result in the variable sum

	printf("n1 + n2: %d\n", sum);  //print the sum
	printf("---------------2-------------\n");
	printf("%d + %d: %d\n", n1, n2, sum);  //print n1, n2, and the sum

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
