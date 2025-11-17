#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    printf("Cálculo de perímetro y área de un rectángulo\n");

    FILE *f;
    f = fopen("datos.txt", "w");

    float Base, Altura, Perimetro, Area;
    printf("ingrese el valor de la altura y de la base: ");
    scanf("%f %f", &Altura, &Base);
    Perimetro = 2*Base + 2*Altura;
    Area = Base * Altura;
    printf("Perimetro: %f \n Area: %f",Perimetro, Area);
    fprintf(f,"%f %f",Perimetro, Area);
    printf("\nDatos guardados en datos.txt");
    fclose(f);
}
