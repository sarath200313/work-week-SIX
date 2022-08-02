#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the order of the matix:\n");
	scanf("%d %d",&m,&n);
	int a[m][n],i,j,dig=0,rem=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			dig=dig+a[i][j];
			else
			rem=rem+a[i][j];
		}
	}
	printf("sum of diagonal elements is: %d\nsum of the off diagonal elements is: %d\n",dig,rem);
}
