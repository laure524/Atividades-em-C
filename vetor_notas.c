#include<stdio.h>

int main()
{
    int notas [5];
    int indice; //indíce para controle do loop

    for(indice=0; indice<5; indice++)
    {
        printf("Informe a [%d] nota :", indice+1);
        scanf("%d", &notas[indice]);

}   
    printf("As notas dos alunos em ordem de entrada foram:\n");

    for (indice=0; indice<5;indice++)
    {
       printf("nota %d: %d\n", indice+1, notas [indice]);

    }  
    {
    printf("\nFim do programa.\n");
    }
    
}


