#include <stdio.h>
int main()
{
	int row,col,rvar,k;
	scanf("%d %d",&row,&col);
	int a[row][col];
	int b[row][col];
	int c[row][col];
	for(int i=0; i<row;i++)
	{
		for(int j=0; j<col;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
			c[i][j]=a[i][j];
		}
	}
	printf("\n");
	
	for(int i=0;i<row;i++)
	{
		for(int j=1;j<col;j++)
		{
			rvar=b[i][j];
			for(k=j-1;k>-1;k--)
			{
				if(b[i][k]>rvar)
				{
					b[i][k+1]=b[i][k];
				}
				else
				{
					break;
				}
			}
			b[i][k+1]=rvar;
		}
	}
	for(int i=0; i<row;i++)
	{
		for(int j=0; j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<col;i++)
	{
		for(int j=1;j<row;j++)
		{
			rvar=c[j][i];
			for(k=j-1;k>-1;k--)
			{
				if(c[k][i]<rvar)
				{
					c[k+1][i]=c[k][i];
				}
				else
				{
					break;
				}
			}
			c[k+1][i]=rvar;
		}
	}
	printf("\n");
	for(int i=0; i<row;i++)
	{
		for(int j=0; j<col;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
