#include <stdio.h>
#include <math.h>

float valor, taxa, aplicacao;

int main() {

    printf("Informe o valor: ");
    scanf("%f", &valor);

    taxa = 1.23;
    aplicacao = valor * taxa;

    printf("Valor final: %.2f\n", aplicacao);
    
    return 0;
}

