#include <stdio.h>
#include <stdlib.h>
/*Diseñar un programa que imprima y sume la serie de números 3,6,9,12,...,99.*/
int main()
{
    int i;
    int numero;
    int sumaNumeros=0;
    for(i=0;i<5;i++){
        printf("Ingrese Numero =");
        scanf("%d",&numero);
        sumaNumeros=sumaNumeros+numero;
    }

    printf("La sumatoria de los numeros ingresados es= %d\n",sumaNumeros);
    return 0;
}
