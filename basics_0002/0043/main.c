#include <stdio.h>

int main()
{
    char * s = "Hello Frog Bye Frog";

    while(*s != '\0')
    {
        putchar(*s);
        s++;
    }

    printf("\n");

    return 0;
}

/*
Hello Frog Bye Frog
*/
