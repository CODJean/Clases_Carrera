// calculadora de impuestos  Si el salario es menor de 12 000 € → no paga impuestos. • Si el salario está entre 12 000 € y 25 000 € → paga un 10 %. • Si el salario está entre 25 001 € y 45 000 € → paga un 20 %. • Si el salario es mayor de 45 000 € → paga un 30 %. • Si el usuario tiene más de 65 años, se le aplica una reducción del 5 % sobre el impuesto calculado. 
#include <stdio.h>

int main() {
    float salario, impuesto;
    int edad;

    printf("Ingrese el salario anual en euros: ");
    scanf("%f", &salario);

    printf("Ingrese la edad del usuario: ");
    scanf("%d", &edad);

    if (salario < 12000) {
        impuesto = 0;
    } else if (salario <= 25000) {
        impuesto = salario * 0.10;
    } else if (salario <= 45000) {
        impuesto = salario * 0.20;
    } else {
        impuesto = salario * 0.30;
    }

    if (edad > 65) {
        impuesto *= 0.95; // Aplicar reducción del 5%
    }

    printf("El impuesto a pagar es: %.2f euros\n", impuesto);

    return 0;
}