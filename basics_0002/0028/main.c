#include <stdio.h>

int main()
{
    //create an array of characters (which is also famously known as a string)
    char message[] = {'h', 'e', 'l', 'l', 'o', ' ', 'f', 'r', 'o', 'g', '\0'};
    //'\0' is the null character
    //this character is to indicate the end of the message (string)

    int i;

    i = 0;
    while(message[i] != '\0')  //this loop is to change each lowercase 'l' to uppercase 'L'
    {
        if(message[i] == 'l')
        {
            message[i] = 'L';
        }
        i++;
    }

    printf("The message is:\n");
    printf("%s", message);  //print a string

    return 0;
}

/*
The message is:
heLLo frog
*/
