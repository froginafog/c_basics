#include <stdio.h>

int main()
{
	int i;
	int i_max;

	i_max = 5;
	printf("entering the loop\n");
	for(i = 0; i < i_max; i++)
	{
        printf("i: %d\n", i);
	}
	printf("leaving the loop\n");

	//this is the famous "for" loop
	//as long as i < i_max is true, the "for" loop continues and i is incremented by 1 on each iteration
	//when i < i_max is false, we leave the loop

	return 0;
}

/*
entering the loop
i: 0
i: 1
i: 2
i: 3
i: 4
leaving the loop
*/
