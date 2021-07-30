#include <stdio.h>

int main()
{
	int N;  //N = number of elements

	printf("Enter the number of elements you wish to enter: ");
	scanf("%d", &N);

	int * a = (int*)malloc(N * sizeof(int));
	//Allocate memory for N intergers for pointer "a".
	//"a" can now be seen as an array

	//check if memory is allocated
	if(a == NULL)
	{
		printf("error (failed to allocate memeory)\n");
		exit(0);
	}

	int i;

	for(i = 0; i < N; i++)
	{
		printf("Enter an element for a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	int sum = 0;

	printf("a: ");
	for(i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
		sum = sum + a[i];
	}
	printf("\n");

	printf("The sum of the elements of a: %d\n", sum);

	free(a);  //free the memory allocated to "a"
	printf("free(a) is called\n");

    printf("a: ");
	for(i = 0; i < N; i++)
	{
		printf("%d  ", a[i]);
		sum = sum + a[i];
	}
	printf("\n");

	return 0;
}

/*
Enter the number of elements you wish to enter: 5
Enter an element for a[0]: 10
Enter an element for a[1]: 20
Enter an element for a[2]: 30
Enter an element for a[3]: 40
Enter an element for a[4]: 50
a: 10  20  30  40  50
The sum of the elements of a: 150
free(a) is called
a: 0  0  -1938317296  22081  50
*/
