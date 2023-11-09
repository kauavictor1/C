#include <stdio.h>
#include <stdlib.h>


int main(){

int notas[3];
int i;

for(i = 0; i < 3; i++ ){
printf("digite sua nota: ",i + 1);
scanf("%d",&notas[i]);
}

printf("1 nota: %d \n",notas[0]);
printf("2 nota: %d \n",notas[1]);
printf("3 nota: %d \n",notas[2]);




return 0;
}