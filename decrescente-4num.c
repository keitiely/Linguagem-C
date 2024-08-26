//Faça um programa que receba três números obrigatoriamente em ordem e um quarto número que não siga esta regra.
//Mostre, em seguida, os quatro números em ordem decrescente. 
#include <stdio.h>

int main(){
	
	int num1, num2, num3, num4, aux, aux2;

	printf("Digite quatro numeros diferentes sendo tres deles em ordem crescente e o quarto nao, separados por espaco: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	// se receber 2 3 4 1
	if (num4 < num1 && num1 < num2 && num3 > num2){
		aux = num1;
		num1 = num3;
		num2 = num2;
		num3 = aux;
		num4 = num4;
	}

	// se receber 2 3 5 4
	else{
		if (num1 < num2 && num2 < num3 && num3 > num4){
			aux = num1;
			aux2 = num2;
			num1 = num3;
			num2 = num4;
			num3 = aux2;
			num4 = aux;
		}

		// se receber 1 2 3 5
		else{
			if (num4 > num3 && num3 > num2 && num2 > num1){
				aux = num1;
				aux2 = num2;
				num1 = num4;
				num2 = num3;
				num3 = aux2;
				num4 = aux;
			}
		}
	}

	printf("Na ordem Decrescente e: %d %d %d %d", num1, num2, num3, num4);
}
