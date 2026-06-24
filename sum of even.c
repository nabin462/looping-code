// sum of n even number
#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0){
			sum=sum+i;
			
		}
	}
	printf("sum =%d",sum);
	return 0;
}
