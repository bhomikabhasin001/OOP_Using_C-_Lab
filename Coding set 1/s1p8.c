// String length using pointer traversal
#include<stdio.h>
int strLength(char *str)
{
    int str_length = 0;
    while(*str != '\0')
    {
        str_length++;
        str +=1;
    }
    return str_length;
}
int main()
{
   char *str = "nice to meet you";
   int str_length = strLength(str);
   printf("length of string is %d", str_length);
   return 0;
}
