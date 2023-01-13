//Display your name using the concept of array
#include<stdio.h>
int main()
{
	char name[] = "Mehak";
	printf("My name is : %s",name);  //not %c
	
	char city[50];
	printf("\nEnter your city: ");
	scanf("%s", city);
	
	printf("You belong to %s",city);
	return 0;
}
