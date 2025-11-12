#include <stdio.h>

int main()
{
    float perimetro, area;
    FILE *f;
    f = fopen("datos.txt", "r");
    if (f == NULL) {
        printf("Error: no se encontró datos.txt.\n");
        return 1;
    }
    fscanf(f, "%f %f", &perimetro, &area);
    printf("El contenido del archivo es: \n");
    printf("Perimetro: %f \n Area: %f",perimetro, area);
}
