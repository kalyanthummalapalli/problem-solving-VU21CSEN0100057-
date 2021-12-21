#include<stdio.h>
int main()
{
	int x,y,*a,*b,temp;
	printf("enter the value of x,y");
	scanf("%d%d",&x,&y);
	printf("the value of \nx=%d and \ny=%d before swapping",x,y);
	a=&x;
	b=&y;
	
	temp=*a;
	*a=*b;
	*b=temp;
	printf("the value \nx=%d and \ny=%d after swapping",x,y);
}
