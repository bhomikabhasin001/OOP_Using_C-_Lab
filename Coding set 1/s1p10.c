// pointer to array vs array of pointers
#include<stdio.h>
int main()
{
    int arr[6] = { 23 , 24 , 25 , 26 , 27 , 28 };
    int (*p)[6];
    p = &arr;
    printf("pointer to an array int (*p)[6] \n");
    printf("accessing elements using pointer to array:\n");
    for (int i = 0; i<6; i++)
    {
        printf("element %d = %d\n", i, (*p)[i]);
    }
        int a=10, b=11, c=12, d=13, e=14, f=15;
    int *array[6];
    array[0]= &a;
    array[1]= &b;
    array[2]= &c;
    array[3]= &d;
    array[4]= &e;
    array[5]= &f;
     printf("\n  array of pointers (int *array[6]) \n");
     printf("accessing elements using array of pointers:\n");
     for(int i=0; i<6; i++)
     {
        printf("element %d:%d\n", i, *array[i]);
     }
return 0;
}