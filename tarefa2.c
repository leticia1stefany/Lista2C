/*Construa um laço que faça uma contagem regressiva de 10 até 1 e, ao finalizar, 
escreva a mensagem "Deploy do Software Autorizado!".*/

#include <stdio.h>

int main() {
    for (int i = 10; i >= 1; i--) {
        printf("Contagem regressiva de 10 ao 1: %d\n", i);
    }
    printf("Deploy do Software Autorizado!\n");
    return 0;
}