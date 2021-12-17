#include<stdio.h>
int main()
{
	char lower,upper,ascii;
	printf("enter any aphabet from upper case");
	scanf("%c",&upper);
	ascii=upper+32;
	printf(" lower case:%C",upper,ascii);
}
