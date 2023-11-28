#include <stdio.h>
#include <stdlib.h>

int main(){
int i,j;
char alunos[5] [200];
int idade[5];
int notas[5][3];
int soma = 0;
float media[5]
;
for(i = 0; i < 5; i++){
printf("digite o nome do usuario: ");
scanf("%s",&alunos[i]);

printf("digite sua idade:");
scanf("%d",&idade[i]);

for(j = 0;j < 3; j++){

    printf("digite sua nota: ");
    scanf("%d",&notas[i][j]);

    soma += notas[i][j];

    
}
media[i] = soma / j;
}
for(i = 0; i < 5; i++){

    printf("\n nome do  alunos: %s \n",alunos[i]);
}
for(j = 0; j < 3; j++){

     printf(" nota: %d \n", notas[i][j]);

printf("media: %.2f \n",media[i]);
}
    return 0;
}