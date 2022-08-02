#include<Stdio.h>
int main()
{
	int m,n,c=0;
	printf("enter dimensions of matrices: ");
	scanf("%d %d",&n,&m);
	int a[n][m],i,j;
	printf("enter elements of matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c=c+a[i][j];
		}
	}
	printf("sum of elements is %d",c);
}
