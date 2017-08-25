#include <stdio.h>
#include <stdlib.h>
/*Escribir  un programa que realice las siguientes acciones
Limpie la pantalla
Asigne a 2 variables numero1 y numero2 valores distintos de cero
Efectúe el producto de dichas variables
Muestre el resultado pos pantalla
Obtenga el cuadrado de numero1 y lo muestre par pantalla
*/
int main()
{
    int numeroA;
    int numeroB;
    int multiplicacion;
    int cuadradoA;

    system("cls");

    printf("Ingrese numero A");
    scanf("%d",&numeroA);
    while(numeroA==0)
    {
        printf("Error reingrese numero A");
        scanf("%d",numeroA);
    }
    printf("Ingrese numero B");
    scanf("%d",&numeroB);
    while(numeroB==0)
    {
        printf("Error reingrese numero B");
        scanf("%d",&numeroB);
    }
    multiplicacion=numeroA*numeroB;
    cuadradoA=numeroA+numeroA;

    printf("El resultado de la multiplicacion es: %d y el resultado del cuadrado del 1er numero es: %d ",multiplicacion,cuadradoA);
    return 0;

}
