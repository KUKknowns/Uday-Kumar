// Relational Operators
#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("Enter the values of 3 numbers: ");
	scanf("%d %d %d",&num1, &num2, &num3);
	
	printf("\nNum1 = %d\nNum2 = %d\nNum3 = %d", num1, num2, num3);
	
	printf("\nNUM1 > NUM2 ??: %d", (num1 > num2));
	printf("\nNUM2 < NUM3 ??: %d", (num2 < num3));
	printf("\nNUM1 >= NUM3 ??: %d", (num1 >= num3));
	printf("\nNUM3 <= NUM2 ??: %d", (num3 <= num2));
	printf("\nNUM2 == NUM3 ??: %d", (num2 == num3));
	printf("\nNUM1 != NUM2 ??: %d", (num1 != num2));
	
	return 0;
}
