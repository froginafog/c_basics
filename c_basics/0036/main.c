#include <stdio.h>

int main()
{
    int i;
    int j;

    printf("ENTERING the OUTER loop\n");
    for(i = 0; i < 3; i++)  //outer loop
    {
        printf("ENTERING the INNER loop\n");
        for(j = 0; j < 3; j++)  //inner loop
        {
            printf("i: %d , j = %d\n", i, j);
        }
        printf("LEAVING the INNER loop\n");
    }
    printf("LEAVING the OUTER loop");

    //We first enter the outer loop.
    //Then we enter the inner loop.
    //When the inner loop is ended (when j < 3), we leave the inner loop and continue with the outer loop.

    //The outer loop ends when i = 3.

    return 0;
}

/*
ENTERING the OUTER loop
ENTERING the INNER loop
i: 0 , j = 0
i: 0 , j = 1
i: 0 , j = 2
LEAVING the INNER loop
ENTERING the INNER loop
i: 1 , j = 0
i: 1 , j = 1
i: 1 , j = 2
LEAVING the INNER loop
ENTERING the INNER loop
i: 2 , j = 0
i: 2 , j = 1
i: 2 , j = 2
LEAVING the INNER loop
LEAVING the OUTER loop
*/
