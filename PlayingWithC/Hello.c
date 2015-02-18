#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MYCONSTANT "This cannot ever be changed!"

//Prints "Hello World", and other stuff...

long factorial(int num)
{
	if(num < 0)
	{
		printf("Invalid number \n");
		return 0;
	}
	if(num == 1 || num == 0)
	{
		return 1;
	}
	else return num*factorial(num-1);
}

long fib(int num)
{
	if(num<1)
	{
		printf("Invalid input, please try again.");
	}
	if(num == 1 || num == 2)
			{
		return 1;
			}
	else return fib(num-1) + fib(num-2);
}

int main()
{
	setbuf(stdout, NULL); //Disabled the buffer

	//##############################################################################
	int blah = 20; //Defining variables
	printf("Hello world \n");
	printf("%d \n", blah);

	char alist[6] = "potato"; //Creating an array of 6 bytes
	printf("I like %s \n", alist);
	strcpy(alist, "sushi"); //Replaces potato with sushi
	printf("I like %s \n", alist);

	printf("Can a constant be changed? %s \n", MYCONSTANT); //Uses the predefined constant string

	//##############################################################################
	/*
	//For the sake of running the other stuff....

	char user[20];
	char pass[20];
	int age;

	printf("Enter your username...\n"); //Print statement for a prompt
	scanf("%s", user); //Whatever the user types, it is stored in 'user' as a string

	printf("Enter your password...\n");
	scanf("%s", pass);

	printf("Enter your age...\n");
	scanf("%d", &age); //Remember to add a '&' to any variable that doesn't have pointers (array)

	printf("Hi %s, you are %d years old and your password, %s, is now all over the Internet! :) \n", user, age, pass);
	*/

	//##############################################################################
	int dogs = 40;
	int cats = 42;
	int rabbits = 99;
	float avgcost = ((float)dogs+(float)cats+(float)rabbits)/3; //Typecasting, put data type in front to temp change it.

	printf("The average cost of these animals is %.2f dollars. \n", avgcost);

	//##############################################################################
	int seven = 7;
	if(seven > 3) //If-else statement (If there are only 1 other outcome, you don't need {}
	{
		printf("Hooray, 7 is greater than 3 \n");
	}
	else printf("Oh no!  ANARCHY \n");

	//##############################################################################
	int fact_num;
	printf("Enter a number...\n");
	scanf("%d", &fact_num);

	long fact = factorial(fact_num);
	if(fact != 0)
	{
	printf("%d factorial is %lu \n", fact_num, fact); //%lu for unsigned long
	}

	//##############################################################################
	int fibnum = fib(7);
	printf("The 7th number in the Fibonacci sequence is %d \n", fibnum);

	//##############################################################################
	int legalage;
	printf("Enter your age. \n");
	scanf("%d", &legalage);

	(legalage >= 18) ? printf("Welcome to the Salty Spitoon, how tough are ya? \n") : printf("Get out scrub. \n");
	//Shorthand if-else statement (test code) ? true case : false case;

	return 0;
}



