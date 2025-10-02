// increment a variable using pointer parameter
#include<stdio.h>
void increment(int* p)
{
   int a=(*p)+1;
   printf("after increment,a is %d",a);
}
int main()
{
   int a; 
   printf("enter value of a:");
   scanf("%d",&a);
   printf("\n");
   increment(&a);
   return 0;
}