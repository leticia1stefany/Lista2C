/*Calcule e exiba a soma de todos os números inteiros de 1 a 100, 
simulando o cálculo do total de registros lidos em um lote de banco de dados.
*/

#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i; 
    }
    printf("A soma dos os numeros inteiros de 1 a 100 e: %d\n", soma);
    return 0;
}