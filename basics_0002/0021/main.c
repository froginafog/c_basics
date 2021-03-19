#include <stdio.h>

//define a function called "print_messages"
void print_messages()  //void means that this function does not return any value
{
    printf("Hello Frog\n");
    printf("Today is a rainy day.\n");
    printf("Bye Frog\n");
}

int main()
{
    printf("start of the program\n");
    print_messages(); //call the function "print_messages"
    printf("end of the program\n");

    return 0;
}

/*
start of the program
Hello Frog
Today is a rainy day.
Bye Frog
end of the program
*/
