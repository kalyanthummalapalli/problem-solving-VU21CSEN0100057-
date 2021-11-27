#include<stdio.h>
int main(int argc, char const *argv[])
{
    float rate,principle,time,si;
    printf("enter the rate:");
    scanf("%f",&rate);
    printf("enter the principle:");
    scanf("%f",&principle);
    printf("enter the time:");
    scanf("%f",&time);
    si=(principle*rate*time)/100;
    printf("the simple intrest is:%f",si);
    return 0;
}
