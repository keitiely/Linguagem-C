/*2-A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho de laboratório, 
a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos a seguir:
Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela abaixo:*/
#include <stdio.h>
int main()
{
  int n1, n2, n3, media;

  printf("Digite suas tres notas separados por espaco: ");
  scanf("%d %d %d", &n1, &n2, &n3);
//considerando peso 2, 3 e 5
  media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

  printf(" sua nota e %d\n", media);

  if (media >= 8 && media <= 10)
  {
    printf("A");
  }
  else if (media >= 7 && media <= 7.99){
      printf("B");
  }
  else if (media >= 6 && media <= 6.99){
        printf("C");
  }
  else if (media >= 5 && media <= 5.99){
          printf("D");
  }
  else if (media >= 0 && media <= 4.99){
            printf("E");
  }

}
