#include <stdio.h>
#include<math.h>

int main()
{
   int i,n,rem;
   printf("enter the value of n");
   scanf("%d",&n);
   for(i=2;i<=sqrt(n);i++)
   {
       rem=n%i;
   }
        if(rem==0)
          printf("not prime");
       else
       printf("prime");


    return 0;
}
