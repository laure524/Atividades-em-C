//fazer um programa para imprimir se um numero eh maior que 119 ou menor e igual a 46, este valor deve somar 1 no código se ele estiver errado


#include <stdio.h>

int main() 
{
    int numero;

    printf("Digite um numero:\n");
    scanf(" %d", &numero);

    if(numero >119 || numero <= 46)
        printf("O codigo esta correto\n");

    else{
    numero = numero +1;
        printf("O codigo esta incorreto\n");
    
    }
    return 0;
}
