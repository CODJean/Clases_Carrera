#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float PI = 22/7;
    float AC, AT, AR, AP, R, B, H;
    int opcion;
    printf("Seleccione la figura para calcular el area:\n");
    printf("1. CIRCULO\n2. TRIANGULO\n3. RECTANGULO\n4. PARALELOGRAMO\n");
    printf("\nIngrese una opcion (1-4): ");
    scanf("%d", &opcion);
    system("cls");
    switch (opcion)
    {
    case 1:
        printf("Ingrese el radio del circulo: ");
        scanf("%f", &R);    
        AC = PI * R * R;
        printf("El area del circulo es: %.4f\n", AC);
        break;
    case 2:
        printf("Ingrese la base del triangulo: ");
        scanf("%f", &B);
        printf("Ingrese la altura del triangulo: ");
        scanf("%f", &H);
        AT = (B * H) / 2;
        printf("El area del triangulo es: %.4f\n", AT);
        break;
    case 3:
        printf("Ingrese la base del rectangulo: ");
        scanf("%f", &B);
        printf("Ingrese la altura del rectangulo: ");   
        scanf("%f", &H);
        AR = B * H;
        printf("El area del rectangulo es: %.4f\n", AR);
        break;
    case 4:
        printf("Ingrese la base del paralelogramo: ");
        scanf("%f", &B);
        printf("Ingrese la altura del paralelogramo: ");
        scanf("%f", &H);
        AP = B * H;
        printf("El area del paralelogramo es: %.4f\n", AP);
        break;
    
    default:
        printf("Opcion no valida.\n");
        break;
    }


    
    return 0;
}
    