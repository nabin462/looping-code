//WAP to print the  n odd number
#include<stdio.h>
int main(){
	int i,n;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("the odd number are\n");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0){
		printf("%d\n",i);
	}
		
	}
	return 0;
}
