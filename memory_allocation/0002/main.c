#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N1 = 3;  //number of elements for the first array
	int N2 = 5;  //number of elements for the second array (re-allocated array)
	int i;

	int * a = (int*)malloc(N1 * sizeof(int));  //allocate memory for N1 integers

	a[0] = 10;
	a[1] = 20;
	a[2] = 30;

	printf("       address   value\n");
	for(i = 0; i < N1; i++)
	{
		printf("%10p   %5d\n", a + i, a[i]);
	}

	a = (int*)realloc(a, N2 * sizeof(int));
	//re-allocate memory for "a"
	//and returns a pointer to the same memory location as that of the old array

	printf("a = (int*)realloc(a, N2 * sizeof(int)) is called\n");

	a[0] = 10;
	a[1] = 20;
	a[2] = 30;
	a[3] = 40;
	a[4] = 50;

	printf("       address   value\n");
	for(i = 0; i < N2; i++)
	{
		printf("%10p   %5d\n", a + i, a[i]);
	}

	free(a);

	return 0;
}

/*
       address   value
0x564362faa2a0      10
0x564362faa2a4      20
0x564362faa2a8      30
a = (int*)realloc(a, N2 * sizeof(int)) is called
       address   value
0x564362faa2a0      10
0x564362faa2a4      20
0x564362faa2a8      30
0x564362faa2ac      40
0x564362faa2b0      50
*/
