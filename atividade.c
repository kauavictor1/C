#include <stdio.h>
#include <stdlib.h>

struct dados_aluno
{
    char aluno[200];
    int data;
    float media;
    int nota;
    int soma;
    
};

void caucularMedia(struct dados_aluno alunos[]){
    int i;
    for(i = 0; i < 5; i++){
    alunos[i].soma = alunos[i].nota + alunos[i].nota;
    alunos[i].media = alunos[i].soma / 2; 

    if(alunos[i].media >= 7){
        printf("media %s \n",alunos[i].media);
        printf("nome %s \n",alunos[i].aluno);
        printf("aprovado:\n");
    }else{
        printf("media: %f \n",alunos[i].media);
        printf("nome %s \n",alunos[i].aluno);
        printf("reprovado:\n");
        
    }
    }
}

int main(){

struct dados_aluno alunos[5];
int i,j;

for(j = 0; j < 5; j++){
printf("\ndigite o nome do aluno: ");
gets(alunos[j].aluno);

printf("digite a data de nacimento:");
scanf("%d",&alunos[j].data);


for(i = 0; i < 2; i++){

    printf("digite uma nota: ");
    scanf("%d",&alunos[i].nota);
}
}
caucularMedia(alunos);

    return 0;
}