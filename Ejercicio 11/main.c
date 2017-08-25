#include <stdio.h>
#include <stdlib.h>
/*Hacer el programa que imprima los números pares entre el 1 y el 100
*/
int main()
{
    int i;
    int a=0;
    printf("\t\tNumeros del 1 al 100 \n");
    printf("\t\t----------------------\n");

    printf("Precione cualquier tecla para mostrar la lista....\n\n\n");
    getch();//El ejecutable al precionar una tecla;

    for(i=0;i<=100;i++)
        {
            if(i%2==0){
            printf("%i ",i);
            a++;
            while(a==10)
                {
                    printf("\n");
                    a=0;
                }
            }
        }
    return 0;
}
