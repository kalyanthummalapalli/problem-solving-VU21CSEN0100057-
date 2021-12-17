#include<stdio.h>
int main()
{
	int n,r,b,sum=0,temp;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n % b;
		sum=sum*10+r;
		n=n/10;
	}
	if (temp=sum)
	printf("palindrome");
	else
	printf("not palindrome");
}
