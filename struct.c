#include <stdio.h>
#include <stdlib.h>

struct dados_aluno {
char nome[200];
int idade;

};


int main(){
    //sturct dados_aluno -> tipo de dado
    //aluno ->variavel

struct dados_aluno aluno;

printf("digite o nome do aluno: ");
gets(aluno.nome);

printf("digite a idade do aluno: ");
scanf("%d",&aluno.idade);

printf("\nExibindo os dados do aluno... \n");
printf("nome do aluno: %s \n",aluno.nome);
printf("idade: %d \n",aluno.idade);

    return 0;
}