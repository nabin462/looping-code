//WAP to display  n  even number
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("the even numbers\n");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
