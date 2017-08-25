#include <stdio.h>
#include <stdlib.h>
/*tomar dos variables hacer la resta si el resultado es negativo o positivo mostrarlo por pantalla*/
int main()
{
    int numeroA;
    int numeroB;
    int resta;

    printf("Ingrese numero A: ");
    scanf("%d", &numeroA);

    printf("Ingrese numero B: ");
    scanf("%d", &numeroB);

    resta=numeroA-numeroB;

    if(resta>=0)
    {
        printf("El resultado de la resta es positivo %d",resta);
    }
    else
    {
        printf("El resultado de la resta es negativo %d",resta);
    }


    return 0;
}
