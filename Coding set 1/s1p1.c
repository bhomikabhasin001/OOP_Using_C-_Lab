//  Print address and value of a variable using pointers
#include<stdio.h>
int main()
{
    int a=16;
    int *p;
    p=&a;
    printf("value of a=%d\n", a);
    printf("address of a=%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &a);
    return 0;
}