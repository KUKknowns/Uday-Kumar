//Simple demo for array input
#include<stdio.h>
int main()
{
	int arr[3];  //size of array = 3
	//1st way of array initialization
	arr[0] = 20;
	arr[1] = 45;
	arr[2] = 1;
	arr[3] = 100;
	
	printf("Array contents are: %d, %d, %d, %d",arr[0], arr[1], 
	                                            arr[2], arr[3]);
	                                            
	//2nd way of array initialization
	int xyz[4] = {1,90,56,34};
	int i;
	printf("\n2nd array contents are: \n");
	for(i=0; i<4; i++)
	{
		printf("%d ",xyz[i]);
	}	
	return 0;
 } 
