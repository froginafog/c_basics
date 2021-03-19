#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int num_bytes;  //number of bytes of memory occupied by "numbers"
    int num_bytes_per_element;  //number of bytes of memory occupied by each element of "numbers"
    int num_elements;  //number of elements in "numbers"
    //in this case, each element is a character (including '\0')

    num_bytes = sizeof(numbers);
    printf("num_bytes: %d\n", num_bytes);
    num_bytes_per_element = sizeof(numbers[0]);
    printf("num_bytes_per_element: %d\n", num_bytes_per_element);
    num_elements = num_bytes/num_bytes_per_element;
    printf("num_elements: %d\n", num_elements);

    //an integer occupies more memory than a character

    return 0;
}

/*
num_bytes: 20
num_bytes_per_element: 4
num_elements: 5
*/
