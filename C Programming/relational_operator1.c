//Using relational operator with if statement
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age >= 18)
	printf("Vote now!!");
	
	if(age < 18)   //else
	printf("Can't vote...");
	
	return 0;
}


