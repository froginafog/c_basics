#include <stdio.h>

int main()
{
	int i;
	char * s = (char*)malloc(sizeof(char));

	printf("sizeof(char): %d\n", sizeof(char));
	printf("sizeof(s): %d\n", sizeof(s));

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
sizeof(char): 1
sizeof(s): 8
s: ABCDEFGHIJKLMNOPQRSTUVWXYZ
s:
*/
