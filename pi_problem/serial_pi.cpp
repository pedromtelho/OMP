#include <stdio.h>
#include <omp.h>

static long num_steps = 100000;
double step;
int main()
{
    int i;
    double time1 = omp_get_wtime();
    double x, pi, sum = 0.0;
    step = 1.0 / (double)num_steps;
    for (i = 0; i < num_steps; i++)
    {
        x = (i + 0.5) * step;
        sum = sum + 4.0 / (1.0 + x * x);
    }
    pi = step * sum;
    double time2= omp_get_wtime() - time1;
    printf("PI VALUE: %f \n", pi);
    printf("TIME: %f \n", time2);
    return 1;
}
