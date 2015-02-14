#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MYCONSTANT "This cannot ever be changed!"

//Prints "Hello World", and other stuff...

int main()
{
	int blah = 20; //Defining variables
	printf("Hello world \n");
	printf("%d \n", blah);

	char alist[6] = "potato"; //Creating an array of 6 bytes
	printf("I like %s \n", alist);
	strcpy(alist, "sushi"); //Replaces potato with sushi
	printf("I like %s \n", alist);

	printf("Can a constant be changed? %s", MYCONSTANT); //Uses the predefined constant string


	return 0;
}
