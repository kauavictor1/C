#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    // solicitando dados do usuario
    int idade;
float peso;
char sexo [250];
char nome [250];
    printf("Digite sua idade:");
    scanf("%d", &idade);

printf("Digite seu peso:");
scanf("%f",&peso);

fflush(stdin); // limpa o cache de input.

printf("Digite sue sexo");
scanf("%s",&sexo);

fflush(stdin);// limpa o cache de input.

printf("Digite seu nome:");
scanf("%s",&nome);

//outro jeito de pedir o nome


// limpa tela 
system("cls");


    // Exibindo dados do usuario.
    
    printf("idade: %d \n", idade);
    
printf("peso: %.2f \n", peso);

printf("sexo: %s \n", sexo);

printf("nome: %s \n", nome);

    return 0;  
}
