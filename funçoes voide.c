#include <stdio.h>
#include <stdlib.h>


void cabecalho(){
    printf("\n=====================================\n");
    printf("\tSENAI");
    printf("\n=====================================\n");
}

int main(){
char nome[200];
int idade;

cabecalho(); //chamada da função.

    printf("Digite um nome: ");
    gets(nome);

    printf("Digite uma idade: ");
    scanf("%d",&idade);

    cabecalho(); //chamado da função.

    printf("nome: %s \n",nome);
    printf("idade: %d \n",idade);
    return 0;
}