#include <stdio.h>

int main()
{
    char ch1;
    char ch2;

    ch1 = 'A';
    ch2 = 'B';

    printf("before swapping:\n");
    printf("ch1: %c\n", ch1);
    printf("ch2: %c\n", ch2);

    //We now put the value of ch1 into ch2 and the value of ch2 into ch1.
    char temp;  //temporary location to store 1 character

    temp = ch1;
    //ch1 = 'A', ch2 = 'B', temp = 'A'

    ch1 = ch2;
    //ch1 = 'B', ch2 = 'B', temp = 'A'

    ch2 = temp;
    //ch1 = 'B', ch2 = 'A', temp = 'A'

    printf("after swapping:\n");
    printf("ch1: %c\n", ch1);
    printf("ch2: %c\n", ch2);

    return 0;
}

/*
before swapping:
ch1: A
ch2: B
after swapping:
ch1: B
ch2: A
*/
