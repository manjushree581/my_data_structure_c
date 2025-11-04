// insert at end of array 
#include <stdio.h>
#define CAP 100
int main() 
{
    int arr[CAP]={1,3,5,7,9};
    int n=500;
    int x =2;
    // insert a new element at end of array 
    if(n<CAP)
    {
        arr[n]=x;
        n++;
        for(int i=0;i<n;i++) //traverse
        {
            printf("%d ",arr[i]);
            
        }
    }
    else
    {
        printf("array is full\n");
    }
    
}
    
