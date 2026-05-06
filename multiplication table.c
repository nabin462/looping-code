//WAP to display of multiplication table
#include<stdio.h>
int main()
{
	int i,n,m;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		m=n*i;
		printf("%dX%d=%d\n",n,i,m);
	}
	return 0;
}
