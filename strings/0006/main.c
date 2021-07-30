#include <stdio.h>

int main()
{
	char s[100];
	int i;
	
	printf("enter a string: ");
	i = 0;
	do
	{
		s[i] = getchar();
	}while(s[i++] != '\n');
	s[i] = '\0';
	
	printf("s: %s", s);
	
	return 0;
}

/*
enter a string: To C or not to C.
s: To C or not to C.
*/
