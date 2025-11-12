//Desarrollar un programa en C que calcule el área de un círculo. El usuario debe introducir el radio del círculo. Usar la siguiente fórmula del área: A =  π R

#include <stdio.h>
#include <math.h>

int main()
{
    const float pi = 3.14159265359;
    float A = 0,R = 0, r = 0;
    printf("Ingrese el valor del radio del c%crculo: ",161);
    scanf("%f",&r);
    R = pow(r, 2);
    A= pi*R;
    printf("El %crea del c%crculo de radio %f%c es de: %f",160,161,r,248, A);
    return 0;
}
