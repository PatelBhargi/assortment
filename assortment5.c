#include<stdio.h>

main()
{
	int a[10][10],r,c,b[10][10],i,j;
	printf("enter number of row of matrix A:");
	scanf("%d",&r);
	printf("enter number of colums of matrix A:");
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("enter element [%d][%d] of matrix A:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
		
}
