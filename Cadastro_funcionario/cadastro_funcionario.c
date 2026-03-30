#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[100];
    char sexo;

    printf("Nome do funcionario: ");
    fgets(nome, sizeof(nome), stdin); // fgets para linha inteira com espaços
    nome[strcspn(nome, "\n")] = '\0'; // remove o enter do final da string
    
    printf("Sexo (M/F): ");
    scanf(" %c", &sexo); // %c para ler única resposta

    printf("Funcionario: %s\n", nome);
    printf("Sexo: %c\n", sexo);

    return 0;
}