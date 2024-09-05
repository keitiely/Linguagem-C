/*5-Faça um programa que receba três números e mostre-os em ordem decrescente.*/ 
#include <stdio.h>

int main(){
  int num1, num2, num3, aux;

  printf("Digite Tres numeros Diferentes separados por espaco: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  // se receber 3 2 1
  if (num1 > num2 && num2 > num3){
    num1 = num1;
    num2 = num2;
    num3 = num3;
  }
  // se receber 1 2 3
  else if (num1 < num2 && num2 < num3){
      aux = num1;
      num1 = num3;
      num2 = num2;
      num3 = aux;
  }
    // se receber 1 3 2
    else if (num2 > num3 && num3 > num1){
        aux = num1;
        num1 = num2;
        num2 = num3;
        num3 = aux;
    }
    // se receber 2 3 1
    else if (num2 > num1 && num1 > num3){
          aux = num1;
          num1 = num2;
          num2 = aux;
          num3 = num3;
    }
     // se receber 2 1 3
    else if (num1 > num2 && num1 < num3){
            aux = num1;
            num1 = num3;
            num3 = num2;
            num2 = aux;
    }
    // se receber 3 1 2
    else if (num1 > num3 && num3 > num2){
              num1 = num1;
              aux = num2;
              num2 = num3;
              num3 = aux;
    }
  printf("Na ordem Decrescente e: %d %d %d", num1, num2, num3);
}
