#include <stdio.h>

struct Box
{
	double width;
	double length;
	double height;
}box1, box2;

int main()
{
	box1.width = 1.1;
	box1.length = 2.2;
	box1.height = 3.3;
	
	box2.width = 4.4;
	box2.length = 5.5;
	box2.height = 6.6;
	
	printf("box1.width: %lf\n", box1.width);
	printf("box1.length: %lf\n", box1.length);
	printf("box1.height: %lf\n", box1.height);
	
	printf("-------------------------------\n");
	
	printf("box2.width: %lf\n", box2.width);
	printf("box2.length: %lf\n", box2.length);
	printf("box2.height: %lf\n", box2.height);
	
	return 0;
}

/*
box1.width: 1.100000
box1.length: 2.200000
box1.height: 3.300000
-------------------------------
box2.width: 4.400000
box2.length: 5.500000
box2.height: 6.600000
*/

