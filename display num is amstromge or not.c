//WAP to display the number is amstronge or not
#include<stdio.h>
int main()
{
	int n,sum=0,rem,temp;
	printf("enter the number \n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
		
	}
	if(sum==temp)
	{
		printf("the number is amstronge");
	}
	else
	{
		printf("the number is not amstronge");
	}
	return 0;
}
