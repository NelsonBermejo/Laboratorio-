#include <stdio.h>
#include <stdlib.h>
#include <math.h>/*Esto lo agrego para poder potenciar dentro del area.
 tambien en esta libreria se encuentran ceno coseno y logaritmos*/



/*Diseñar un programa que calcule la longitud de la circunferencia y el área del círculo de radio dado.*/

int main()
{
    /*Declaracion de variables*/
    float area;
    float radio;
    float longitud;
    static float PI=3.1416;
    /*Entrada de datos*/
    printf("Ingrese el radio en cm ");
    scanf("%f",&radio);
    /*Calculo del Area*/
    area=PI*pow(radio,2);//pow=powerme permite elevar al cuadrado,

    longitud=2*PI*radio;

    printf("Area= %.3f cm2 y longitud= %.3f",area,longitud);
    return 0;
}
