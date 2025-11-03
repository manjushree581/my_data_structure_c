#include <stdio.h>
int main()
{
    char str[100],*p;
    int len=0;
    printf("enter a string\n");
    scanf("%s",str);
    p=str;
    while(*p!= '\0')
    {
        len++;
        p++;
        
    }
    printf("length = %d \n", len);
    return 0;
}
