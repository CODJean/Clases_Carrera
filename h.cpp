//programa que permita ingregar un operador aritmetico y 2 numeros cualesquiera
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"");

    int num1, num2;
    char operador;

    printf("Ingrese un operador aritmético (*,-,+o /): ");
    scanf(" %c", &operador);
    printf("Ingrese dos números: ");
    scanf("%d %d", &num1, &num2);
    switch (operador)
    {
    case '+':
        printf("La suma es: %d\n", num1 + num2);
        break;
    case '-':
        printf("La resta es: %d\n", num1 - num2);
        break;
    case '*':
        printf("La multiplicación es: %d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0) {
            float num3 = num1 / num2;
            printf("La división es: %.2f\n", num3 );
        } else {
            printf("Error: División por cero no permitida.\n");
        }

    default:
        break;
    }

    return 0;
}
