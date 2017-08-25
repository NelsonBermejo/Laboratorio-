#include <stdio.h>
#include <stdlib.h>
/*Escribir el programa necesario para calcular y mostrar el cuadrado de un número.
 El número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"
*/
int main()
{
    int numero;
    int resultado;

    printf("Ingrese numero ");
    scanf("%d",&numero);
    while(numero==0)
    {
        printf("Error reingrese numero");
        scanf("%d",&numero);
    }
    resultado=numero*numero;
    if (resultado>=0)
    {
        printf("El resultado es %d",resultado);
    }
    else
        {
            printf("Error el numero debe ser mayor que cero ");
        }

    return 0;
}
