#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
float PrimeiraNota;

float SegundaNota;

float media;
    //solicitando media do usuario
    

    printf("Digite sua primeira nota:");
    scanf("%f",&PrimeiraNota);

    printf("Digite sua segunda nota:");
    scanf("%f",&SegundaNota);

media = (PrimeiraNota + SegundaNota) / 2;

//esibir dados do usuarios
printf("PrimeiraNota: \n",PrimeiraNota);

printf("segundaNota: \n",SegundaNota);

printf("media:", media);

return 0;

}
