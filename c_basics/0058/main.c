#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N1;
	int N2;
    char message1[] = "Hello Frog";
    char message2[] = " Bye Frog";

    N1 = strlen(message1);  //number of elements in "message1"
    N2 = strlen(message2);  //number of elements in "message2"

	char * total_message = malloc((N1 + N2 + 1) * sizeof(char));

    strcpy(total_message, message1); //copy message1 into total_message
    strcat(total_message, message2); //append (concatenate) message2 to the end of message1

	printf("total_message: %s\n", total_message);
	free(total_message);

	return 0;
}

/*
total_message: Hello Frog Bye Frog
*/
