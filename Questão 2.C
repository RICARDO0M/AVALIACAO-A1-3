#include <stdio.h>

int main(void) {
	char simENao[2]; 
	float temperatura;
	while(1==1){
		puts("PERGUNTAS DEVEM SER RESPONDIDAS COM S OU N\n");
	
		printf("O paciente se sente bem?\nR:");
		scanf("%c",&simENao[0]);
		setbuf(stdin,NULL);
	
		if(simENao[0]=='S'){
			puts("SAUDAVEL");
			return 0;
		}
		else if(simENao[0]=='N'){
			printf("O paciente tem dor?\nR:");
			scanf("%c",&simENao[1]);
			setbuf(stdin,NULL);

			if(simENao[1]=='S'){
			puts("DOENTE");
			return 0;
		}
			else if(simENao[1]=='N'){
			printf("Temperatura atual do paciente:");
			scanf("%f", &temperatura);
				if( 36.1<temperatura && temperatura>37.2){
					puts("SAUDAVEL");
					return 0;
				}
				else{
					puts("DOENTE");
				}
		}
			else{
			printf("ERRO DE DIGITAÇÃO: insira somente os comandos indicados!");
		}
  		return 0;
		}
		else{
		printf("ERRO DE DIGITAÇÃO: insira somente os comandos indicados!");
		}
	}
}
