// Swap two numbers(Call by value vs Call by reference)
#include<stdio.h>
void swapByvalue(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("value of x and y inside swapByvalue is %d and %d", x,y);
    printf("\n");
}
int swapByreference(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("value of x and y after swapping using call by refernce is %d and %d",*x,*y);
    printf("\n");
    return 0;
}
int main()
{
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
     printf("enter b=");
     scanf("%d",&b);
     printf("before swapping value of a and b is:%d and %d",a,b);
     printf("\n");
     swapByvalue(a,b);
     printf("value of a and b after swapping by value is a=%d and b=%d",a,b);
     printf("\n");
     swapByreference(&a,&b);
     return 0;
}