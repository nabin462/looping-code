//WAP to pattern print
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("1\t");
		}
		printf("%d\n");
	}
	return 0;
}
