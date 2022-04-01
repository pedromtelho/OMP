#include <stdio.h>
#include <omp.h>


int main()
{
    #pragma omp parallel
    int tmp = 0;
    #pragma omp for firstprivate(tmp)
    for (int i = 0; i < 100; i++)
    {
        tmp += i;
    }
    printf("tmp: %d", tmp);

    return 1;
}
