#include <stdio.h>
int main() {
    int dia;
    printf("Digite um número de 1 a 7 para representar um dia da semana: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo - final de semana\n");
            break;
        case 2:
            printf("Segunda-feira - dia útil\n");
            break;
        case 3:
            printf("Terça-feira - dia útil\n");
            break;
        case 4:
            printf("Quarta-feira - dia útil\n");
            break;
        case 5:
            printf("Quinta-feira - dia útil\n");
            break;
        case 6:
            printf("Sexta-feira - dia útil\n");
            break;
        case 7:
            printf("Sábado - final de semana\n");
            break;
        default:
            printf("Número inválido! Por favor, digite um número entre 1 e 7.\n");
    }

    return 0;
}