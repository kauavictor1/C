#include <stdio.h>
#include <stdlib.h>

struct dados_categoria {
    char livros[200];
    char autor[200];
    float preco;
    char categoria[200];
};

int main(){

struct dados_categoria livro[3];
int i;

for(i = 0; i < 3; i++){

    printf("digite o nome do livro: ");
    gets(livro[i].livros);

    printf("digite o nome do autor: ");
    gets(livro[i].autor);

    printf("digite o preco do livro: ");
    scanf("%f",&livro[i].preco);

    printf("digite a categoria: ");
    gets(livro[i].categoria);

    printf("\nEsibindo dados do livro \n");
    printf("nome do livro %s \n",livro[i].livros);
    printf("nome do autor %s \n",livro[i].autor);
    printf("preco do livro %f \n",livro[i].preco);
    printf("categoria do livro %s \n",livro[i].categoria);
    printf("\n=======================\n");    
}
    return 0;
}