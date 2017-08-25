#include <stdio.h>
#include <stdlib.h>
/*Escribir en C un programa que muestre los números impares entre 0 y 100 y que imprima cuantos impares hay
*/
int main()
{
    int numero;
    int contador=0;
    int contPar=0;
    int contImpar=0;
    while(contador<5)
    {
        printf("Ingrese numero ");
        scanf("%d",&numero);
        contador++;

        if(numero%2==0)
        {
            contPar++;
        }
        if(!(numero%2==0))
        {
            contImpar++;
        }
    }

    printf("Total de numeros pares= %d\n",contPar);
    printf("Total de numeros impares= %d\n",contImpar);
    return 0;
}
