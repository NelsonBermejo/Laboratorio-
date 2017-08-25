#include <stdio.h>
#include <stdlib.h>

int main()
{/*Ingresar 5 números y calcular su promedio
                                  */


    int numero;
    int acumulador;
    float promedio;
    int i;
    for ( i=0; i < 5; i++)
    {
        printf("Ingrese numero:  ");
        scanf("%d", &numero);
        acumulador=acumulador+numero;
    }
    promedio=(float)acumulador/5;

    printf("El promedio de los numeros ingresados es %.2f/n/n", promedio);//SI DIVIDO POR ENTEROS ME SALTA 2.40 SIENDO LOS NUMEROS TODOS 2;

    return 0;

}
