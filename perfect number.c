#include<stdio.h>  
main()  
{  
int num, rem, sum = 0, i;    
printf("enter the value of num");  
scanf("%d", &num);        
for(i = 1; i < num; i++)  
                     {  
                              rem = num % i;  
                             if (rem == 0)  
                                        {  
                                               sum = sum + i;  
                                         }  
                        }  
if (sum == num)  
                      printf(" %d is a Perfect Number");  
           else  
                      printf("%d is not a Perfect Number");  
}  
