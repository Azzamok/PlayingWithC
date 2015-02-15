#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MYCONSTANT "This cannot ever be changed!"

//Prints "Hello World", and other stuff...

int main()
{
	setbuf(stdout, NULL); //Disabled the buffer

	int blah = 20; //Defining variables
	printf("Hello world \n");
	printf("%d \n", blah);

	char alist[6] = "potato"; //Creating an array of 6 bytes
	printf("I like %s \n", alist);
	strcpy(alist, "sushi"); //Replaces potato with sushi
	printf("I like %s \n", alist);

	printf("Can a constant be changed? %s \n", MYCONSTANT); //Uses the predefined constant string

	char user[20];
	char pass[20];
	int age;

	/*
	printf("Enter your username...\n"); //Print statement for a prompt
	scanf("%s", user); //Whatever the user types, it is stored in 'user' as a string

	printf("Enter your password...\n");
	scanf("%s", pass);

	printf("Enter your age...\n");
	scanf("%d", &age); //Remember to add a '&' to any variable that doesn't have pointers (array)

	printf("Hi %s, you are %d years old and your password, %s, is now all over the Internet! :) \n", user, age, pass);
	*/

	int dogs = 40;
	int cats = 42;
	int rabbits = 99;
	float avgcost = ((float)dogs+(float)cats+(float)rabbits)/3; //Typecasting, put data type in front to temp change it.

	printf("The average cost of these animals is %.2f dollars. \n", avgcost);

	return 0;
}
