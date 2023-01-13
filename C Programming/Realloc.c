//REALLOC()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1, n2, i;
	int *ptr;
	
	printf("How many elements ? ");
	scanf("%d",&n1);
	
	ptr = (int *)malloc(n1 * sizeof(int));
	printf("\nAddress of %d numbers:\n",n1);
	for(i=0; i<n1; i++)
	{
		printf("%d\n",ptr+i);
	}
	
	printf("\nHow many elements now ? ");
	scanf("%d",&n2);
	ptr = realloc(ptr, n2 * sizeof(int));
	//re-allocating memory of ptr
	
	printf("\nNew address of %d elements:\n", n2);
	for(i=0; i<n2; i++)
	{
		printf("%d\n",ptr+i);
	}
	return 0;
}
