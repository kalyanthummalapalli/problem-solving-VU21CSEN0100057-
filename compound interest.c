#include<stdio.h>
int main()
{
	float p,t,r,ci;
	printf("enter the value of p,t,r");
	scanf("%f%f%f",&p,&t,&r);
	ci=p*((1+r/100),t)-p;
	printf("the compound interest is %f",ci);
}
