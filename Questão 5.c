#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));
    int numero = 0, ntentativas = 3, tentativa;
    numero = rand() % 10;
    while (ntentativas > 0)
    {
        printf("tente adivinhar o numero magico, voce tem, %i tentativas\n", ntentativas);
        printf("digite um numero:");
        scanf("%i", &tentativa);
        if (tentativa > numero)
        {
            printf("Errado, muito alto!\n");
            ntentativas--;
        }
        else if (tentativa < numero)
        {
            printf("Errado, muito baixo!\n");
            ntentativas--;
        }
        else if (tentativa == numero)
        {
            printf("Certo!!!!!!! %d e o numero magico!!", numero);
            ntentativas = 0;
        }
    }
        printf("\n\nO JOGO ACABOU!");
    return 0;
}