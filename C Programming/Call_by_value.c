//Call by value: swapping 2 numbers(no swapping happens)
#include<stdio.h>
void swapping(int a, int b)  //function declaration & definition
{   //a&b: formal arguments containing the copied values of num1 & num2
	int temp;  
	temp = a;   
	a = b;     
	b = temp;  
	//printf("\nValues of a and b =  %d and %d",a, b);
	//swapping happend for formal args. only
}

int main()
{
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1, &num2); 
	
	printf("\nBefore swapping, num1 = %d and num2 = %d",num1, num2);
	
	swapping(num1, num2);  //Function Call by value: num1&num2: actual arguments
	printf("\nAfter swapping, num1 = %d and num2 = %d",num1, num2); 
	return 0;
}

