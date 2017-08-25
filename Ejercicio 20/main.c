#include <stdio.h>
#include <stdlib.h>
/*Hacer el programa que nos permita introducir un número
 por teclado y nos informe si es par o impar*/
int main()
{
    int numero;

    printf("Ingrese un numero \n");
    scanf("%d",&numero);

    if(numero%2==0)
    {
        printf("El numero ingresado es par %d ",numero);
    }
    else
    {
        printf("El numero ingresado es impar %d ",numero);
    }
    return 0;
}
