#include <stdio.h>
#include <stdlib.h>

int main(){

int vetor[5];
int i;

printf("Digite os elemetos do vetor: \n");
for(i = 0;i < 5; i++){

printf("elementos %d:",i + 1);
scanf("%d",&vetor[i]);

}

    return 0;
}
