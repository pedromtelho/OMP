#include <stdio.h>
#include <omp.h>

// ESSE PROGRAMA DEVE DAR ERRO POIS VAI ASSUMIR QUE A VARIÁVEL tmp
// NÃO FOI DECLARADA NO ESCOPO DO FOR LOOP

int main()
{
    #pragma omp parallel
    int tmp = 0;
    #pragma omp for private(tmp)
    for (int i = 0; i < 100; i++)
    {
        tmp += i;
    }
    printf("tmp: %d", tmp);

    return 1;
}
