//Realizar un programa en C que dada la base y altura de un romboide introducidas por el usuario, calcule el perímetro y el área del mismo. P = 2b+2h  A =  b x h

#include <stdio.h>

int main()
{
    float P = 0, A = 0, b = 0, h = 0;
    printf("Ingrese la altura del romboide: ");
    scanf("%f", &h);
    printf("Ingrese la base del romboide: ");
    scanf("%f", &b);
    A=b*h;
    P=(2*b)+(2*h);
    printf("El area y perimetro del romboide de altura %f y base %f son de: \nA = %f \nP = %f",h,b,A,P);
    return 0;
}
