#include <stdio.h>
#include <stdlib.h>

int main(){ 
    float nota;
    
    printf("Digite a nota:\n");
    scanf("%f", &nota);
    if(nota>=7)
    {
        printf("O aluno(a) esta aprovado com nota %.1f\n", nota);
    }
    else if(nota>5&&nota<=7)
    {
        printf("O aluno(a) esta em exame com nota %.1f\n", nota);
    }
    else
    {
        printf("O aluno(a) esta reprovado com nota %.1f\n", nota);
    }
    
    return 0;
}