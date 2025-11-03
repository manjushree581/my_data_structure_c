#include <stdio.h>
int main() 
{
    int arr[5];
    int *ptr;
    int sum=0;
    printf("enter 5 numbers : \n");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    ptr=arr;
    for(int i=0;i<5;i++)
    {
    sum+=*(ptr+i);
    }
    printf("sum of array elements : %d ",sum);
    return 0;
}
