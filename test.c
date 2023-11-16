#include <stdint.h>
#include <stdlib.h>

int main(){

int numero[2][2];
int i,j;

for(i =0; i < 2; i++){
    for(j = 0; j < 2; j++){

        printf("elementos da %d coluna %d ", i +1, j + 1);
        scanf("%d",&numero[i][j]);
    }

}

    return 0;
}