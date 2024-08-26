//Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo.
#include <stdio.h>

int main()
{

  int n1, n2, n3, media;

  printf("Digite suas tres notas separados por espaco: ");

  scanf("%d %d %d", &n1, &n2, &n3);

  media = (n1 + n2 + n3) / 3;

  printf("Sua media e %d\n", media);

  if (media >= 0 && media <= 2.99)
  {
    printf("Esta Reprovado");
  }

  else{
    if (media >= 3 && media <= 6.99)
    {
      printf("Precisara fazer Exame");
    }

    else{
      if (media >= 7 && media <= 10)
      {
        printf("Parabens, Aprovado");
      }
    }
  }
}
