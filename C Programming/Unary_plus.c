//Unary opeartors: +,-,++,--
#include<stdio.h>
int main()
{/*
	int x = +4;   //unary + operator
	printf("Value of -x = %d",-x);
	
	int z = -10;   //unary - operator
	printf("\nValue of -z = %d\n", -z);  //-(-10)
	
	//Address of a variable can be calculated using &
	//format specifier can be: %x or %d 
	printf("Address of x and z respectively are: %d %d",&x,&z);  */
	
	int a = 100;
	printf("Pre-increment value of a, ++a = %d\n",++a); //++100 = 101
	printf("Post-increment value of a, a++ = %d\n",a++);//101++ = 101
	
	printf("Pre-decrement value of a, --a = %d\n",--a); //--102 = 101
	printf("Post-decrement value of a, a-- = %d",a--); //101-- = 101
	
	return 0;
}
