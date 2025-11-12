//Escribir un programa que calcule el número de segundos que hay en un día.

#include <stdio.h>

int main()
{
    int dias=1, horas=24 , segundos=60, minutos=60, segt=0;
    segt = dias*horas*minutos*segundos;
    printf("Los segundos que hay en un dia son: \n %d",segt);
    return 0;
}
