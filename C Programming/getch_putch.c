//getch() & putch() demo: use <conio.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Press any key to exit..");
	ch = getch();//doesnt display the key entered by you
	
	printf("\nYou have entered the below key for exit\n");
	putch(ch);   //display the entered key
	
	printf("\n\nEnter a key to exit: ");
	getche();  //display the character entered by you
	
	return 0;
}
