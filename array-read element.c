#include <stdio.h>
int main() 
{
    int arr[]={10,20,30,40,50,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=5;
    if(index>=0 && index<n) //read element using array
    {
        int value=arr[index];
        printf("a[%d]= %d ",index,arr[index]); 
    }
}
