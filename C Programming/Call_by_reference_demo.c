//Call by reference: address of actual parameter passed during function call
#include<stdio.h>
int increase(int *num);  // function declaration

int main()
{
	int a = 90;
	printf("\nOriginal value of a = %d", a);
	
     //Function Call by reference, where a: actual arg
	printf("\nIncreased value of a = %d", increase(&a));
	return 0;
}

int increase(int *num)  //function definition: num is formal arg
{
	//*num : pointer holding the address of a
	*num = *num+1;
	return *num;
}
