#include <stdio.h>

int main()
{
    char * s = "Hello Frog";  //create a pointer s which points to the first character in in the string
    //now s stores a sequence of memory addresses

    while(*s != '\0')
    {
        printf("s : %d \n", s);  //print the address at which s currently points to
        printf("*s: %c \n", *s);   //print the value stored in the address at which s currently points to
        s++;  //let the pointer s point to the next element in the string
    }
    printf("\n");

    return 0;
}

/*
s : 1489276932
*s: H
s : 1489276933
*s: e
s : 1489276934
*s: l
s : 1489276935
*s: l
s : 1489276936
*s: o
s : 1489276937
*s:
s : 1489276938
*s: F
s : 1489276939
*s: r
s : 1489276940
*s: o
s : 1489276941
*s: g
*/
