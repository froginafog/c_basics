#include <stdio.h>

int main()
{
	char s[100];
	int i;
	
	printf("number of elements that s can contain: %d\n", sizeof(s)/sizeof(s[0]));
	printf("Enter a string: ");
	
	i = 0;
	do
	{
		scanf("%c", &s[i]);
	}while(s[i++] != '\n');
	s[i] = '\0';
	
	printf("s: ");
	i = 0;
	while(s[i] != '\0')
	{
		printf("%c", s[i++]);
	}
	
	return 0;
}

/*
number of elements that s can contain: 100
Enter a string: Today is the day.
s: Today is the day.
*/
