#include <stdio.h>

int main()
{
    char * s = "Hello Frog";  //create a pointer s which points to the first character in in the string
    //now s stores a sequence of memory addresses

    while(*s != '\0')
    {
        printf("s : %p \n", s);  //print the address at which s currently points to
        printf("*s: %c \n", *s);   //print the value stored in the address at which s currently points to
        s++;  //let the pointer s point to the next element in the string
    }
    printf("\n");

    return 0;
}

/*
s : 0x5614554ed004 
*s: H 
s : 0x5614554ed005 
*s: e 
s : 0x5614554ed006 
*s: l 
s : 0x5614554ed007 
*s: l 
s : 0x5614554ed008 
*s: o 
s : 0x5614554ed009 
*s:   
s : 0x5614554ed00a 
*s: F 
s : 0x5614554ed00b 
*s: r 
s : 0x5614554ed00c 
*s: o 
s : 0x5614554ed00d 
*s: g 
*/
