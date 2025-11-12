// programa para identificar la validez de un año ingresando 3 nunmeros enteros por el usuario siguiendo las siguientes regqlas:( / & 3 (		& 4 3 # $		$	" 5	. $ # . # 6 # 7 # 8 # 0 & 4 5 . 0 $ 9 # : # ; & ( 48 $ 4
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int dia, mes, ano;
    printf("Ingrese el día: ");
    scanf("%d", &dia);
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    printf("Ingrese el año: ");
    scanf("%d", &ano);
    bool valid = true;

    int esBisiesto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

    if (mes < 1 || mes > 12)
    {
        printf("Mes no válido.\n");
        return 0;
    }

    int diasEnMes;
    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        diasEnMes = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        diasEnMes = 30;
        break;
    case 2:
        if (esBisiesto)
            diasEnMes = 29;
        else
            diasEnMes = 28;
        break;
    default:
        printf("Mes no válido.\n");
        return 0;
    }

    if (dia < 1 || dia > diasEnMes)
    {
        printf("Día no válido para el mes ingresado.\n");
        valid = false;
    }

    printf(valid ? "La fecha es válida." : "La fecha no es válida.");

    return 0;
}