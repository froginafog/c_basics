#include <stdio.h>

int main()
{
	int a[5];  //declare an empty array of 5 elements
	int num_elements = 5;
   	int i;

    	//assign values to the empty array
   	for(i = 0; i < num_elements; i++)
	{
        	a[i] = (i + 1) * 10;
	}

	for(i = 0; i < num_elements; i++)
	{
        	printf("a[%d]: %d\n", i, a[i]);
	}

	return 0;
}

/*
a[0]: 10
a[1]: 20
a[2]: 30
a[3]: 40
a[4]: 50
*/
