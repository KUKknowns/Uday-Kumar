//Pointer to the structure
#include<stdio.h>
struct employee
{
	int emp_ID;
	float salary;
};
int main()
{
	struct employee e; //Structure variable
	struct employee *em; //Pointer to structure
	printf("Enter Employee data: ");
	scanf("%d %f",&e.emp_ID, &e.salary);
	
	em = &e;  //Pointer em is having address of e variable
	printf("The employee data :\n");
    printf("ID of employee = %d\n",em->emp_ID);
	printf("Salary of employee = %.3f", em->salary);
	
	return 0;	
}
