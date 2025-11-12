//programa que me dija el dia de la semana segun un numero del 1 al 7 con switch
#include <stdio.h>
int main() {
    int dia;

    printf("Ingrese un numero del 1 al 7 para conocer el dia de la semana: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Lunes\n");
            break;
        case 2:
            printf("Martes\n");
            break;
        case 3:
            printf("Miercoles\n");
            break;
        case 4:
            printf("Jueves\n");
            break;
        case 5:
            printf("Viernes\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Numero invalido. Por favor ingrese un numero del 1 al 7.\n");
            break;
    }

    return 0;
}