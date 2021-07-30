#include <stdio.h>
#include <string.h>

//strcmp() function compares two strings 

int main()
{
		char s1[] = "ABC DEF";
		char s2[] = "DEF GHI";
		
		printf("s1: %s\n", s1);
		printf("strlen(s1): %zd\n", strlen(s1));
		printf("s2: %s\n", s2);
		printf("strlen(s2): %zd\n", strlen(s2));
		
		char s3[strlen(s1)];
		
		strcpy(s3, s1);
		printf("s3: %s\n", s3);
		printf("strcmp(s1, s2): %d\n", strcmp(s1, s2));
		printf("strcmp(s1, s3): %d\n", strcmp(s1, s3));
		//strcmp() function compares two strings 
		//and returns 0 if both strings are identical
		
		if(strcmp(s1, s2) == 0)
		{
			printf("s1 is equal to s2\n");
		}
		else
		{
			printf("s1 is not equal to s2\n");
		}
		
		if(strcmp(s1, s3) == 0)
		{
			printf("s1 is equal to s3\n");
		}
		else
		{
			printf("s1 is not equal to s3\n");
		}
	
		return 0;
}

/*
s1: ABC DEF
strlen(s1): 7
s2: DEF GHI
strlen(s2): 7
s3: ABC DEF
strcmp(s1, s2): -1
strcmp(s1, s3): 0
s1 is not equal to s2
s1 is equal to s3
*/
