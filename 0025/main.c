#include <stdio.h>

int main()
{
    //"%" is the remainder operator

    printf("The remainder of 7/3: %d\n", 7%3);  //7/3 = (3 + 3 + 1)/3 = 3/3 + 3/3 + 1/3 = 1 + 1 + 1/3 = 2 + 1/3 (remainder is 1)
    printf("The remainder of 6/3: %d\n", 6%3);  //6/3 = (3 + 3)/3 = 3/3 + 3/3 = 1 + 1 = 2 + 0/3 (remainder is 0)
    printf("The remainder of 5/3: %d\n", 5%3);  //5/3 = (3 + 2)/3 = 3/3 + 2/3 + 1 + 2/3 = (remainder is 2)

    return 0;
}

/*
The remainder of 7/3: 1
The remainder of 6/3: 0
The remainder of 5/3: 2
*/
