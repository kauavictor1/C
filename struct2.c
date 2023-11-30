#include <stdio.h>
#include <stdlib.h>

struct dados_informacao
{
    char nome[200];
    int idade;
    float notas[2];
   
};
int main()
{

    struct dados_informacao vetor[3];
    int soma;
    float media;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("digite seu nome: ");
        gets(vetor[i].nome);

        printf("digite sua idade: ");
        scanf("%d", &vetor[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("digite suas notas: ");
            scanf("%f",&vetor[i].notas[j]);
         soma += vetor[i].notas[j];
            media = soma / j;
        }    
        fflush(stdin);
        
    }
    for (i = 0; i < 3; i++)
    {
        printf("nome : %s \n", vetor[i].nome);
        printf("idade: %d \n", vetor[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("notas: %f \n", vetor[i].notas[j]);
        }
        printf("media %f \n ",media);
    }
    return 0;
}