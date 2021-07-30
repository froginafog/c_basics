#include <stdio.h>

int main()
{
	char s[3][30] =  {"To C or not to C.",
		              "Today is the day.",
		              "I am you and you are me."};
    //Define a matrix of 3 rows of that can store up to 30 characters.
    //Or, define a 3 strings each of which can store 30 characters.

	printf("sizeof(s): %llu\n", sizeof(s));
	printf("sizeof(s[0]): %d\n", sizeof(s[0]));
	printf("sizeof(s[1]): %d\n", sizeof(s[1]));
	printf("sizeof(s[2]): %d\n", sizeof(s[2]));
	printf("-------------------------------\n");
	printf("number of strings: %d\n", sizeof(s)/sizeof(s[0]));
	printf("number of strings: %d: %d\n", sizeof(s)/sizeof(s[1]));
	printf("number of strings: %d: %d\n", sizeof(s)/sizeof(s[2]));
	printf("-------------------------------\n");
	printf("length of s[0]: %d\n", strlen(s[0]));
	printf("length of s[1]: %d\n", strlen(s[1]));
	printf("length of s[2]: %d\n", strlen(s[2]));

	return 0;
}
