#include <stdio.h>

int main()
{
    char * s = "Hello Frog";
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
    printf("\n");

    return 0;
}

/*
Hello Frog
*/
