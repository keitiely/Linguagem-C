/*Considere que o perfil de uma pessoa pode ser determinado a partir da sua data de nascimento, conforme exemplificado a seguir.
Data uma data de nascimento, informe o perfil correspondente.*/ 
#include <stdio.h> 
  int main(){ 

  int d, m, ano, soma, quebra, resto, total, resul; 

  float divisao; 

  printf("Digite sua data de nascimento: separados por espaco: "); 

  scanf("%d %d %d", &d, &m, &ano); 

  soma= d*100 + m + ano; 
  quebra= soma /100; 
  resto= soma % 100; 
  total= quebra + resto; 
  resul= total % 5; 

   if(resul== 0){ 
  printf(" Seu perfil e Tímido"); 
  } 
    else{ 
      if(resul== 1){ 
      printf("Seu perfil e Sonhador"); 
  } 
    else{ 
      if(resul== 2){ 
      printf("Seu perfil e Paquerador"); 
  } 
    else{ 
      if(resul== 3){ 
      printf("Seu perfil e Atraente"); 
} 
    else{ 
     if(resul== 4){ 
      printf("Seu perfil e Irresistível"); 
      } 
    } 
  } 
} 
} 
}
