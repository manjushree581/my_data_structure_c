//DELETE AT GIVEN POSITION
#include<stdio.h>
#define CAP 10
int main()
{
    int a[CAP] = {9, 6, 3, 5, 50};
    int n = 5;
    int pos = 3;
    if(n > 0 && pos >= 0 && pos < n)
    {
        for(int i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
    }
    else{
        printf("Invalid position or array is empty");
    }
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
}
