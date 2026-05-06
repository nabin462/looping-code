//WAP to sum of digit enter from user
#include<stdio.h>
int main()
{
	int rem,n,sum=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("sum=%d",sum);
	return 0;
}
