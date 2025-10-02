// find max of three numbers using pointers as parameters
#include<stdio.h>
int max(int *a,int *b,int *c)
{
    int max=*a;
    if(*b>max)
    {max=*b;}
    if(*c>max)
    {max=*c;}
    return max;
}
int main()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    int result=max(&a,&b,&c);
    printf("maximum of %d,%d and %d is %d\n",a,b,c,result);
    return 0;

}