//Desarrollar un programa en C que convierta grados Celsius a grados Fahrenheit. La entrada del usuario es la temperatura Celsius. La relación es: F = (9/5) C + 32 Donde: F   = Temperatura en grados Fahrenheit. C   = Temperatura en grados Celsius.

#include <stdio.h>

int main()
{
    const int num = 32;
    float c=0, F=0;
    printf("Ingrese la temperatura en celsius: ");
    scanf("%f", &c);
    F=(9/5)*c+32;
    printf("Los %f%c en grados fahrenheit es de: %f.",c,248,F);
    return 0;
}
