#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarySearch(int, int, int*, int*);//function prototype
int main()
{
    srand( time(0) );
    int answer = 1 + rand() % 1000;
    int times = 0;
    int L = 1;
    int R = 1000;
    int M = (L + R) / 2;

    while(binarySearch(M, answer, &L, &R))
    {
        if(binarySearch(M, answer, &L, &R) == 2)
        {
            printf("the answer is %d\n", M);
            printf("times:%d", times);
            break;
        }
        else
            printf("%d\n", M);
        M = (L + R) / 2;
        times++;
    }
}

int binarySearch(int M, int a, int *L, int *R)
{
    if(M > a)
    {
        *R = M - 1;
        return 1;
    }
    else if(M < a)
    {
        *L = M + 1;
        return 1;
    }
    else
        return 2;
}
