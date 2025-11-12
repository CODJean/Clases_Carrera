#include <stdio.h>   // para printf y scanf

// 1️⃣ Definimos una estructura
typedef struct {
    int suma;
    int producto;
} Resultado;

// 2️⃣ Creamos una función que devuelve un 'Resultado'
Resultado calcular(int a, int b) {
    Resultado r;         // Creamos una variable del tipo Resultado
    r.suma = a + b;      // Guardamos la suma
    r.producto = a * b;  // Guardamos el producto
    return r;            // Devolvemos toda la estructura
}

// 3️⃣ Programa principal
int main() {
    int x, y;
    printf("Introduce dos numeros: ");
    scanf("%d %d", &x, &y);

    // Llamamos a la función y guardamos el resultado
    Resultado res = calcular(x, y);

    // 4️⃣ Accedemos a los valores de la estructura
    printf("La suma es: %d\n", res.suma);
    printf("El producto es: %d\n", res.producto);

    return 0;
}
