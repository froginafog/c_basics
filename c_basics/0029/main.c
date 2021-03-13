#include <stdio.h>

int main()
{
    char message[] = {'h', 'e', 'l', 'l', 'o', ' ', 'f', 'r', 'o', 'g', '\0'};
    char copy_message[11];  //create an empty array that can store 11 characters
                            //if we count the number of characters in "message" array
                            //we can see that it is 11 (including ' ' and '\0')
    int i;

    i = 0;
    while(message[i] != '\0')
    {
        copy_message[i] = message[i];
        i++;
    }
    copy_message[i] = message[i];  //to copy the last character, which is '\0'

    printf("The copy of the original message is:\n");
    printf("%s", copy_message);  //print a string

    return 0;
}

/*
The copy of the original message is:
hello frog
*/
