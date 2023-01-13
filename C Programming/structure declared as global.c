//structure declared as global:no need to pass it in the function
#include<stdio.h>
struct student
{
	int reg_no;
	float cgpa;
};

struct student s1;  //s1 is global, i.e. available throuhght the program

void student_info();  //function declaratin

int main()
{
	s1.reg_no = 12101916;
	s1.cgpa = 8.0;
	
	student_info(); //function calling accepting address of structure variable s1
	return 0;
}

void student_info()  //function definition
{ 
    printf("Your reg no is %d and CGPA is %.2f", s1.reg_no, s1.cgpa);
}

