#include <stdio.h>

char * readString(int size);
void printString(char * s);

int main()
{
	int i;
	int j;
	int numberOfStrings = 3;
	int lengthOfEachString = 100;


    	//allocate memory for "numberOfStrings" strings
	char ** strings = (char **)malloc(numberOfStrings * sizeof(char *));


	//allocate memory to each string
	for(i = 0; i < numberOfStrings; i++)
	{
    	strings[i] = malloc((lengthOfEachString + 1) * sizeof(char));
	}


    	//ask the user to enter each string
	for(i = 0; i < numberOfStrings; i++)
	{
		printf("enter string[%d]: ", i);
		strings[i] = readString(lengthOfEachString);
	}

	printf("----------------------------------------------------\n");


	//print each string
	for(i = 0; i < numberOfStrings; i++)
	{
		printf("string[%d]: ", i);
		printString(strings[i]);
		printf("\n");
	}

	return 0;
}

char * readString(int num_chars)
{
	char * s = (char*)malloc(num_chars * sizeof(char));
	int i = 0;

	num_chars--;
	while(((s[i] = getchar()) != '\n') && (i < num_chars))
	{
		i++;
	}
	s[i] = '\0';

	return s;
}

void printString(char * s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}

/*
enter string[0]: hello world
enter string[1]: happy day
enter string[2]: good bye
----------------------------------------------------
string[0]: hello world
string[1]: happy day
string[2]: good bye
*/
