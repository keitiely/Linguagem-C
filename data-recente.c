//Faça um programa que determine a data cronologicamente maior de duas datas fornecidas pelo usuário.
//Cada data deve ser fornecida por três valores inteiros, onde o primeiro representa o dia, o segundo o mês e o terceiro o ano. 
#include <stdio.h>

int main(){

	int dia, dia2, mes, mes2, ano, ano2;

	printf("Digite a primeira data separado por espaco: ");
	scanf("%d %d %d", &dia, &mes, &ano);

	printf("Digite a segunda data separado por espaco: ");
	scanf("%d %d %d", &dia2, &mes2, &ano2);
//de acordo com o ano
	if (ano > ano2){
		printf("%d/%d/%d e mais recente", dia, mes, ano);
	}
	else{
		if (ano2 > ano){
			printf("%d/%d/%d e mais recente", dia2, mes2, ano2);
	    }
		//de acordo com ano e mes
		else{
			if (ano == ano2 && mes > mes2){
				printf("%d/%d/%d e mais recente", dia, mes, ano);
			}
			else{
				if (ano == ano2 && mes2 > mes){
					printf("%d/%d/%d e mais recente", dia2, mes2, ano2);
				}
				//de acordo com ano, mes e dia
				else{
					if (ano == ano2 && mes == mes2 && dia > dia2){
						printf("%d/%d/%d e mais recente", dia, mes, ano);
					}
					else{
						if (ano == ano2 && mes == mes2 && dia2 > dia){
							printf("%d/%d/%d e mais recente", dia2, mes2, ano2);
						}
						//sendo tudo igual
						else{
							printf("As duas datas sao iguais");
						}
					}
				}
			}
		}
	}
}
