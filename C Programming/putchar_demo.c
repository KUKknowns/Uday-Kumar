//putchar() demo
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	ch = getchar();  //taking input from user for 1 character only
	
	//printf("Character entered by you: %c",ch);
	printf("\nCharacter entered by you: ");
	putchar(ch); //display the input given by you
	
	return 0;
}
