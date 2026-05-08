//WAP to display the reverse of given number
#include<stdio.h>
int main()
{
	int n, temp,sum=0,rem;
	printf("enter the number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
		
	}
	printf("reverse=%d",sum);
	return 0;
}
