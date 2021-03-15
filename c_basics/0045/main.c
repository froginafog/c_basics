#include <stdio.h>

int main()
{
    char s[] = "Hello Frog";
    char * p;

    p = &s[0]; //let p point to the address of the first element in s

    while(*p != '\0')
    {
        putchar(*p);
        p++;
    }
    printf("\n");

    return 0;
}

/*
Hello Frog
*/
