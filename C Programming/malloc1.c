//MALLOC() DEMO SUM OF N NUMBERS
#include<stdio.h>
#include<stdlib.h>  
int main()
{
	int n, sum = 0, i;
	printf("Enter the  number of elements: ");
	scanf("%d",&n);
	
	int *ptr;
	ptr = (int *)malloc(n * sizeof(int));
	if(ptr == NULL)
   {
	printf("No memory allocated");
   }
   else
   {
   	printf("\nMemory allocation done!");
   	printf("\n%d elements are:\n",n);
   	for(i=0; i<n; i++)  //for(i=1; i<=n; i++)
   	{
   		ptr[i] = i+1;  //ptr[i-1] = i;
   	
	}
	for(i=0; i<n; i++)
	{ 
	   printf("%d",ptr[i]);
	}
   }
   return 0;
}
