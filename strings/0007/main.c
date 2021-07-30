#include <stdio.h>

int main()
{
	char * s = "To C or not to C.";
	int i;
	
	i = 0;
	while(s[i] != '\0')
	{
		printf("%c", s[i]);
		i++;
	}
	
	return 0;
}

/*
To C or not to C.
*/
