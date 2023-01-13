//factorial of a number using recursion
#include<stdio.h>
int main()
{
	int n;
	printf("Whose factorial you want to calculate? ");
	scanf("%d",&n); 
	
	printf("\nFactorial of %d = %d",n, factorial(n)); //function call
	return 0;
}

int factorial(int num)  //function declaration & definition
{  
	if(num >= 1)   
		return num * factorial(num-1);   //recursive function call
	else
		return 1;
}

