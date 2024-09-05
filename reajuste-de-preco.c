/*8-Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: o produto poderá ter seu preço aumentado ou diminuído.
Para alterar o preço o produto deve preencher pelo menos um dos requisitos a seguir:
Faça um programa que receba o preço atual e a venda mensal média do produto, calcule e mostre o novo preço.*/
#include <stdio.h>
int main(){

  float vendaM, precoA, reajus;

  printf("Digite o Preco atual e a Venda mensal do seu produto separado por espaco: ");
  scanf("%f %f", &precoA, &vendaM);

  // primeira requisicao
  if (vendaM < 500 || precoA < 30){
    reajus = precoA + (precoA * 10 / 100);
    printf("O novo preco e %.2f", reajus);
  }
 // segunda requisicao
  else if (vendaM >= 500 && vendaM < 1200 || precoA >= 30 && precoA < 80){
      reajus = precoA + (precoA * 15 / 100);
    printf("O novo preco e %.2f", reajus);
  }
 // terceira requisicao
  else if (vendaM >= 1200 || precoA >= 80){
      reajus = precoA - (precoA * 20 / 100);
     printf("O novo preco e %.2f", reajus);
  }
}
