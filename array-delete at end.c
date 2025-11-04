// DELETE AT END OF THE ARRAY
#include<stdio.h>
#define CAP 10
int main()
{
    int a[CAP] = {1, 2, 3, 4, 6, 7};
    int n = 6;
    if(n > 0)
    {
        n--; 
        for(int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Array is empty\n");
    }
    return 0;
}
