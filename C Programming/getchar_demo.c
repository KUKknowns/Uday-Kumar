//getchar() demo
#include<stdio.h>
int main()
{
	char x;
	printf("Enter your gender: ");
	//scanf("%c",&x);
	x = getchar();  //reads 1 character at a time
	
	printf("\nYour gender is %c",x);
	return 0;
}
