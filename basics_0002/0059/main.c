#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N1;
	int N2;
    	char message1[] = "Hello Frog";
    	char message2[] = "Bye Frog Have A Nice Day";

    	N1 = strlen(message1);  //number of elements in "message1"
    	N2 = strlen(message2);  //number of elements in "message2"

	char * copy_message;

	copy_message = malloc((N1 + 1) * sizeof(char));  //allocate memory for storing N1
    	strcpy(copy_message, message1); //copy message1 into copy_message
	printf("copy_message: %s\n", copy_message);

	realloc(copy_message, (N2 + 1) * sizeof(char)); //reallocate memory for storing N2
    	strcpy(copy_message, message2); //copy message2 into copy_message
    	printf("copy_message: %s\n", copy_message);

    	free(copy_message);

	return 0;
}

/*
copy_message: Hello Frog
copy_message: Bye Frog Have A Nice Day
*/
