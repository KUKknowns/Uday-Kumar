//checking the number for even or odd using functions
#include<stdio.h>
int main()
{
	int num, result = 0;
	printf("Enter the number: ");
	scanf("%d",&num);  
	
	result = even_odd(num);   //function calling, num-> actual argument 
	if(result == 0)  
		printf("\n%d is ODD", num);
	else
		printf("\n%d is EVEN", num);
		
	return 0;
}

int even_odd(int x)   //function declaration/prototype & definition
{       //x-> formal argument
	if(x%2 == 0)  
		return 1;
	else
		return 0;
}
