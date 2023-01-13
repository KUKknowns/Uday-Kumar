//Call by reference: swapping(original values get changed)
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter the 2 numbers: ");
	scanf("%d %d",&num1,&num2);
	
	printf("\nBefore Swapping, num1 = %d anmd num2 = %d",num1, num2);
	
	swapping(&num1, &num2);  //Function call by reference: actual args
	printf("\nAfter Swapping, num1 = %d and num2 = %d",num1, num2);
	return 0;
}

void swapping(int *a, int *b) //formal args
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
