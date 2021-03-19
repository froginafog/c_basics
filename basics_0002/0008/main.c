#include <stdio.h>

int main()
{
	int numbers[] = {10, 20, 30};  //initialize an array of 3 numbers (integers)
	//when an array is initialize like this, we don't have to specify the number of elements in the array (it knows it)
	//assign 10 to the first element in the array (at the position 0)
	//assign 20 to the second element in the array (at the position 1)
	//assign 30 to the third element in the array (at the position 2)

	printf("numbers[0]: %d", numbers[0]);
	printf("\n");
	printf("numbers[1]: %d", numbers[1]);
	printf("\n");
	printf("numbers[2]: %d", numbers[2]);
	printf("\n");

	return 0;
}

/*
numbers[0]: 10
numbers[1]: 20
numbers[2]: 30
*/
