#include <stdio.h>
int main()
{
    int arr[5],*p,max;
    printf("enter 5 numbers\n");
    for(int i=0;i<5;i++)
    scanf("%d",&arr[i]);
    p=arr;
    max=*p;
    for(int i=1;i<5;i++)
    {
        if(*(p+i)>max)
        max=*(p+i);
    }
    printf("largest = %d \n", max);
    return 0;
}
