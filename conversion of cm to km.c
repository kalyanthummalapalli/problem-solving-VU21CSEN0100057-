#include<stdio.h>
int main()
{
	float cm,m,km;
	printf("enter the value of cm");
	scanf("%f",&cm);
	m=cm/100;
	km=cm/100000;
	printf("cm to m is:%f/n",m);
	printf("m to km is:%f/n");
}
