#include<stdio.h>
#include<string.h>
int main()
{
	int r,c,p,q,i,j;
	printf("enter row and column for the first matrix");
	scanf("%d%d",&r,&c);
		printf("enter row and column for second matrix");
	scanf("%d%d",&p,&q);
	int a[r][c],b[p][q],k[r][c];
	if(r==p&&c==q)
	{
		printf(" for first matrix");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{


				
			printf("enter number for first matrix");

			scanf("%d",&a[i][j]);
		}}
			printf("enter number for second matrix");
			for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
		    scanf("%d",&b[i][j]);
			
		}}
		   	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
			k[i][j]=a[i][j]+b[i][j];
			printf("%d",k[i][j]);
			}
				//hi
			printf("\n");
		}
	}
}
	
	
