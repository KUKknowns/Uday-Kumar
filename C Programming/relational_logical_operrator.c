//Assign grades to students on the basis of CGPA
/*   cgpa >= 9, then grade = A
     cgpa >= 8 but less than 9, grade = B
     cgpa >= 7 but less than 8, grade = C
     cgpa < 7, then grade = D  */
     
#include<stdio.h>
int main()
{
	float cgpa;
	printf("Enter your CGPA: ");
	scanf("%f",&cgpa);
	
	if(cgpa >= 9.0)
	printf("Your GRADE = A");
	
	else if(cgpa >= 8.0 && cgpa < 9.0)
	printf("Your GRADE = B");
	
	else if(cgpa >= 7.0 && cgpa < 8.0)
	printf("Your GRADE = C");
	
	else
	printf("Your GRADE = D");
}
