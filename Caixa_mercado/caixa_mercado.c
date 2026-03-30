#include <stdio.h>
#include <math.h>
int main() {
    float produto1, produto2, soma;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto1); // & para indicar qual variável estamos lendo


    printf("Digite o valor do segundo produto: ", produto2);
    scanf("%f", &produto2);

    soma = produto1 + produto2;
    printf("Total da compra: %.1f\n", soma);
    
    
    return 0;
}