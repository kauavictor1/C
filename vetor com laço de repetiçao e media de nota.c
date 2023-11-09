#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
float notas[3];
float soma = 0;
float media = 0;
int tamanho = 3;

for(i = 0 ; i < tamanho; i++){

printf("digite a nota: ", i + 1);
scanf("%f",&notas[i]);

soma += notas[i];
}
media = soma / i; //i = 3;

printf("media: %f \n",media);


    return 0;
}