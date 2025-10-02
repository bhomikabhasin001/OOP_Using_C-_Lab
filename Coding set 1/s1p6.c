// access array elements using pointers
#include<stdio.h>
int main()
{
    int arr[5]={11, 12, 13, 14, 15};
    int *p=arr;
    printf("access elements using pointers:\n");
    for (int i=0; i<5; i++)
    {
        printf("%d",*p);
        printf("\n");
        p++;
    }
    return 0;
}