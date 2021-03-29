#include <stdio.h>

void printArray(char * array);
int countWords(char * array);

int main()
{
	char * s = "Today is the day.";
	
	printf("s: ");
	printArray(s);
	printf("\n");
	printf("number of words: %d\n", countWords(s));
	
	return 0;
}

void printArray(char * array)
{
	int i = 0;
	
	while(array[i] != '\0')
	{
		putchar(array[i]);
		i++;
	}
}

int countWords(char * array)
{
	int i = 0, words = 0;
	
	if(array[0] == '\0')
	{
		return 0;
	}
	
	while(array[i] != '\0')
	{
		if(array[i] == ' ' && array[i - 1] != ' ')
		{
			words++;
		}
		i++;
	}

	words++;
	
	return words;
}

/*
s: Today is the day.
number of words: 4
*/



