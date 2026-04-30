/*Considerando os 5 dias úteis da semana, pergunte, 
a cada iteração, quantos bugs a equipe de Qualidade 
(QA) corrigiu no dia. Ao final, exiba o total absoluto de bugs resolvidos na semana de Sprint.
*/

#include <stdio.h>

int main() {
    int totalBugs = 0;
    int bugsCorrigidos;

    for (int dia = 1; dia <= 5; dia++) {
        printf("Digite o numero de bugs corrigidos no dia %d: ", dia);
        scanf("%d", &bugsCorrigidos);
        totalBugs += bugsCorrigidos;
    }

    printf("Total de bugs corrigidos na semana de Sprint: %d\n", totalBugs);
    return 0;
}