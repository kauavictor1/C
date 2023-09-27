#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
//declarando variaves
char nome [250];
int idade;
int notaUM;
int notaDois;
int notaTres;
int media;
int soma;
//dados do usuario
printf("node do usuario:");
scanf("%S",&nome);

printf("idade do aluno:");
scanf("%d",&idade);

fflush(stdin);

printf("ponha primeira nota do aluno:");
scanf("%d",&notaUM);

printf("ponha a segunda nota do aluno:");
scanf("%d",&notaDois);

fflush(stdin);

printf("ponha a terseira nota do aluno:");
scanf("%d",&notaTres);

//caucolos
soma == notaUM + notaDois + notaTres;
media == soma / 3;

printf("media: %d \n",media);
printf("soma %d \n", soma);

if (media >= 7){
    printf("A provado");
}else{
    printf("reprovado");
}
    return 0;
}
