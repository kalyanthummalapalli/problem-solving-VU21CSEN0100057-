#include<stdio.h>
int main()
{
	int a=1,b=1,c,n;
	printf("to print the fabbonoic series");
	scanf("%d",&n);
	do
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	}
	while(c<n);
	return 0;
}
