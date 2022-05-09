#include <stdio.h>

int main(void) {
	char categoria;
	int total=0,i=1;
	float soma=0,quantidade=0,media=0; 

		do{
			setbuf(stdin,NULL);
			printf("Informe a categoria:");
			scanf("%c", &categoria);
			if (categoria=='A'||categoria=='B'||categoria=='C'){
							
				printf("Informe a quantidade:");
				scanf("%f", &quantidade);

				if(quantidade !=0){
						soma= soma+quantidade;
						total++;
						media = soma/total;          
						printf("A média dos produtos eh %.2f\n", media);
				}else{
					break;
				}
			}else{
				break;
			}

		}while( i==1);
	
  return 0;
}