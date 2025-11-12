#include <stdio.h>

float calculo(float I, float E);
void imprimir(float P);

int main()
{
    float I,E,P;
    printf("Ingrese el valor de E:");
    scanf("%f", &E);
    printf("Ingrese el valor de I:");
    scanf("%f", &I);
    P = calculo(I,E);
    imprimir(P);
    return 0;
}

float calculo(float I, float E)
{
    float P;
    P = I * E;
    return P;
}
void imprimir(float P)
{
    printf("El valor de la potencia es de: %f vatios", P);
}

