#include<stdio.h>
int main()
{
	int i;
    for(i=0;i<20;i++)
    {
    	if(i<6)
    	continue;
    	printf("\n%d",i);
	}
	return 0;
}
