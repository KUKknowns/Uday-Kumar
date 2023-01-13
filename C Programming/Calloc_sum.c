/*Sum of n numbers, where numbers are dynamically allocated using 
CALLOC()  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n , i, sum = 0;
	int *ptr;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	ptr = (int *)calloc(n, sizeof(int));
	if(ptr == NULL)
	{
		printf("\nNo memory allocation done!");
		exit(0);
	}
	else
	{
		printf("\nEnter %d elements:",n);
		for(i=0; i<n; i++)
		{
			scanf("%d", ptr+i);
			sum = sum + *(ptr+i);
		}
		printf("\nSum of %d elements = %d", n, sum);
	}
	return 0;
}
