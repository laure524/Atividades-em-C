#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[100];
    int idade;
    char sexo;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin); // lê a linha inteira com espaços

    nome[strcspn(nome, "\n")] = '\0'; // remove o enter do final da string

    printf("Idade: ");
    scanf("%d", &idade); // %d para números decimais

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo); // %c para ler uma única resposta e & indica o local da variável

    printf("Nome: %s\n", nome); // \n vai gerar espaço após a exibição da variável
    printf("Idade: %d anos\n", idade);
    printf("Sexo: %c\n", sexo);
    system("pause");
    return 0;
}