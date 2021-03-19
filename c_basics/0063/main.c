#include "stdio.h"

int main()
{
	char s[] = "Today is the day.";
	int i;
	
	for(i = 0; i < sizeof(s)/sizeof(s[0]); i++)
	{
		printf("%c", s[i]);
	}
}

/*
Today is the day.
*/
