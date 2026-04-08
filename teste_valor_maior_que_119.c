//fazer um programa para imprimir se um numero eh maior que 119 ou menor e igual a 46, este valor deve somar 1 no código se ele estiver errado


#include <stdio.h>

int main() 
{
    int numero = 120;

    printf("Digite um numero:\n");

    if(numero > 119 || numero <= 46) {
        printf("O codigo esta correto\n");
    }        

    else
    {
    numero = numero +1;
        printf("O codigo esta incorreto, codigo novo = %d", codigo);
    
    }
    return 0;
}
