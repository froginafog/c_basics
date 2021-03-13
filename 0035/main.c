#include <stdio.h>

int count_number_of_characters(char s[])
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }

    return i;  //i now holds the number of characters in string "s"
}

int print_message_reversed(char s[])
{
    int num_characters = count_number_of_characters(s);
    //we can call a function when we are already inside a function
    //afterall, main() is also a function

    int i = 0;

    while(s[i] != '\0')
    {
        putchar(s[num_characters - 1 - i]);  //we print "s" from last character to first character
        i++;
    }

    return i;
}

int main()
{
    char message[] = "To C or not to C.";  //17 characters
    int num_characters;

    print_message_reversed(message);

    return 0;
}

/*
.C ot ton ro C oT
*/
