#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"

int menu()
{

    int opcion;

    printf("\n\n1 - ALTA DE USUARIO - ");
    printf("\n2 - MODIFICION DE USUARIO ");
    printf("\n3 - BAJA DE USUARIO ");
    printf("\n4 - NUEVO COMENTARIO " );
    printf("\n5 - NUEVO ME GUSTA ");
    printf("\n6 - INFORMAR ");
    printf("\n7 - LISTAR ");
    printf(("\n8 - SALIR ");

    scanf("%d",&opcion);

return opcion;//numero que elije;
}
void altaUsuario(eUsuario InicializacionDelUsuario[],int posicion)
{
 char auxiliardelUsuario[50];
 printf("Ingrese Nombre");
 fflush(stdin);
 scanf("%s",auxiliarDelUsuario);
 strcpy(InicializacionDelUsuario[posicion],auxiliarDelUsuario);

}

