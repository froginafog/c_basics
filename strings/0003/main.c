#include <stdio.h>

int main()
{
	char s[] = "Today is the day.";
	int i;

	i = 0;
	while(s[i] != '\0')  //the last element of "s" is '\0' by default
	{
		printf("%c", s[i++]);
	}

	return 0;
}

/*
Today is the day.
*/
