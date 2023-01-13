//Array of structures
#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[20];
};
int main()
{
	int i;
	struct student record[8];
	//1st student's data
	record[0].roll_no = 101;
	strcpy(record[0].name, "Suraj");
	
	//2nd student's data
	record[1].roll_no = 102;
	strcpy(record[1].name, "Kaushal");
	
	//3rd student's data
	record[2].roll_no = 103;
	strcpy(record[2].name, "Neeraj");
	
	for(i=0; i<3; i++)
	{
		printf("Record of %d student\n", i+1);
		printf("Roll No: %d \nName: %s\n", record[i].roll_no, record[i].name);
	}
	return 0;

}   

