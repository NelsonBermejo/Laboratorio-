#include <stdio.h>
#include <stdlib.h>
/*
Escribir un programa que realice lea por teclado 20 caracteres.
 Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"*/
int main()
{
    char letra;
    int contador=0;
    int contA=0;
    int contE=0;
    int contI=0;
    int contO=0;
    int contU=0;

    while(contador<10)
    {
        printf("Ingrese letra: ");
        fflush(stdin);
        scanf("%c",&letra);

contador++;
    switch(letra)

    {
        case 'a' :
                    contA++;
                    break;
        case 'e' :
                    contE++;
                    break;
        case 'i' :
                    contI++;
                    break;
        case 'o' :
                    contO++;
                    break;
        case 'u' :
                    contU++;

                            break;

    }//cierra while;
    }//cierre de switch;
    printf("Se Ingresaron A= %d \n, E= %d \n, I= %d \n, O= %d \n, U= %d \n",contA,contE,contI,contO,contU);
    return 0;

}
