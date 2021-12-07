#include<math.h>
#include<stdio.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("enter the value of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if (d>0)
{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt (d))/(2*a);
		printf("the real roots are %2f%2f",r1,r2);
	}
	else if (d<0)
	{
		r1=-d/2*a;
		r2=d/2*a;
		printf("the imaginary roots are:%2f%2f",r1,r2);
	}
	else 
		
		printf("roots are equal:%2f%2f",r1,r2);
	
	
	
}
