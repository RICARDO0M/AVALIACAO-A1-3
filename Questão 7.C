#include <stdio.h>
#include <math.h>

int main(void)
{

    int produto = 1, quantidadeTotal = 0;
    float vlProduto = 0, vlTotal = 0, vlMedio = 0;

    while (1 == 1)
    {
        printf("Informe a quantidade de um produto:");
        scanf("%i", &produto);
        if (produto > 0)
        {
            printf("\nInforme o valor:");
            scanf("%f", &vlProduto);
            if (vlProduto <= 0)
            {
                break;
            }
            puts("\n");
            quantidadeTotal += produto;
            vlTotal += quantidadeTotal * vlProduto;
            vlMedio = vlTotal / quantidadeTotal;
        }
        else
        {

            break;
        }
    }
    printf("VALOR TOTAL DA COMPRA: R$ %.2f\n", vlTotal);
    printf("VALOR MEDIO DA COMPRA: R$ %.2f\n", vlMedio);
    int totalInteiro = floor(vlTotal);
    float totalDecimal = vlTotal - totalInteiro;
    printf("\nO valor total da compra eh %i reais e %0.2f centavos.\n\n", totalInteiro, totalDecimal);

    printf("%i reais equivalente a:\n", totalInteiro);
    int n100, n50, n20, n10, n5, n1;

    n100 = totalInteiro / 100;
    n50 = totalInteiro % 100 / 50;
    n20 = totalInteiro % 50 / 20;
    n10 = totalInteiro % 50 % 20 / 10;
    n5 = totalInteiro % 50 % 20 % 10 / 5;
    n1 = totalInteiro % 50 % 20 % 10 % 5;
    printf("%d notas de 100\n", n100);
    printf("%d notas de 50\n", n50);
    printf("%d notas de 20\n", n20);
    printf("%d notas de 10\n", n10);
    printf("%d notas de 5\n", n5);
    printf("%d moedas de 1\n", n1);
}