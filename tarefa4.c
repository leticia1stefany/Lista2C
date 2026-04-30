/*Solicite ao usuário um número inteiro (ex: fator multiplicador de processamento) 
e exiba a tabuada de 1 a 10 deste valor de forma dinâmica.*/

#include <stdio.h>

int main() {
    int nmr;
    printf("Digite um numero inteiro para exibir a tabuada: ");
    scanf("%d", &nmr);

    printf("Tabuada de %d:\n", nmr);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", nmr, i, nmr * i);
    }
    return 0;
}