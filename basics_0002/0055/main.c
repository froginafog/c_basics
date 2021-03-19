#include <stdio.h>

int main()
{
    char word_1[30];
    char word_2[30];
    char word_3[30];

    printf("Enter 3 words: ");
    scanf("%s %s %s", word_1, word_2, word_3);
    printf("word_1: %s\n", word_1);
    printf("word_2: %s\n", word_2);
    printf("word_3: %s\n", word_3);

    return 0;
}

/*
Enter 3 words: frog cat goat
word_1: frog
word_2: cat
word_3: goat
*/
