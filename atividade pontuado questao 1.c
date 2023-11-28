#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarando variaves
int i;
int idade[5];
char nome[5] [200];
float peso[5];
float altura[5];
float maiorAltura;
float menorAltura = 99999;
float maiorPeso;
float menorPeso = 99999;
int maiorIdade;
int menorIdade = 99999;
//usando laço de repetiçao com vetores
for(i = 0; i < 5; i++){


printf("Digite o nome do usuario: ");
scanf("%s",&nome[i]);

printf("Digite sua idade: ");
scanf("%d",&idade[i]);

printf("Digite o peso do usuario: ");
scanf("%f",&peso[i]);

printf("Digite a altura do usuario:");
scanf("%f",&altura[i]);



    maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
    menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;

    maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
    menorPeso = peso[i] < menorPeso ? peso[i] : menorPeso;

    maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
    menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;

}


//esibindo resultados
for(i = 0; i < 5; i++){
    printf("Nome: %s \n",nome[i]);
    printf("idade: %d \n",idade[i]);
    printf("peso: %.2f \n",peso[i]);
    printf("Altura: %.2f \n",altura[i]);
    printf(" \n======================= \n");
}
 printf("Maior altura: %.2f \n ",maiorAltura);
    printf("menor altura: %.2f \n",menorAltura);
printf("maior peso: %.2f \n",maiorPeso);
    printf("menor peso %.2f \n",menorPeso);
    printf("maior idade %d \n",maiorIdade);
    printf("menor idae %d \n ",menorIdade);    

    return 0;
}