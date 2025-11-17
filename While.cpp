#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
//ejercicio 1 contar hacia atrás desde un número ingresado por el usuario
/*
int main() {
    setlocale(LC_ALL, "");
    printf("ingrese un número: ");
    int contador=0;
    scanf("%d", &contador);
    while (contador>=0)
    {
        printf("t - %d\n", contador);
        contador--;
    }
    
    return 0;
}*/
//ejercicio 3 calcular la media de varias notas hasta que se ingrese una negativa
/*
int main() {
    setlocale(LC_ALL, "");
    float nota=0;
    int negativas=0;
    float media=0;
    int contador=0;
    while(negativas == 0){
        printf("ingrese una nota del 1 al 10: ");
        scanf("%f", &nota);
        contador++;
        if(nota < 0){
            negativas++;
            break;
        }
        media += nota ;
        
    }
    printf("la media de las notas es: %.2f\n", media/ (contador-1));
    return 0;
}
*/
// Ejercicio 5 mostrar divisores de un número
/*
int main() {
    setlocale(LC_ALL, "");
    int numero=0;
    printf("ingrese un número: ");
    scanf("%d", &numero);
    printf("los divisores de %d son: \n", numero);
    for(int i=1; i<=numero; i++){
        if(numero % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}*/
// Ejercicio 6 contar dígitos de un número
/*
int main() {
    setlocale(LC_ALL, "");
    int numero=0;
    int contador=0;
    printf("ingrese un número: ");
    scanf("%d", &numero);
    if(numero == 0){
        contador = 1;
    } else {
        while(numero != 0){
            numero = numero / 10;
            contador++;
        }
    }
    printf("la cantidad de dígitos es: %d\n", contador);
    return 0;
}*/
// Ejercicio 7 adivinar un número
int main(){
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int aleatorio = rand() % 100 + 1 ;
    int intento = 0;
    
    while (intento != aleatorio)
    {
        printf("Adivina el número entre 1 y 100\n");
        scanf("%d", &intento);
        if(intento < aleatorio){
            printf("El número es mayor\n");
        } else if(intento > aleatorio){
            printf("El número es menor\n");
        } else {
            printf("¡Felicidades! Has adivinado el número %d\n", aleatorio);
        }
    }
    return 0;
}      