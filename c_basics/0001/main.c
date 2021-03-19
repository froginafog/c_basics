#include <stdio.h> //this is for using printf()

//this is a comment

/*
this is also a comment
*/

//comments are non-executable
//comments are used to explain what the code does

int main()
{
	//"int" stands for integer
	//an integer is a whole number (for example, ..., -2, -1, 0, 1, 2, ...)
	printf("Hello Frog\n");  //print the message "Hello Frog" and go to the next line
	printf("Bye ");   //print the word "Bye" without going to the next line
	printf("Frog\n");  //print the word "Frog" and go to the next line
	
	//'\n' means go to the next line after the message is printed

	return 0;  //return the value 0 (as an integer) to the main() function
	           //the details are not important for now
}

//The following is the output:
/*
Hello Frog
Bye Frog
*/
