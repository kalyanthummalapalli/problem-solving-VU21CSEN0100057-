#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if (a%5==0&&a%11==0)
	{
	    printf("the number is divisible by 11 and 5");
	}
	else
	{
		printf("the number is not divisible by 11 and 5");
		
	}
}
