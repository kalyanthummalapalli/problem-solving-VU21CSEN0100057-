#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("before swapping\n a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n afterswapping\n a=%d,b=%d",a,b);
}
