//break statment
#include<stdio.h>
int main(){
	int i,n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	  if(i==5){
	  	break;
	  }
	  printf("%d\n",i);
	}
	return 0;
}
