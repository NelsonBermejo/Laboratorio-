#include <stdio.h>
#include <stdlib.h>
/*Diseñar el programa necesario para que habiéndose leído el valor de 2 variables NUM1 y NUM2
 se intercambien los valores de las variables,
es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y viceversa*/
int main()
{
    int num1;
    int num2;
    int num3=0;

    printf("Ingrese num1 ");
    scanf("%d",&num1);
    printf("Ingrese num2 ");
    scanf("%d", &num2);

    num3=num1;
    num1=num2;
    num2=num3;

    printf("El numero num1 ingresado es %d ",num1);
    printf("El numero num2 ingresado es %d ",num2);



    return 0;
}
