#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,ch;
	printf("enter the value of a and b");
	scanf("%d""%d",&a,&b);
	printf("enter the operation /n 1.addition /n 2.difference /n 3.multiplication /n 4.division /n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
            printf("sum of two numbers is:%d",c);
            break;
        case 2:
        	d=a-b;
		    printf("difference of two numbers is:%d",d);
		    break;
		case 3:
		    e=a*b;
		    printf("product of two numbers is:%d",e);
		    break;
		case 4:
		    f=a/b;
		    printf("a/b = %d.",f);
		    break;
		case 5:
		    d=a-b;
		    printf("difference of two numbers is: %d",d);
		    break;
		    
	}
}
