#include <stdio.h>

int main()
{
	int i;
	int i_min;
	int i_max;

    	i_min = 0;
	i_max = 5;

	printf("entering the for loop\n");
	for(i = i_min; i < i_max; i++)
	{
        printf("i: %d\n", i);
	}
	printf("leaving the for loop\n");

    	printf("i: %d\n", i);

	printf("entering the while loop\n");
	while(i >= i_min)
	{
        printf("i: %d\n", i);
        i--;  //i = i - 1, which means decrease the value stored in i by 1
	}
	printf("leaving the while loop\n");

	return 0;
}

/*
entering the for loop
i: 0
i: 1
i: 2
i: 3
i: 4
leaving the for loop
i: 5
entering the while loop
i: 5
i: 4
i: 3
i: 2
i: 1
i: 0
leaving the while loop
*/
