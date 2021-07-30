#include "stdio.h"

//A string is an array of characters.

int main()
{
	char s[] = "Today is the day.";  //define a string
	int i;
	int N = sizeof(s)/sizeof(s[0]);  //number of elements in "s"

	for(i = 0; i < N; i++)
	{
		printf("%c", s[i]);
	}
}

/*
Today is the day.
*/
