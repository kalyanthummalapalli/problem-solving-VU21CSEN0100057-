#include<stdio.h>
int main()
{
	int a,b,rem;
	printf("enter the value of a,b");
	scanf("%d%d",&a,&b);
	rem=a-(a/b)*b;
	printf("output is %d\n,remainder");
}
