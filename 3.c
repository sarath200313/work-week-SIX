#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("enter dimensions of matrices: ");
	scanf("%d %d",&n,&m);
	int a[n][m];
	printf("matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			a[i][j]=0;
			else if(i<j)
			a[i][j]=1;
			else
			a[i][j]=-1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
