/*Solicite ao usuário que digite a temperatura da CPU registrada em 5 instantes diferentes. 
Utilize a lógica dentro do for para identificar e exibir 
qual foi a maior e a menor temperatura lida.*/

#include <stdio.h>

int main(){
    float temp, maior, menor;

    for(int i = 0; i < 5; i++){
        printf("Digite a temperatura da sua20 CPU registrada no instante %d: ", i + 1);
        scanf("%f", &temp);

        if(i == 0){
            maior = temp;
            menor = temp;
        } else {
            if(temp > maior){
                maior = temp;
            }
            if(temp < menor){
                menor = temp;
            }
        }
    }

    printf("Maior temperatura registrada: %.2f\n  ", maior);
    printf("Menor temperatura registrada: %.2f\n", menor);

    return 0;
}