#include <stdio.h>
#include <stdlib.h>
/*Hacer el programa que nos permita introducir un número por teclado
 y nos informe si es positivo o negativo*/
int main()
{
    int numero;

    printf("Ingrese un numero\n");
    scanf("%d",&numero);

    if(numero>=0)
    {
        printf("El numero %d es positivo ",numero);
    }
    else
    {
        printf("El numero %d es negativo ",numero);
    }
    return 0;
}
