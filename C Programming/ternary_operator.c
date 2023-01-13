//Ternary operator demo

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	//condition ? first(true) part : second(false) part;
	(age >= 18) ? printf("Drive!!") : printf("Don't dare!!");
	
	return 0;
}
