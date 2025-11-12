// codigo para saber si un año es bisiesto creando una función int esBisiesto(int año) que devuelva 1 si el año es bisiesto y 0 si no lo es. Un año es bisiesto si es divisible por 4, y (no divisible por 100 o divisible por 400).

#include <stdio.h>
int esBisiesto(int ano);
int main()
{
    int ano;

    printf("Ingrese un año: ");
    scanf("%d", &ano);

    if (esBisiesto(ano))
    {
        printf("%d es un año bisiesto.\n", ano);
    }
    else
    {
        printf("%d no es un año bisiesto.\n", ano);
    }

    return 0;
}
int esBisiesto(int ano)
{
    if ((ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0))
    {
        return 1; // Es bisiesto
    }
    else
    {
        return 0; // No es bisiesto
    }
}