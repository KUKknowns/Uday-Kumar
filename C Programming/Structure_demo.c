//STRUCTURE DEMO
#include<stdio.h>
#include<string.h>

struct my_data
{
	int id;       //employee_id/ student_reg no
	char name[20];
	long long int phn_no;
} s1;   /*s1 is the structure variable used 
        to access the sructutre contents */

int main()
{
	//string my info
	s1.id = 12101916;
	strcpy(s1.name, "Kuruba Uday Kumar");
	s1.phn_no = 8897954182;
	
	//printing the info
	printf("My name is %s",s1.name);
	printf("\nMy ID is %d",s1.id);
	printf("\nMy Phone Number is %lld",s1.phn_no);
	return 0;
}
