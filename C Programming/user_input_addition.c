// Adding user defined numbers
#include<stdio.h>
int main()
{
	double a, b;   //6 decimal places
	
	printf("Enter the value of a: ");
	scanf("%lf", &a);
	
	printf("Enter the value of b: ");
	scanf("%lf", &b);
	
	double sum = a+b;

	printf("a+b= %lf", sum);
	return 0;
}
