//Estudiane: Jeancarlos Rodriguez

//Libreria

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

//Funciones

void fichero(float Vs, float Rl, float R1, float R2, float Rs, float Rp, float Il, float Vo);
void Mostrar(float Rs, float Rp, float Il, float Vo);
float funcion1(float R1, float R2);
float funcion2(float R1, float R2);
float funcion3(float Vs, float Rl);
float funcion4(float Vs, float R1, float R2);

//Funcion Principal

int main()
{
    //variable
    float Vs, R1, R2, Rl, Rs, Rp, Il, Vo;
    //pedir datos
    printf("Ingrese el valor de la tension: ");
    scanf("%f", &Vs);
    printf("Ingrese el valor de R1 y de R2: ");
    scanf("%f", &R1);
    scanf("%f", &R2);
    printf("Ingrese el valor de la resistencia de carga: ");
    scanf("%f", &Rl);
    //calculos
    Rs = funcion1(R1, R2);
    Rp = funcion2(R1, R2);
    Il = funcion3(Vs, Il);
    Vo = funcion4(Vs, R1, R2);
    //mostrar y guardar datos
    Mostrar(Rs, Rp, Il, Vo);
    fichero(Vs, Il, R1, R2, Rs, Rp, Il, Vo);
    return 0;
}
//Desarrollo de funciones de calculo

float funcion1(float R1, float R2)
{
    float Rs;
    Rs = R1+ R2;
    return Rs;
}
float funcion2(float R1, float R2)
{
    float Rp;
    Rp = (R1*R2)/(R1+ R2);
    return Rp;
}
float funcion3(float Vs, float Rl)
{
    float Il;
    Il = Vs/ Rl;
    return Il;
}
float funcion4(float Vs, float R1, float R2)
{
    float Vo;
    Vo = Vs*((R2)/(R1+R2));
    return Vo;
}

//Funciones de Gardado y mostrar

void fichero(float Vs, float Rl, float R1, float R2, float Rs, float Rp, float Il, float Vo)
{
    FILE *f;
    f = fopen("informe_circuito.txt", "w");
    fprintf(f,"La Tension de alimentacion es de %.2f voltios \n La resistencia de carga RL  %.2f ohmios \n La resistencia R1 %.2f ohmios \n La resistencia R2 %.2f ohmios",Vs, Rl, R1, R2);
    fprintf(f,"\n El valor de las resistencias en serie es de %.2f ohmios \n El valor de las resistencias en paralelo es de %.2f ohmios \n El valor de corriente es de %.2f amperios \n El valor del voltaje de salida es de %.2f voltios", Rs, Rp, Il, Vo);
    printf("\nDatos guardados en  informe_circuito.txt\n abriendo archivo en 5 seg");
    fclose(f);
    //tiempo de descanso
    Sleep(5000);
    char comando[256];
    //es la estructura del comando para abrir el archivo
    sprintf(comando, "start %s", "informe_circuito.txt");
    // Ejecuta el comando (ahora es "start informe_circuito.txt")
    system(comando);
}

void Mostrar(float Rs, float Rp, float Il, float Vo)
{
    printf(" El valor de las resistencias en serie es de %.2f ohmios \n El valor de las resistencias en paralelo es de %.2f ohmios \n El valor de corriente es de %.2f amperios \n El valor del voltaje de salida es de %.2f voltios", Rs, Rp, Il, Vo);
}
