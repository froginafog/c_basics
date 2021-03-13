#include <stdio.h>

int main()
{
    //create an array of characters (which is also famously known as a string)
    char message[] = {'h', 'e', 'l', 'l', 'o', ' ', 'f', 'r', 'o', 'g', '\0'};
    //'\0' is the null character
    //this character is to indicate the end of the message

    int i;

    printf("The message is:\n");
    i = 0;
    while(message[i] != '\0')  //loop through each individual character of the array
    {
        printf("%c", message[i]);
        i++;
    }
    printf("\n");

    return 0;
}

/*
The message is:
hello frog
*/
