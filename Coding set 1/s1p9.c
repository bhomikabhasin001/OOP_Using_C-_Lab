// array of pointers to strings
#include<stdio.h>
int main()
{
    char *names[] = { "Rahul" , "Rohit" , "Maya" , "Gita" , "purav" };
    int n = sizeof (names) / sizeof (names[0]);
    printf("The names are:\n");
    for(int i=0; i<n; i++)
    { printf("%s\n", names[i]);
    }
    return 0;
}