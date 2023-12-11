#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_usuario
{
    char nome[200];
    char numero[200];
    char email[200];
};

void buscartelefone(struct dados_usuario usuarios[], char *buscarcontato)
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if (strcmp(usuarios[i].nome, buscarcontato) == 0)
        {
            printf("\ntelefone de %s: %s", usuarios[i].nome, usuarios[i].numero);
            break;
        }
    }
    printf("\ncontato nao encontrado.");
}

int main()
{
    struct dados_usuario usuarios[3];
    int i;
    char buscarContato[2008];

    for (i = 0; i < 3; i++)
    {

        printf("digite um nome: ");
        gets(usuarios[i].nome);

        printf("digite um numro: ");
        gets(usuarios[i].numero);

        printf("digite um email: ");
        gets(usuarios[i].email);
    }

    printf("\n digite o nume do contato que deseja buscar\n");
    scanf("%s", &buscarContato);

    buscartelefone(usuarios, buscarContato);

    return 0;
}