#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int numeros[5];
int contador = 0;
int contadorPar = 0;
int contadorImpar = 0;
int somaPar = 0;
float mediaPar = 0;
int soma = 0;
float media = 0;
int contadorNegativo = 0;
int maiorNUmero = 0;
int menorNumero = 9999999;
for(i = 0; i < 5; i++){

printf("digite um numero:");
scanf("%d",&numeros[i]);

contador++;

maiorNUmero = numeros[i] > maiorNUmero ? numeros[i] : maiorNUmero;
menorNumero = numeros[i] < menorNumero ? numeros[i] : menorNumero;

soma += numeros[i];
media = numeros[i] / contador;
if(numeros[i] % 2 == 0){

    contadorPar++;
 
}else{

    contadorImpar++;
somaPar += numeros[i];
mediaPar = somaPar / contadorPar;
} 
if (numeros[i] < 0){
    contadorNegativo++;
}
}
printf("media par %.2f \n",mediaPar);
printf("contador impar: %d \n",contadorImpar);
printf("quantidade de numeros negativos: %d \n",contadorNegativo);
printf("media: %.2f \n",media);
printf("maior numero: %d \n",maiorNUmero);
printf("menor numero %d \n",menorNumero);
    return 0;
}
