#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int*)realloc(2 * sizeof(int));
    if(ptr==NULL)
    {
    printf("memory reallocation failed!!!\n");
    exit (0);
    }
    return 0;
}
