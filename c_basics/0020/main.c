#include <stdio.h>

int main()
{
	char choice;

	choice = 'C';

	switch(choice)
	{
        case 'A':  //if(choice == 'A')
            printf("The choice is menu A.\n");
            printf("It includes a drink, some fries, and a burger\n");
            break;
        case 'B':  //else if(choice == 'B')
            printf("The choice is menu B.\n");
            printf("It includes a drink, some fries, a burger, and a soup.\n");
            break;
        case 'C':  //else if(choice == 'C')
            printf("The choice is menu C.\n");
            printf("It includes a drink, some fries, a burger, a soup, and a salad.\n");
            break;
        case 'D':  //else if(choice == 'D')
            printf("The choice is menu D.\n");
            printf("It includes a drink, some fries, a burger, a soup, a salad, and a desert.");
            break;
        default:  //else
            printf("invalid choice");
	}

	return 0;
}

/*
The choice is menu C.
It includes a drink, some fries, a burger, a soup, and a salad.
*/
