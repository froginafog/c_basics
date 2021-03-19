#include <stdio.h>

int main()
{
    char message[] = {'h', 'e', 'l', 'l', 'o', ' ', 'f', 'r', 'o', 'g', '\0'};
    char word_1[6];  //to store the word "hello" (1 additional space reserved for '\0')
    char word_2[5];  //to store the word "frog" (1 additional space reserved for '\0')

    int i;  //index for "message"
    int k1;  //index for "word_1"
    int k2;  //index for "word_2"

    i = 0;
    k1 = 0;
    k2 = 0;
    while(message[i] != '\0')  //this loop is for decomposing the message into 2 separate words
    {
        if(i < 5)
        {
            word_1[k1] = message[i];
            k1++;
        }

        if(i == 5)
        {
            word_1[k1] = '\0';
        }

        if(i > 5)
        {
            word_2[k2] = message[i];
            k2++;
        }

        if(i == 10)
        {
            word_2[k2] = '\0';
        }
        i++;
    }

    printf("word_1: %s\n", word_1);
    printf("word_2: %s\n", word_2);

    return 0;
}

/*
word_1: hello
word_2: frog
*/
