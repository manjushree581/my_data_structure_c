#include <stdio.h>
int main() 
{
    int arr[]={1,3,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=1;
    int newvalue=2;
    // updating new value to array
    if(index>=0 && index<n)
    {
        arr[index]=newvalue; 
        for(int i=0;i<n;i++) //traverse
        {
            printf("%d ",arr[i]);
            
        }
    }
    else
    {
        printf("index not found\n");
    }
}
