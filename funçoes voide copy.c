#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
      printf("\n=====================================\n");
    printf("\tSENAI");
    printf("\n=====================================\n");
}

int somar(int primeiroNumero, int segundoNumero){
    int resultado;
    resultado = primeiroNumero + segundoNumero;
    return resultado;
}

int main(){
    int primeiroNumero;
    int segundoNumero;
    int soma;

cabecalho(); //chamada da função.
    printf("Digite primeiro numero: ");
    scanf("%d",&primeiroNumero);

    printf("Digite segundo numero: ");
    scanf("%d",&segundoNumero);

    soma = somar(primeiroNumero, segundoNumero);

    cabecalho(); //chamado da função.
    printf("soma %d \n",soma);

    return 0;
}