#include<stdio.h>
int main()
{
	float radius,area,circumfrence,diameter;
	printf("enter the value of radius");
	scanf("%f",&radius);
	diameter=2*radius;
	area=3.14*radius*radius;
	circumfrence=2*3.14*radius;
	printf(" diameter of circle is :%f\n",diameter);
	printf("area of circle is :%f\n",area);
	printf("circumfrence of circle :%f\n",circumfrence);
	
}
