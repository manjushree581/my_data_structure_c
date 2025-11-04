//INSERT AT GIVEN POSITION
#include<stdio.h>
#define CAP 10

int main()
{
    int a[CAP] = {10, 20, 30, 40};
    int n = 4;
    int x = 90;
    int pos = 3;

    if(n < CAP && pos >= 0 && pos <= n)
    {
        for(int i = n; i > pos; i--)
            a[i] = a[i - 1];
            a[pos] = x;
            n++;
         for(int i = 0; i<n;i++)
         {
         printf("%d ",a[i]);
             
         }
    }
    else
    {
        printf("Invalid position or array full");
    }
}
