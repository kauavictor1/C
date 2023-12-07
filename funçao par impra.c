#include <stdio.h>
#include <stdlib.h>

int par_dados(int numero[])
{
    int resultado;
    int i;
    int par = 0;

    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 0)
        {
            par++;
        }
    }
    return par;
}
int impar_dados(int numero[])
{
    int resultado;
    int i;
    int impar = 0;

    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 != 0)
        {
            impar++;
        }
    }
    return impar;
}


int main()
{

    int numero[6];
    int i;
    int par = 0;
    int impar = 0;
    for (i = 0; i < 6; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &numero[i]);

    }

    par = par_dados(numero);
    impar = impar_dados(numero);
    printf("quantidade de par: %d \n", par);
    printf("quantidade de impar: %d \n",impar);
    return 0;
}