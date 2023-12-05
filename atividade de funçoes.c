#include <stdio.h>
#include <stdlib.h>

void tabela(int n){
    printf("%d X 1 \n",n);
    printf("%d X 2 \n",n);
    printf("%d X 3 \n",n);
    printf("%d X 4 \n",n);
    printf("%d X 5 \n",n);
    printf("%d X 6 \n",n);
    printf("%d X 7 \n",n);
    printf("%d X 8 \n",n);
    printf("%d X 9 \n",n);
    printf("%d X 10 \n",n);
}

int main(){
int n;

printf("digite um numero");
scanf("%d",&n);


tabela(n);

    return 0;
}