#include <stdio.h>

int main()
{
    int a;
    int b;
     
    a = 10;
    b = 5;

    //only the first comparison that evaluates as "true" matters
    //the subsequent comparisons that evaluate as "true" are ignored

    if(a < b)
    {
        printf("a is LESS than b\n");
    }
    else if(a <= b)
    {
        printf("a is LESS than or EQUAL to b\n");
    }
    else if(a == b)
    {
        printf("a is EQUAL to b\n");
    }
    else if(a >= b)
    {
        printf("a is GREATER than or EQUAL to b\n");
    }
    else //a > b is the only option left
    {
        printf("a is GREATER than b\n");
    }

    //the last statement
    //printf("a is GREATER than b\n");
    //even though it is true, did not get executed because another statement before it was executed first

    //the decision is made based on the comparison between 2 numbers (stored in a and b)
    //the decision is NOT made based on the context of the statement in printf("context")

    return 0;
}

/*
a is GREATER than or EQUAL to b
*/
