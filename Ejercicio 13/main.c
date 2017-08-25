#include <stdio.h>
#include <stdlib.h>
/*Hacer el programa que imprima los números del 100 al 0 en orden decreciente*/
int main()
{
    printf("\t\t Numeros del 1 al 100 en orden decreciente \n");
    printf("\t\t--------------------------------------------\n");

    printf("Al precionar cualquier tecla el programa se ejecutara\n\n");
    getch();

    int i;
    int a=0;

    for(i=100;i>0;i--)
        {
            printf("%d ",i);
            a++;
            while(a==10)
                {
                    printf("\n");

                    a=0;
                }
        }

    return 0;
}
