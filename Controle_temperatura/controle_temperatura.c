#include <stdio.h>
#include <stdlib.h>

int main() {
    float temperatura;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    printf("Temperatura: %.1f graus Celsius\n", temperatura); // %.1f para exibir uma casa decimal apenas

    system("pause");
    return 0;
}