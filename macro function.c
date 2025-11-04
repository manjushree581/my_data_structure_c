#include <stdio.h>
#define CAP 40
void printarray(int a[],int n);
void printarray(int a[CAP],int n)
{
        printf("[");
        for(int i=0;i<n&&i<CAP;i++)
        {
            a[i]=i;
            printf("%d ", a[i] );
        }
        printf("]\n");
}
int main()
{
    int a[CAP],n=20;
    printarray(a,n);
}
