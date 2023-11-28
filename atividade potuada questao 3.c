#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
int numero[200];
char nome[200][200];
int opicao;
do
{
printf("para adiciona um numero aperte 1 e para mostra a lista de contatos 2: ");
scanf("%d",&opicao);


switch (opicao)
{
    
case 1:
    printf("digite o nome do contato:");
    scanf("%s",&nome[i]);
    printf("escreva o numero de contato:");
    scanf("%d",&numero[i]);
    break;
case 2:

for(i = 0;i < 1; i++){
printf("numeros a lista %d \n",numero[i]);
}
break;
default:

    break;
}

    return 0;
}