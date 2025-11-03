#include <stdio.h>
#include <time.h>
int main() 
{
    long n,i;
    clock_t start,end;
    double time_taken;
    printf("enter n :\n ");
    scanf("%ld",&n);
    start=clock();
    for(i=0;i<n;i++)
    {
        int x=i*2;
    }
    end=clock();
    time_taken=((double)(end-start))/CLOCKS_PER_SEC;
    printf(" O(n) time = %f seconds \n",time_taken);
    return 0;
}
    

