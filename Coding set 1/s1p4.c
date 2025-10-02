// sum of two numbers using pointers
#include<stdio.h>
void sum(int* p, int* q)
{
    int sum;
    sum=((*p)+(*q));
    printf("sum of p and q is %d",sum);
}
int main()
{
    int p,q;
    printf("enter p=");
    scanf("%d",&p);
     printf("enter q=");
     scanf("%d",&q);
     sum(&p,&q);
     return 0;
}