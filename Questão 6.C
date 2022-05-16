#include <stdio.h>

int main(void)
{
    int numero;
    printf("informe um nummero positivo:");
    scanf("%i", &numero);
    for (int linhas=1;linhas<numero+1;linhas++)
    {
        for(int colunas=0;colunas<linhas;colunas++)
        {
            printf("%i\t",linhas);
        }
        puts("");
    }
}