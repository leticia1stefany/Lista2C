/*Crie um algoritmo que exiba os números de 1 a 10, 
simulando o log de inicialização de 10 servidores físicos 
ligados em rede.*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("servidor %d iniciado\n", i);
    }
    return 0;
}