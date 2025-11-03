#include <stdio.h>
int main()
{
    int arr[10],*p,even=0,odd=0;
    printf("enter 10 numbers\n");
    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);
    p=arr;
    for(int i=1;i<5;i++)
    {
        if(*(p+i)%2==0)
        even++;
        else
        odd++;
    }
    printf("even = %d \nodd = %d\n ", odd,even);
    return 0;
}
