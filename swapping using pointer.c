#include <stdio.h>
int main() 
{
    int a,b,temp;
    int *p1,*p2;
    printf("enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    printf("a = %d and b = %d\n",a,b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swapping :\na = %d  and b = %d\n",a,b);
    return 0;
}
