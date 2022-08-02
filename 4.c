#include<stdio.h>
int main()
{
	int m1,n1,m2,n2,k;
	printf("enter dimensions of first matrices : ");
	scanf("%d %d",&n1,&m1);
	printf("enter dimensions of second matrix: ");
	scanf("%d %d",&n2,&m2);
	int a[n1][m1],i,j,b[n2][m2],c[n1][m2];
	printf("enter elements of first matrix: \n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of second matrix: \n");
	for(i=0;i<n2;i++)
	{
		for(j=0;j<m2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m2;j++)
		{
			c[i][j]=0;
			for(k=0;k<n1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n1;i++)
	{
	for(j=0;j<m2;j++)
	{
	printf("%d ",c[i][j]);
	}
	printf("\n");
	}		
}
