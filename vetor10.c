#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
int numero[5];
int negativo = 1;

for(i = 0; i <  5; i++){

printf("digite um numero: ", i + 1);
scanf("%d",&numero[i]);

}
printf("\nEsibindo valores.. \n");

for(i =0; i < 5; i++)
if(numero[i] >= 0){
printf("numero: %d \n",numero[i]);
}
else if ( numero[i] < 0){



printf("numero: %d \n", numero[i] = 0);
}


    return 0;
}