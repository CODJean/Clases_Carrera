#include <stdio.h>

void leer_datos(float *b,float *h);
float calcular_perimetro(float b, float h);
float calcular_area(float b, float h);
void mostrar_resultados(float p, float a);
void guardar_fichero(float p, float a);

int main()
{
    float b, h, p, a;
    leer_datos(&b, &h);
    p = calcular_perimetro(b, h);
    a = calcular_area(b, h);
    mostrar_resultados(p,a);
    guardar_fichero(p, a);
    return 0;
}

void leer_datos(float *b,float *h)
{
    printf("ingrese el valor de la altura y de la base: ");
    scanf("%f %f", h, b);
}
float calcular_perimetro(float b, float h)
{
    float Perimetro = 2*(b + h);
    return Perimetro;
}
float calcular_area(float b, float h)
{
    float area = b * h;
    return area;
}
void mostrar_resultados(float p, float a)
{
    printf("Perimetro: %f \n Area: %f",p, a);
}
void guardar_fichero(float p, float a)
{
    FILE *f;
    f = fopen("datos.txt", "w");
    fprintf(f,"%f %f",p, a);
    printf("\nDatos guardados en datos.txt");
    fclose(f);
}
