#include <stdio.h>
#include <omp.h>

int main()
{
    double A[1000];
#pragma omp parallel num_threads(4)
    {
        int ID = omp_get_thread_num();
        printf("ID: %d, A: %d \n", ID, A);
    }
    return 0;
}