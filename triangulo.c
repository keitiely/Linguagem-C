/*9. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos
dos lados de um triângulo e, se forem, verificar se é um triângulo
equilátero, isósceles ou escaleno. Se eles não formarem um triângulo
escrever uma mensagem. Considerar que:
O comprimento de cada lado de um triângulo é menor que a soma dos
outros dois lados;
Chama-se triângulo equilátero o triângulo que tem três lados iguais;
Chama-se triângulo isósceles o triângulo que tem o comprimento de
dois lados iguais;
Lista 2 - Estrutura de Seleção 3
Chama-se triângulo escaleno o triângulo que tem os três lados
diferentes*/

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o lado X, Y e Z separados por espaco: ");
    scanf("%d %d %d", &x, &y, &z);

    //se os lados formam um triângulo
    if ((x + y > z) && (x + z > y) && (y + z > x)) {
        printf("É um triângulo, do tipo:\n");
        //  o tipo do triangulo
        if (x == y && y == z) {
            printf("Equilátero!\n");
        } else if (x == y || y == z || x == z) {
            printf("Isósceles!\n");
        } else {
            printf("Escaleno!\n");
        }
    } else {
        printf("Nao e um triangulo.\n");
    }
}
