#include <stdio.h>

void print_message(char s[])  //"s" is the array that receives the message
{
    int i = 0;

    while(s[i] != '\0')
    {
        putchar(s[i]);  //similar to printf("%c", s[i]);
        i++;
    }
}

int main()
{
    char message[] = "To C or not to C. That is the question.";

    print_message(message);  //pass the "message" to the function print_message()
    printf("\n");

    return 0;
}

/*
To C or not to C. That is the question.
*/
