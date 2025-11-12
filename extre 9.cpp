//programa que me permita calcular la media de 3 materias y me diga si aprobe o no el curso“Aprobado general” si todas son ≥ 5 • “Debe recuperar una asignatura” si solo una está < 5 • “Debe recuperar varias asignaturas” si dos o más están < 5 • Además, muestra la nota media al final.  todo en float y usando una funcion float

#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3);
int main() {
    float nota1, nota2, nota3, media;
    int asignaturasSuspensas = 0;

    printf("Ingrese la nota de la primera materia: ");
    scanf("%f", &nota1);
    printf("Ingrese la nota de la segunda materia: ");
    scanf("%f", &nota2);
    printf("Ingrese la nota de la tercera materia: ");
    scanf("%f", &nota3);

    if (nota1 < 5) asignaturasSuspensas++;
    if (nota2 < 5) asignaturasSuspensas++;
    if (nota3 < 5) asignaturasSuspensas++;

    media = calcularMedia(nota1, nota2, nota3);

    if (asignaturasSuspensas == 0) {
        printf("Aprobado general\n");
    } else if (asignaturasSuspensas == 1) {
        printf("Debe recuperar una asignatura\n");
    } else {
        printf("Debe recuperar varias asignaturas\n");
    }

    printf("La nota media es: %.2f\n", media);

    return 0;
}
float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}