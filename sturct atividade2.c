#include <stdio.h>
#include <stdlib.h>

struct dados_usuario {

char nome[200];
int idade;
char endereco[200];

};

int main(){

struct dados_usuario usuari; 

printf("digite seu nome:");
gets(usuari.nome);

printf("digite sua idade: ");
scanf("%d",&usuari.idade);

printf("digite seu indereço: ");
scanf("%s",&usuari.endereco);

printf("\nEsibindo dados de usuariro\n");
printf("nome: %s \n",usuari.nome);
printf("idade: %d \n",usuari.idade);
printf("endereco: %s \n",usuari.endereco);

    return 0;
}