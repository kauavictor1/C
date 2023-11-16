#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
int numero[5];
int parcontador = 0;
int imparcontador = 0;
int contador = 0;
int negativocontador = 0;
int positivocontador = 0;
int maiornumero;
int menornumero = 9999;
 int soma = 0;
 int somapar = 0;
 int somaimpar = 0;
 float mediapar = 0;
 float mediaimpar = 0;
 float media;
for(i = 0; i < 5; i++){

printf("digite um numero: ");
scanf("%d",&numero[i]);

maiornumero = numero[i] > maiornumero ? numero[i] : maiornumero;
menornumero = numero[i] < menornumero ? numero[i] : menornumero;

contador++;

soma += numero[i];
media = soma / 5;

if (numero[i] % 2 == 0){
parcontador++;
somapar += numero[i];
mediapar = somapar / 5;
}
else{
    imparcontador++;
    somaimpar += numero[i];
    mediaimpar = somaimpar / 5;
}
if (numero[i] < 0){
negativocontador++;
}
else{
    positivocontador++;
}

}

printf("\n");
printf("contador par: %d \n",parcontador);
printf("\n");
printf("numeros impares: %d \n",imparcontador);
printf("\n");
printf("quantidade de numeros inseridos: %d \n",contador);
printf("\n");
printf("quantidade de numeros negativos: %d \n",negativocontador);
printf("\n");
printf("quantidade de numeros positivos: %d \n",positivocontador);
printf("\n");
printf("maior numero: %d \n",maiornumero);
printf("\n");
printf("menor numero: %d \n",menornumero);
printf("\n");
printf("media: %f \n",media);
printf("\n");
printf("media de numeros pares: %f \n",mediapar);
printf("\n");
printf("media de numeros impares: %f \n",mediaimpar);
printf("\n");
printf("numeros em ordem inversa: \n");
for (i = --i; i >= 0; i--){
    printf("%d \n",numero[i]);
}
    return 0;
}