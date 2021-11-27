#include<stdio.h>
#include<math.h>

int main(void){
        float a,b;
        printf("Enter base: ");
        scanf("%f",&a);
        printf("Enter exponent: ");
        scanf("%f",&b);
        printf("%f ^ %f = %f",a,b,pow(a,b));

        return 0;
}
