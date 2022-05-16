#include <stdio.h>

int main(void) {
	int limiteInferior=0, limiteSuperior=0, qntdNum=0, linha=0,divisores=0;
  printf("Informe o valor do limite inferior do intervalo:");
	scanf("%i",&limiteInferior);
	printf("Informe o valor do limite superior do intervalo:");
	scanf("%i",&limiteSuperior);
	printf("Informe quantos numeros deseja imprimir por linha:");
	scanf("%i",&qntdNum);
	
	for(int i=limiteInferior;i<=limiteSuperior;i++){
			for(int divisor=1;divisor<limiteSuperior;divisor++){
				if(i%divisor==0){
					divisores++;
				}
			}
		if(divisores==2){
			printf("%3.i\t",i);
			linha++;
		}
		divisores=0;
		if(linha==qntdNum){
			puts("");
			linha=0;
		}
	}
}