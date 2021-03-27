#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int num_chars = 26; //number of characters
	char * s = (char*)malloc(sizeof(char)*(num_chars + 1));
	//allocate memory for "s" to store (num_chars + 1) characters
	//+1 for '\0'

	char ch;
	for(ch = 'A', i = 0; ch <= 'Z'; ch++, i++)
	{
		s[i] = ch;
	}
	s[i] = '\0';


	printf("s: ");
	i = 0;
	while(s[i] != '\0')
	{
		printf("%c", s[i]);
		i++;
	}

	printf("\n");
	free(s);
	printf("s: %s\n", s);

	return 0;
}

/*
s: ABCDEFGHIJKLMNOPQRSTUVWXYZ
s:
*/
