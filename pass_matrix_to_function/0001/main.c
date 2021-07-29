#include <stdio.h>

void print_matrix(int A[][5], int num_rows, int num_columns)
{
	for(int i = 0; i < num_rows; i++)
	{
		for(int j = 0; j < num_columns; j++)
		{
			printf("%5d", A[i][j]);
		}
		printf("\n");
	}
}	

void modify_matrix(int A[][5], int num_rows, int num_columns)
{
	for(int i = 0; i < num_rows; i++)
	{
		for(int j = 0; j < num_columns; j++)
		{
			A[i][j] = A[i][j] * 10;
		}
	}
}	

int main()
{
	int A[][5] = {{11, 12, 13, 14, 15},
				  {21, 22, 23, 24, 25},
				  {31, 32, 33, 34, 35}
				 };
	
	printf("A:\n");
	print_matrix(A, 3, 5);
	printf("------------------------------\n");
	modify_matrix(A, 3, 5);
	printf("A:\n");
	print_matrix(A, 3, 5);

	return 0;
}

/*
A:
   11   12   13   14   15
   21   22   23   24   25
   31   32   33   34   35
------------------------------
A:
  110  120  130  140  150
  210  220  230  240  250
  310  320  330  340  350
*/
