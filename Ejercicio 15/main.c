#include <stdio.h>
#include <stdlib.h>
/*Escribir en  y codificar en C un programa que muestre los múltiplos de 6 comprendidos entre 0 y 100*/
int main()
{
    printf("\t\tSe ejecutan todos los multiplos de 6\n");
    printf("\t\t---------------------------------------\n");

    printf("Al precionar una tecla se ejecutara el programa\n");
    getch();

    int i;
    int a=0;

    for(i=0;i<=100;i++)
        {
            if(i%6==0)
            {
            printf("%i ",i);
            a++;
            while(a==10)
            {
                    printf("\n");
                    a=0;
            }
            }
        }




    printf("Hello world!\n");
    return 0;
}
