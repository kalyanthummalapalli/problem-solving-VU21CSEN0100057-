#include<stdio.h>
int main()
{
	int days,weeks,year;
	printf("enter the no of days");
	scanf("%d",&days);
	weeks=days/7;
	year=days/365;
	printf("no of weeks per days is :%d",weeks);
	printf("no of years per week is:%d",year);
}
