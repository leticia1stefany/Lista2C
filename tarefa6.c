/*Leia no console o tempo de carregamento de 5 páginas web distintas (em milissegundos). 
Ao final do laço, calcule e exiba a média aritmética de tempo de resposta*/

#include <stdio.h>

int main() {
     
    int temp[5];
    float media = 0;
    for(int i = 0; i <5; i++){
        printf("Digite o tempo de carregamento da pagina web %d (em miliss): ", i+1);
        scanf("%d", &temp[i]);
        media += temp[i];
    }
    media /= 5;
    printf("Media aritmetica do tempo de resposta e: %.2f ms\n", media);
    return 0;
}