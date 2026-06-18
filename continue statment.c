//continue statement
#include<stdio.h>
int main(){
	int i,n=20,sum=0;
	
	for(i=0;i<=n;i++)
	{
		if(n==5)
		{
			break;
		}
		sum=sum+i;
		
	}
	printf("sum is %d",sum);
	return 0;
}
