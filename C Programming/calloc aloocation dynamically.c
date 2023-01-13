//sum of n numbers where numbers are dynamically allocated using calloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, sum = 0;
	int *ptr;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	ptr = (int *)calloc(n, sizeof(int));
	if(ptr == NULL)
	{
		printf("Memory allocation unsuccessfull!!");
	}
	else
	{
		printf("\nEnter %d elements: ",n);
		for(i=0; i<n; i++)
		{
			scanf("%d",ptr+i);
			sum = sum + *(ptr+i);
		}
		printf("\nSum of %d numbers = %d", n, sum);
	}
	free(ptr);
	return 0;
}
