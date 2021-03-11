#include <stdio.h>

int main()
{
	int a[] = {10, 20, 30, 40, 50};
	int num_elements = 5;
    int i;

	for(i = 0; i < num_elements; i++)
	{
        printf("a[%d]: %d\n", i, a[i]);
	}

	printf("-----------------------------------\n");

    //change the sign of each element in the array "a"
    for(i = 0; i < num_elements; i++)
	{
        a[i] = -a[i];
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
-----------------------------------
a[0]: -10
a[1]: -20
a[2]: -30
a[3]: -40
a[4]: -50
*/
