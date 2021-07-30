#include <stdio.h>

int main()
{
	char s[100];  //create an array which can store 100 characters (including '\0')
	int i;

	printf("enter a string: ");
	i = 0;
	do
	{
		s[i] = getchar();  //read a character from the input stream (keyboard) and store it in s[i]
	}while(s[i++] != '\n');  //loop until the user presses Enter
	s[i] = '\0';

	printf("s: ");
	i = 0;
	while(s[i] != '\0')
	{
		putchar(s[i++]);
	}

	return 0;
}

/*
enter a string: To C or not to C.
s: To C or not to C.
*/
