//MALLOC() DEMO
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i;
	int *ptr;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	ptr = (int *)malloc(n * sizeof(int));
    printf("\nptr = %d",ptr);
    if(ptr == NULL)
    {
    	printf("No memory allocation done!");
    	exit(0);
	}
	else
	{
		printf("\nMemory allocation done!");
		printf("\nNow enter %d elements", n);
		for(i=0; i<n; i++)
		{
			ptr[i] = i+1;
		}
		printf("\nElements are: ");
		for(i=0; i<n; i++)
		{
			printf("%d ", ptr[i]);
		}
	}
	return 0;
}
