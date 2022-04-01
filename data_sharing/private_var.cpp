#include <stdio.h>
#include <omp.h>

// ESSE PROGRAMA DEVE DAR ERRO POIS VAI ASSUMIR QUE A VARIÁVEL tmp
// NÃO FOI DECLARADA NO ESCOPO DO FOR LOOP

int main()
{
    int tmp = 0;
    #pragma omp parallel for private(tmp)
    for (int i = 0; i < 100; i++)
    {
        tmp += i;
        printf("tmp inside: %d \n", tmp);
    }
    printf("tmp: %d \n", tmp);

    return 1;
}
