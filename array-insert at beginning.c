// insert at beginning of array 
#include <stdio.h>
#define CAP 10
int main() 
{
    int arr[CAP]={1,3,5};
    int n=3;
    int x =2;
    // insert a new element at beginning of array 
    if(n<CAP)
    {
        //shift right
        for(int i=n;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
            arr[0]=x;
            n++;
            for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    else
    {
        printf("array is full\n");
    }
    
}

    
