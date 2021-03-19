#include <stdio.h>

int main()
{
    char message[200];
    int i;

    printf("Enter a message: ");

    i = 0;
    message[i] = getchar();
    while(message[i] != '\n')
    {
        i++;
        message[i] = getchar();
    }
    message[i] = '\0';  //we must append the null character to signal the end of the message

    printf("The message is:\n");
    printf("%s\n", message);

    return 0;
}

/*
Enter a message: A frog and a bee became friends.
The message is:
A frog and a bee became friends.
*/
