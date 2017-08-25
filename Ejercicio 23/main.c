#include <stdio.h>
#include <stdlib.h>
/*De 3 números ingresados desde el teclado por el usuario, indicar cuál es el mayor*/
int main()
{
    int numero;
    int bandera=true;
    int i;
    int min;
    int max;
    for(i=0;i<4;i++)
    {
        printf("Hola Sr. Nelson, ingrese un numero por favor ");
        scanf("%d",&numero);
        if(bandera==true)
        {
            max=numero;
            min=numero;
            badera=false;
            if(max>numero)
            {
                max=numero;
            }
            if(min<max)
            {
                min=numero;
            }
        }
    }
    printf("Hello world!\n");
    return 0;
}
