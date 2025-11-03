#include <stdio.h>
#include <time.h>
int main()
{
    long n,i,j;
    clock_t start,end;
    double time_taken;
    printf("enter n:\n");
    scanf("%ld",&n);
    start=clock();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            int x=i+j;
        }
    }
    end=clock();
    time_taken=((double)(end-start))/ CLOCKS_PER_SEC;
    printf("O(n^2) time=%f seconds\n",time_taken);
}
