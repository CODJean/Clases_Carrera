//programa para saber si un numero es multiplo de 3 y 5
#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("El numero %d es multiplo de 3 y 5.\n", numero);
    }
    else if (numero % 3 == 0 )
    {
        printf("El numero %d es multiplo de 3.\n", numero);}
    else if( numero % 5 == 0) {
        printf("El numero %d es multiplo de 5.\n", numero);
    } else {
        printf("El numero %d no es multiplo de 3 y 5.\n", numero);
    }

    return 0;
}