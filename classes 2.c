#include<stdio.h>
 int x;
 void autostorageclass()
 {
 	printf("\ndemonstarting auto class\n\n");
 	auto int a=32;
 	printf("value of the variable 'a'" "declared as auto: %d\n",a);
 	printf("-------------------------");
 }
void registerstorageclass()
 {
 	printf("\ndemonstartind register class\n\n");
 	register int b='G';
    printf("value of the variable 'b'" "declared as register: %d\n",b);
    printf("-------------------------");
 }
 void externstorageclass()
 {
 		printf("\ndemonstartind extern class\n\n");
 		extern int x;
 		 		 x=2;
 		 printf("value of the variable 'x'" "declared as extern: %d\n",x);

 		printf("-------------------------"); 
 }
 void staticstorageclass()
 {
 	int i=0;
    printf("\ndemonstartind static class\n\n");	
    printf("declaring 'y' as inside the loop .\n"
	       "But this declaration will occur only"
		   "once as 'y' is static .\n "
		   "if not ,then every time the value of'y'"
		   "will be the declared value 5"
		   "as in the case of variable 'p'\n");
    printf("\nloop started:\n");
	for(i=1 ;i<5;i++)
	{
static int y=5;
int p=10;
y++;
p++;
printf("\nThe value of 'y'"
       "declared as static,in %d"
	   "iteration is %d\n",
	   i,y);
printf("the value of non-static variable 'p',"
	       "in %d interation is %d\n",
		   i,p);
	printf("\nloop ended :\n");
	}

	printf("-------------------------"); 
}
int main()
{
	printf("a program to demonstratr"
	       "storage classes in c\n\n");
	       autostorageclass();
	       registerstorageclass();
	       externstorageclass();
		   staticstorageclass();
		   printf("\n\nstorage classes demonstrated");
		   return 0; 
	   }	   

