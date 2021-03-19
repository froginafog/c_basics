#include <stdio.h>

int main()
{
    printf("%c %c %c %c", 'f', 'r', 'o', 'g'); //print "f r o g" to the screen
    printf("\n"); //go to the next line
    printf("----------------------------\n");  //print dashes to makes the output more obvious
    printf("%c%c%c%c", 'f', 'r', 'o', 'g'); //print "frog" to the screen
    printf("\n"); //go to the next line

    //%c means format character
    //each %c is associated with 1 character

    return 0;
}


/*
f r o g
----------------------------
frog
*/
