//Nested structure 
#include<stdio.h>
struct Her_data //main structure
{
	char gender;
	char name[20];
    int age;
    
    struct address  //nested/inner structure
    {
    	int h_no;
    	char lane[20];
    	char city[20];
    	int pin_code;
	}add;  //variable of nested structure
}d1;       //variable of main structure

int main()
{
	strcpy(d1.name, "Jaanu");
	d1.gender ='F';
	d1.age = 17;
	
	d1.add.h_no = 523;
	strcpy(d1.add.lane, "RK Theatre");
	strcpy(d1.add.city, "Gorantla");
	d1.add.pin_code = 515231;
	
	printf("Her data is:\n");
	printf("Name: %s",d1.name);
	printf("\nAge: %d",d1.age);
	printf("\nGender = %c",d1.gender);
	
	printf("\n\nAddress is:\n");
	printf("H.No: %d, %s, %s\n%d",
	       d1.add.h_no, d1.add.lane, d1.add.city,
		   d1.add.pin_code);
	
	
}
