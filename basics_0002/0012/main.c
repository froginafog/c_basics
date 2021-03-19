#include <stdio.h>

int main()
{
	int i;
	int i_max;

	i = 0;
	i_max = 5;
	printf("entering the loop\n");
	while(i < i_max)
	{
        printf("i: %d\n", i);
        i++;  //i = i + 1, which means increase the value stored in i by 1
	}
	printf("leaving the loop\n");

	//this is the famous "while" loop
	//as long as i < i_max is true, the "while" loop continues and i is incremented by 1 on each iteration
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
