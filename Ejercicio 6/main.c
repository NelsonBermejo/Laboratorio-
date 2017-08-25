#include <stdio.h>
#include <stdlib.h>
/*De 10 números ingresadas indicar cuantos son mayores
a cero y cuantos son menores a cero*/

int main()
{
    int numero;
    int mayores=0;
    int menores=0;
    int contador=0;
    while(contador<5)
    {

        printf("Ingrese Numero ");
        scanf("%d",&numero);

        if (numero>0)
            {
                mayores++;

            }
        if(numero<0)
            {
                menores++;
            }
        contador++;

    }
    printf("Fueron Ingresado %d numeros Mayores a Cero , %d Menores de Cero",mayores,menores);
    return 0;
}
