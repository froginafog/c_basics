#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30  //define a macro for storing a constant
                            //now MAX_NAME_LENGTH has a value of 30

//create a structure
struct Person
{
    char name[MAX_NAME_LENGTH + 1];
    int age;
};

int main()
{
	struct Person person1 = {"Bob The Great", 22};
	//It knows that the first element is associated with "name"
	//and the second element is associated with "age".
	//It is in the order for which struct "Person" is defined.

	struct Person person2 = {"Mimi The Mighty", 33};

	printf("person1.name: %s\n", person1.name);
	printf("person1.age : %d\n", person1.age);
	printf("----------------------\n");
	printf("person2.name: %s\n", person2.name);
	printf("person2.age : %d\n", person2.age);

	return 0;
}

/*
person1.name: Bob The Great
person1.age : 22
----------------------
person2.name: Mimi The Mighty
person2.age : 33
*/
