/*Leia o tempo de resposta (em ms) de 5 requisições sequenciais feitas a uma 
API. No final, o algoritmo deve processar duas métricas:*/

#include <stdio.h>

int main() {
    int temp[5];
    int soma = 0;
    int maior = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o tempo de resposta %d (em ms): ", i + 1);
        scanf("%d", &temp[i]);
        soma += temp[i];
        if (temp[i] > maior) {
            maior = temp[i];
        }
    }

    double media = soma / 5.0;
    printf("Tempo medio de resposta: %.2f ms\n", media);
    printf("Maior tempo de resposta: %d ms\n", maior);

    return 0;
}