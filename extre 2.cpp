//leer 2 numeros e indicar cual es mayor, menor o si son iguales
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("El numero %d es mayor que %d.\n", num1, num2);
    } else if (num1 < num2) {
        printf("El numero %d es menor que %d.\n", num1, num2);
    } else {
        printf("Ambos numeros son iguales: %d.\n", num1);
    }

    return 0;
}