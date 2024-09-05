/*4-Faça um programa que receba dois números e mostre o maior.*/
#include <stdio.h>
int main(){
  int num1, num2;

  printf("Digite dois numeros separados por espaco: ");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2){
    num1 = num1;
  }
  else if (num1 < num2){
      num1 = num2;
  }
  printf("O maior numero e: %d", num1);
}
