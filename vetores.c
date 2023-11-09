#include <stdio.h>
#include <stdlib.h>

int main(){

float notas[3];


printf("digite a 1 nota: ");
scanf("%f",&notas[0]);
printf("digite a 2 nota: ");
scanf("%f",&notas[1]);
printf("digite a 3 nota: ");
scanf("%f",&notas[2]);

printf("\nMostrando as notas \n");


printf("1 nota: %.1f \n", notas[0]);
printf("2 nota: %.1f \n", notas[1]);
printf("3 nota; %.1f \n", notas[2]);

    return 0;
}