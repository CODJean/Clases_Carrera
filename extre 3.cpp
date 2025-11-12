//solicitar la tempertatura en grados Celsius y determinar si hay hipotermina, temp normal, febricula o fiebre

#include <stdio.h>

int main() {
    float temperatura;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura < 35.0) {
        printf("Hipotermia\n");
    } else if (temperatura >= 35.0 && temperatura <= 37.5) {
        printf("Temperatura normal\n");
    } else if (temperatura > 37.5 && temperatura <= 38.5) {
        printf("Febrícula\n");
    } else {
        printf("Fiebre\n");
    }

    return 0;
}