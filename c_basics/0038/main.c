#include <stdio.h>

int main()
{
    char word[] = {'f', 'r', 'o', 'g', '\0'};

    int num_bytes;  //number of bytes of memory occupied by "word"
    int num_bytes_per_element;  //number of bytes of memory occupied by each element of "word"
    int num_elements;  //number of elements in "word"
    //in this case, each element is a character (including '\0')

    num_bytes = sizeof(word);
    printf("num_bytes: %d\n", num_bytes);
    num_bytes_per_element = sizeof(word[0]);
    printf("num_bytes_per_element: %d\n", num_bytes_per_element);
    num_elements = num_bytes/num_bytes_per_element;
    printf("num_elements: %d\n", num_elements);

    return 0;
}

/*
num_bytes: 5
num_bytes_per_element: 1
num_elements: 5
*/
