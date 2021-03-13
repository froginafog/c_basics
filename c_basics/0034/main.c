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

int main()
{
    char message[] = "To C or not to C.";  //17 characters
    int num_characters;

    num_characters = count_number_of_characters(message);
    printf("num_characters: %d\n", num_characters);

    return 0;
}

/*
num_characters: 17
*/
