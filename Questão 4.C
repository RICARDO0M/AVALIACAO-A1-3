#include <stdio.h>

int main(void) {
	int num1, num2, resto;
  printf("Informe o primeiro valor:\nR:");
	scanf("%i", &num1);
	printf("digite o segundo valor:\nR:");
	scanf("%i", &num2);
	if(num1==0||num2==0){
		printf("Não é possivel realizar divisão por zero\n");
		return 0;
	}
	else if(num1>num2||num1==num2){
		resto = num1%num2;
	}
	else if(num1<num2){
		resto = num2%num1;
	}
	printf("O resto da divisao eh: %i\n", resto);
  return 0;
}