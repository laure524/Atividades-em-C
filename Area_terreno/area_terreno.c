#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    float area, raio; 
    float pi = 3.14;

    printf("Tamanho do terreno:");
    scanf("%f", &raio);

    area= pi*raio*raio; // fórmula para calcular a área

    printf("Area: %.2f\n", area);

    return 0;
}