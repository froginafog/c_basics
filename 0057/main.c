#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N;  //N = number of elements
    char message[] = "Hello Frog";

    N = strlen(message);  //number of elements in "message"

	char * copy_message = malloc((N + 1) * sizeof(char));  //allocate memory for N characters
                                                           //+1 for '\0'
    strcpy(copy_message, message);  //copy "message" into "copy_message"

	printf("copy_message: %s\n", copy_message);
	free(copy_message);

	return 0;
}

/*
copy_message: Hello Frog
*/
