#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;  //N = number of elements

	printf("Enter the number of elements you wish to enter: ");
	scanf("%d", &N);

	int * a = malloc(N * sizeof(int));  //allocate memory for N integers

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

	free(a);
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
Enter the number of elements you wish to enter: 3
Enter an element for a[0]: 10
Enter an element for a[1]: 20
Enter an element for a[2]: 30
a: 10  20  30
The sum of the elements of a: 60
free(a) is called
a: 7279616  0  7274832
*/
