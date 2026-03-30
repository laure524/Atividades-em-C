#include <stdio.h>
#include <math.h>

int main () {
float x1, x2, y1, y2, distancia;

    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%f %f", &x1, &y1); // dois %f pois temos dois valores

    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%f %f", &x2, &y2); 

    distancia=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); //sqrt para raiz quadrada e a fórmula para a distância
    printf("Distancia: %.2f\n", distancia);

    // deve inserir o valores para as coordenadas de modo 1 2 3 4 sem usar vírgula
    return 0;
}




