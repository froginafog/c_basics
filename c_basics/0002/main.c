#include <stdio.h>

int main()
{
	char ch1;  //declare a variable of the type char, the name of the variable is ch1
	char ch2;  //declare a variable of the type char, the name of the variable is ch2
	char ch3;  //declare a variable of the type char, the name of the variable is ch3
	char ch4;  //declare a variable of the type char, the name of the variable is ch4
	
	ch1 = 'f';  //assign the character 'f' to ch1
	ch2 = 'r';  //assign the character 'r' to ch2
	ch3 = 'o';  //assign the character 'o' to ch3
	ch4 = 'g';  //assign the character 'g' to ch3
	//single quotes are for storing 1 character at a time
	
	printf("%c", ch1);  //print the content stored in ch1 to the screen
	printf("%c", ch2);  //print the content stored in ch2 to the screen
	printf("%c", ch3);  //print the content stored in ch2 to the screen
	printf("%c", ch4);  //print the content stored in ch2 to the screen
	printf("\n");
	printf("----------1---------\n");
	printf("%c%c%c%c", ch1, ch2, ch3, ch4);
	printf("\n");
	printf("----------2---------\n");
	printf("%c %c %c %c", ch1, ch2, ch3, ch4);
	printf("\n");

	return 0;
}

//output:
/*
frog
----------1---------
frog
----------2---------
f r o g
*/
