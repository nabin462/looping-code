//WAP to show the fibonancies series
#include<stdio.h>
int main(){
	int n, f1=0,f2=1,f3,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d\t",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	return 0;
}
