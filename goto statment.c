//goto statment use for print the even number
#include<stdio.h>
int main(){
	int i,n;
		
		printf("enter the number\n");
		scanf("%d",&n);
			if(n>0){
			
				goto even;
		}
		
		even:
			printf("the even number are\n");
			for(i=1;i<=n;i++){
			if(i%2==0){
			
			{
				printf("%d\n",i);
			}
	}
}
				return 0;
}
