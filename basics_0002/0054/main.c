#include <stdio.h>

int main()
{
    int numbers[5];
    int i;

    printf("Enter 5 integers: ");

    i = 0;
    while(i < 5)
    {
        scanf("%d", &numbers[i]);
        i++;
    }

    printf("The numbers are: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

/*
Enter 5 integers: 10 20 30 40 50
The numbers are: 10 20 30 40 50
*/
