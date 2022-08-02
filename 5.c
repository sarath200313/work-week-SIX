#include<stdio.h>
int n,m,i,j;
void fun(int a[m][n],int key)
{
	int flag=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==key)
			{
				printf("key element is present in %d row and %d colomun\n",i+1,j+1);
				flag=flag+1;
			}
		}
	}
	if(flag==0)
	{
		printf("element is not present\n");
	}
}
int main()
{
	printf("enter m,n:\n");
	scanf("%d %d",&n,&m);
	int a[m][n],key;
	printf("enter elements to an array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the key element:\n");
	scanf("%d",&key);
	fun(a,key);
}
