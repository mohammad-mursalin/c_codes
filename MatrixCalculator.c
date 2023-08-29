//Program for multupliction of two matrix
/* Here m1 stands for first matrix,m2 is second matrix, and 
 result is the multiplication of the two matrixs.Also r1,c1,
 r2,and c2 stands for row and column of the first matrix and
  second matrix respectively */
  
#include<stdio.h>
int main()
{
	int m1[10][10],m2[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;
	
	printf("Enter the number of rows and columns for first matrix : ");
	scanf("%d %d",&r1,&c1);
	printf("Enter the number of rows and columns for second matrix : ");
	scanf("%d %d",&r2,&c2);
	
	while(c1!=r2)
	{
		printf("Number of c1 and r2 must be equal\n");
		printf("Enter the number of rows and columns for first matrix : ");
	    scanf("%d %d",&r1,&c1);
	    printf("Enter the number of rows and columns for second matrix : ");
	    scanf("%d %d",&r2,&c2);
	}
	
	printf("\nValues for the first matrix\n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("m1[%d][%d]= ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("\nValues for the second matrix\n");
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("m2[%d][%d]= ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				sum=sum+m1[i][k]*m2[k][j];
			}
			result[i][j]=sum;
			sum=0;
		}
	}
	
	printf("\nm1=");
	
	for(i=0;i<r1;i++)
	{
		printf("\t");
		
		for(j=0;j<c1;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nm2=");
	for(i=0;i<r2;i++)
	{
		printf("\t");
		
		for(j=0;j<c2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nresult=");
	for(i=0;i<r1;i++)
	{
		printf("\t");
		
		for(j=0;j<c2;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	
	getch();
	
}