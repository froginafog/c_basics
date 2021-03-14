#include <stdio.h>

int main()
{
    int i;
    int j;

    int A[3][5] = {
                   {11, 12, 13, 14, 15},
                   {21, 22, 23, 24, 25},
                   {31, 32, 33, 34, 35}
                  };
    //create a matrix (called A) which has 3 rows and 5 columns

    //loop through each element of the matrix
    for(i = 0; i < 3; i++)  //i is the row index
    {
        for(j = 0; j < 5; j++)  //j is the column index
        {
            printf("%d ", A[i][j]);  //print the element of A located on the i-th row and j-th column
        }
        printf("\n-----------------------------\n");
    }

    return 0;
}

/*
11 12 13 14 15
-----------------------------
21 22 23 24 25
-----------------------------
31 32 33 34 35
-----------------------------
*/
