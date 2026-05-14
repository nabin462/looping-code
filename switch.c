//WAP for switch statement
#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
int main()
{
	int choice;
	printf("1:find the area of circle\n");
	printf("2:check the number even or odd\n");
	printf("3:sum of n number\n");
	printf("4:Exit\n");
	while(choice!=4)
	{
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
				int r,a;
			case 1:
			
				printf("enter the radius\n");
				scanf("%d",&r);
				a=2*pi*r;
				printf("area=%d\n",a);
				break;
				
				
				int b;
				case 2:
					printf("enter the number\n");
					scanf("%d",&b);
					if(b%2==0)
					{
						printf("the number is even\n");
					}
					else
					{
						printf("the number is odd\n");
					}
					break;
					
					
					int n,i,sum=0;
					case 3:
						printf("enter the number\n");
						scanf("%d",&n);
						for(i=1;i<=n;i++)
						{
							sum=sum+i;
						}
						printf("sum=%d\n",sum);
						break;
						
						case 4:
							break;
							
							default:
								printf("enter vallid choice\n");
		}
	}
	
}
