#include <stdio.h>
#include <stdlib.h>

void main()
{
    int d;
    printf("Ingrese un numero entero: ");
    scanf("%d", &d);
    if (d < 0 || d > 10)
    {
        printf("El numero %d es Nota no valida\n", d);
        return 0;
    }
    else
    {
        if (d > 5)
        {
            if (d >= 9)
            {
                printf("Sobresaliente\n", d);
            }
            else
            {
                printf("Aprobado", d);
            }
        }
        else
        {
            printf("Reprobado\n", d);
        }
    }
}