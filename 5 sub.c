#include<stdio.h>
int main()
{
	int eng,tel,mat,soc,sci,total,avg,percentage;
	printf("enter the value of eng,tel,mat,soc,sci");
	scanf("%d%d%d%d%d",&eng,&tel,&mat,&soc,&sci);
	total=eng+tel+mat+soc+sci;
	printf("total:%d",total);
	avg=total/5;
	printf("avg:%d",avg);
	percentage=(total/500)*100;
	printf("percentage:%d",percentage);
	return 0;
}
