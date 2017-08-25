#include <stdio.h>
#include <stdlib.h>
/*Diseñar en  un programa que permita ingresar 10 números, ninguno de ellos igual a cero. Se pide sumar los positivos,
obtener el producto de los negativos y luego mostrar ambos resultados*/
int main()
{
    int numero;
    int i;
    int sumar=0;
    int producto=1;

    for(i=0;i<4;i++)
    {
        printf("Ingrese numero");
        scanf("%d",&numero);
        while(numero==0)
        {
                printf("Error ingrese un numero distinto de cero ");
                scanf("%d", &numero);

        }
        if(numero>0)
        {
            sumar=sumar+numero;
        }
        else
        {
            producto=producto*numero;
        }
    }
    printf("Hola Nelson la suma de los numeros positivos es = %d \n",sumar);
    printf("MIentras que el producto de los numero negativos es %d ",producto);

    return 0;
}
