#include <stdio.h>
#include <omp.h>


int main()
{
    int tmp = 0;
    #pragma omp parallel for firstprivate(tmp)
    for (int i = 0; i < 100; i++)
    {
        tmp += i;
        printf("tmp inside: %d \n", tmp);
    }
    printf("tmp: %d \n", tmp);

    return 1;
}
