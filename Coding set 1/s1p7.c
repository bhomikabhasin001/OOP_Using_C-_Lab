// reverse an array(pointer parameter)
#include<stdio.h>
void reverse(int *arr, int n)
{
    int temp;
    int *ptr= &arr[n-1];
    while (arr<ptr)
    {
        temp = *arr;
        *arr = *ptr;
        *ptr = temp;
        arr++;
        ptr--;
    }

}
int main()
{ int arr[5]= {6, 7, 8, 9, 10};
reverse (arr,5);
for (int i=0; i<5; i++)
{
    printf("%d\n", arr[i]);
    }
        return 0;
}