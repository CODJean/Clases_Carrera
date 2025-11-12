/* Construir un programa en C que calcule la reactancia inductiva para una frecuencia en particular. El usuario del programa debe introducir el valor del inductor y de la frecuencia. La fórmula para calcular la reactancia inductiva es: XL = 2 π f L Donde: XL = Resistencia inducida en ohmios. f   = Frecuencia en hertzios. L  = Valor de la inductancia en henrios. */

#include <stdio.h>

int main()
{
    const float pi = 3.14159265359;
    float X = 0, f = 0, L = 0;
    printf("Ingrese el valor de la frecuencia en hertzios: ");
    scanf("%f",&f);
    printf("Ingrese el valor del valor de la inductancia en henrios: ");
    scanf("%f",&L);
    X=2*(pi)*f*L;
    printf("El valor de la reactancia inductiva para la frecuencia %fHz es de %f",f, X);
}
