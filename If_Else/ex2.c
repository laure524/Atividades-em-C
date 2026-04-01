#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; // Declaração de variável

    printf("Digite um numero:\n");
    scanf("%d", &a);
    if (a > 10) // não vai;
    {
        printf("O numero eh maior que 10\n");
    }
    if (a<10)// não vai;
    {
        printf("O numero eh menor ou igual a 10\n");
    }

        else
    {
        printf("O numero eh igual a 10\n");
        
    }
    printf("Fim\n");
        return 0;
    }