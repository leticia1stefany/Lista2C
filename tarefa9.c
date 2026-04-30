/*Simule um sistema de autenticação bancária. Use o laço PARA para dar ao usuário exatamente 
3 tentativas de digitar uma senha correta. Dentro do laço, se a senha digitada for a correta 
(ex: "admin123"), interrompa a lógica e escreva "Acesso Liberado". 
Caso erre as 3 tentativas, ao final do fluxo, escreva "Conta Bloqueada por Segurança".*/

#include <stdio.h> 
#include <string.h> 

int main() {
    char senha[20];
    int tentativas = 3;
    int acessoLiberado = 0;

    for (int i = 0; i < tentativas; i++) {
        printf("Digite a senha: ");
        scanf("%s", senha);

        if (strcmp(senha, "admin123") == 0) {
            printf("Acesso Liberado\n");
            acessoLiberado = 1;
            break;
        } else {
            printf("Senha incorreta. Tente novamente!\n");
        }
    }

    if (!acessoLiberado) {
        printf("Conta Bloqueada por Segurança!\n");
    }

    return 0;
}