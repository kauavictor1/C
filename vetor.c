#include <stdio.h>
#include <stdlib.h>

int main(){


int tamanho = 3;
int i;
float notas [3];


for(i = 0; i < tamanho; i++){

    printf("digite a %d nota: ", i + 1);
    scanf("%f",&notas[i]);
}


printf("\nMostrando notas. \n");

for(i = 0; i < tamanho; i++){
printf("%d notas: %.1f \n", i + 1, notas[i]);

}

    return 0;
}