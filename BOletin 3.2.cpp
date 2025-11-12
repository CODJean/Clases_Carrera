#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, X;
    printf("Introduce el valor de a: ");
    scanf("%f", &a);
    printf("Introduce el valor de b: ");
    scanf("%f", &b);
    printf("Introduce el valor de c: ");
    scanf("%f", &c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("La ecuacion es indeterminada.\n");
    }
    else if (a == 0 && b == 0 && c != 0) 
    {
        printf("La ecuacion no soluciones\n");
    }
    else if (a == 0)
    {
        X = -c / b;
        printf("La solucion de la ecuacion es: %.4f\n", X);
    }
    else
    {
        float discriminante = b * b - 4 * a * c;
        if (discriminante < 0)
        {
            printf("La ecuacion no tiene soluciones reales.\n");
        }
        else if (discriminante == 0)
        {
            X = -b / (2 * a);
            printf("La ecuacion tiene una solucion doble: %.4f\n", X);
        }
        else
        {
            float X1 = (-b + sqrt(discriminante)) / (2 * a);
            float X2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("La ecuacion tiene dos soluciones reales: %.4f y %.4f\n", X1, X2);
        }
    }
    
    return 0;
}
    