#include <stdio.h>
#include <stdlib.h>


int main(){

int i;
int numeros[5];
int maiornumero = 0;
int menornumero = 9999;


for(i = 0 ; i < 5 ; i++){

    printf("digite um numero:");
    scanf("%d",&numeros[i]);


maiornumero = numeros[i] > maiornumero ? numeros[i] : maiornumero;
menornumero = numeros[i] < menornumero ? numeros[i] : menornumero;

}
printf("\nExibindo os numeros \n");

for(i = 0; i < 5 ; i++){

    printf("numero %d \n",numeros[i]);
}
printf("maior %d \n",maiornumero);
printf("menor %d \n",menornumero);




return 0;
}