//multiple variables of structure
#include<stdio.h>
#include<string.h>
struct employee_data

{
	char name[20];
	int emp_id;
	char desig[20];
	float salary;
}e1, e2;

int main()
{
	//storing first employee's data
	strcpy(e1.name, "Rajesh");
	e1.emp_id = 1001;
	strcpy(e1.desig, "Developer");
	e1.salary = 50000.500;
	
		//storing second employee's data
	strcpy(e2.name, "Suresh");
	e2.emp_id = 1201;
    strcpy(e2.desig, "Tester");
	e2.salary = 52000.100;
	
	printf("\nDetails of 1st employee:\n");
	printf("Name: %s\nEmp_ID: %d\nDesignation: %s\nSalary: %.3f",
	            e1.name, e1.emp_id, e1.desig, e1.salary);
	            
	printf("\nDetails of 2nd employee:\n");
	printf("Name: %s\nEmp_ID: %d\nDesignation: %s\nSalary: %.3f",
	            e2.name, e2.emp_id, e2.desig, e2.salary);
    return 0;
	         
}
