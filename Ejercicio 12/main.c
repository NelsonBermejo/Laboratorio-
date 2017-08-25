#include <stdio.h>
#include <stdlib.h>
/*Hacer el programa que imprima los números del 1 al 100
*/
int main()
{
    printf("\t\t IMPRIME LOS NUMEROS DEL 1 AL 100\n");
    printf("\t\t------------------------------------\n");

    printf("Precione una tecla para ejecutar la funcion\n\n");
    getch();

    int i;
    int a=0;
    for(i=0;i<=100;i++){
        printf("%d ",i);
        //agrego el salto de linea
        a++;
        while(a==11)
        {
                printf("\n");
                a=0;
        }

    }
    return 0;
}
