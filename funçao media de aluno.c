#include <stdio.h>
#include <stdlib.h>

float media(int n1,int n2, int n3){
    int resultado;
    int soma = 0;
    float media = 0;
    soma = n1 + n2 + n3;
    media = soma / 3;
    if(media >= 7){
        printf("aprovado:");
    }else{
        printf("reprovado:");
    }
    return media;
}

int main(){
int notaUm;
int notaDois;
int notaTres;
int i;
float final;


    printf("digite uma nota: ");
    scanf("%d",&notaUm);

    printf("digite a segunda nota: ");
    scanf("%d",&notaDois);

    printf("digite a tercera nota: ");
    scanf("%d",&notaTres);

final = media(notaUm,notaDois,notaTres);

printf("media %f \n",final);

    return 0;
}