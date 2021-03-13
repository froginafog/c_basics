#include <stdio.h>

void print_message_sentence_by_sentence(char s[])  //"s" is the array that receives the message
{
    int i = 0;

    while(s[i] != '\0')
    {
        putchar(s[i]);
        if(s[i] == '.')
        {
            putchar('\n');
            if(s[i+1] == ' ')  //To skip the blank space after each period
            {
                i++;
            }
        }
        i++;
    }
}

int main()
{
    char message[] = "To C or not to C. That is the question. To C++ or not to C++. That is the next question.";

    print_message_sentence_by_sentence(message);  //pass the "message" to the function print_message()
    printf("\n");

    return 0;
}

/*
To C or not to C.
That is the question.
To C++ or not to C++.
That is the next question.
*/
