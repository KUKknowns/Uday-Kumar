//simple demo of conditional statements
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	//1. if statements
/*	if(age >= 18)
	{
		printf("\nAllowed to vote..");
	}
	if(age < 18)
	{
		printf("\nCan't vote!!");
	}*/
	
	//2. if-else statement
/*	if(age >= 18)
	{
		printf("\nAllowed to vote..");
	}
	else
	{
		printf("\nCan't vote!!");
	}*/
	
	//3. if else if ladder
	if(age >= 18)
	printf("\nAllowed to vote");
	
	else if(age < 18)
	printf("\nCan't vote..");
	
	return 0;
}
