#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the value of n");
	scanf("%d",&n);
	do{
		printf("%d*%d=%d\n",n,i,n*i);
		++i;
	}while(i<=20);
}
