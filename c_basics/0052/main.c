#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a message: ");

    ch = getchar();  //read a character from the input stream (keyboard) and store it in ch
    while(ch != '\n')  //break the loop when the user presses enter
    {
        putchar(ch);  //put the character stored in 'ch' to the screen
        ch = getchar();
    }
    putchar('\n');

    return 0;
}

/*
Enter a message: Hello Frog Bye Frog
Hello Frog Bye Frog
*/
