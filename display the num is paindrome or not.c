//WAP to display the numner is palindrome or not
#include<stdio.h>
int main()
{
	int n,sum=0,temp ,rem;
	printf("enter the number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("the number is palindrome");
	}
	else
	{
		printf("the number is not palandrome");
	}
	return 0;
}
