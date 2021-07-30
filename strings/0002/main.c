#include <stdio.h>

int main()
{
	char s[] = "Today is the day.";
	int i;
	int N = sizeof(s)/sizeof(s[0]);  //number of elements in "s"

	for(i = 0; i < N; i++)
	{
		putchar(s[i]);
	}

	return 0;
}

/*
Today is the day.
*/
