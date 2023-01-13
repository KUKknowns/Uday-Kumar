//DANGLING POINTER DEMO
#include<stdio.h>
int main()
{
	int a = 800;
	int *ptr = &a;  //pointer decl & init
	
	printf("Address of a through pointer = %d", ptr);
	
	free(ptr);  //de-allocating the memory, DANGLING SITUATION
	            //hence, ptr is a dangling pointer
	            
	//printf("\nAddress of a after de-allocation = %d", ptr);
	
	*ptr = NULL;   //solution of dangling situation
	               //solution: make ptr as NULL pointer
	printf("\nAddress of a after proper de-alloaction = %d", ptr);
	return 0;
}
