#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr;
    printf("enter the number of elements:\n");
    scanf("%d",&n);
    arr =(int*)malloc(n* sizeof(int));
    if(arr==NULL)
    {
        printf("MEMORY ALLOCATION FAILED\n");
        return -1;
    }
    printf("enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    int sum=0;
    int max=*(arr);
    for(int i=0;i<n;i++)
    {
        sum+= *(arr+i);
        if(*(arr+i)>max)
        {
            max=*(arr+i);
        }
    }
        printf("SUM : %d\n",sum);
        printf("MAXIMUM : %d\n",max);
    free(arr);
    return 0;
    
}
