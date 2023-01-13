/*  1
    2 2
    3 3 3 
    4 4 4 4   */
#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	
	int i, j;
	for(i=1; i<=rows; i++)  //i:row number
	{
		for(j=1; j<=i; j++)   //j:column number
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
