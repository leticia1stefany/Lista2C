/*Um sistema precisa realizar uma varredura apenas em portas 
de comunicação que possuam numeração par. 
Crie um fluxograma que imprima todos os números pares entre 0 e 20.
*/

#include <stdio.h>
int main() {
    printf("Portas de comunicacao pares entre 0 e 20:\n");
    for (int i = 0; i <= 20; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}