#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Diseñar un programa que calcule la superficie de un triángulo
a partir del ingreso de su base y altura y muestre el resultado.
*/
int main()
{
    float base;
    float altura;
    float superficie;

    printf("Ingrese base: ");
    scanf("%f", &base);

    printf("Ingrese altura: ");
    scanf("%f", &altura);

    superficie=base*altura/2;

    printf("Superficie del triangulo= %.2f\n",superficie);
    return 0;

}
