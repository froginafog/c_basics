#include <stdio.h>
#include <stdlib.h> //to use malloc() and free()
#include <string.h> //to use strcpy()

int main()
{
	char * source = "ABC DEF GHI JKL MNO PQR STU";
	printf("source: %s\n", source);

	int n; //number of characters
	n = strlen(source);
	printf("n: %d\n", n);

	char * copy = (char*)malloc(n*sizeof(char));  //allocate memory for storing "n" characters in "copy"
	strcpy(copy, source);  //copy the content of "source" into "copy"
	printf("copy  : %s\n", copy);

	free(copy);  //free the memory allocated to copy
	printf("free(copy)\n");
	printf("copy  : %s", copy);

	return 0;
}

/*
source: ABC DEF GHI JKL MNO PQR STU
n: 27
copy  : ABC DEF GHI JKL MNO PQR STU
free(copy)
copy  :
*/
