#include <stdio.h>

void calculo_perimetro(float l);
void calculo_area(float l);
int main()
{
    float l;
    printf("Ingrese el tamaño del lado del cuadrado: ");
    scanf("%f",&l);

    calculo_perimetro(l);
    calculo_area(l);

    return 0;
}
void calculo_perimetro(float l)
{
    float p;
    p=4*l;
    printf("El perimetro es de %f \n",p);
}

void calculo_area(float l)
{
    float a;
    a=l*l;
    printf("El perimetro es de %f \n",a);
}
