#include<stdio.h>
int main()
{
	int n,m,d;
	printf("enter the matrix size n,m: ");
	scanf("%d %d",&n,&m);
	int i,j,a[n][m],b[n][m],c[n][m],r1,r2,c1,c2;
	printf("enter matrix elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
			c[i][j]=a[i][j];
		}
	}
	printf("enter the rows to be changed:\n");
	scanf("%d %d",&r1,&r2);
	printf("enter the colomuns to be changed:\n");
	scanf("%d %d",&c1,&c2); 
	r1=r1-1;
	r2=r2-1;
	c1=c1-1;
	c2=c2-1;
	for(i=0;i<n;i++)
	{
		d=b[r1][i];
		b[r1][i]=b[r2][i];
		b[r2][i]=d;
	}
	for(i=0;i<m;i++)
	{
		d=c[i][c1];
		c[i][c1]=c[i][c2];
		c[i][c2]=d;
	}
	printf("row interchanged matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("colomun interchanged matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
