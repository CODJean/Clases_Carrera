#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define simb_45 '/'
#define simb_135 '\\'
#define CX 40  // Coordenada absoluta horizontal del centro (0,0)
#define CY 15  // Coordenada absoluta vertical del centro (0,0)
#define LIMITE_MIN -10
#define LIMITE_MAX 10

void gotoxy(short x, short y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void limpiarPantalla() {
    system("cls");
}

void dibujarEjes() {
    int i;
    
    // Eje X
    for (i = LIMITE_MIN; i <= LIMITE_MAX; i++) {
        gotoxy(CX + i, CY);
        printf("-");
    }
    
    // Eje Y
    for (i = LIMITE_MIN; i <= LIMITE_MAX; i++) {
        gotoxy(CX, CY - i);
        printf("|");
    }
    
    // Centro (0,0)
    gotoxy(CX, CY);
    printf("+");
    
    // Etiquetas de los ejes
    gotoxy(CX + LIMITE_MAX + 2, CY);
    printf("X");
    gotoxy(CX, CY - LIMITE_MAX - 1);
    printf("Y");
}

int validarCoordenadas(int x, int y) {
    // Validar que |x| = |y| y que estén dentro de los límites
    if (abs(x) != abs(y)) {
        return 0;
    }
    if (x < LIMITE_MIN || x > LIMITE_MAX || y < LIMITE_MIN || y > LIMITE_MAX) {
        return 0;
    }
    return 1;
}

void mostrarPuntosValidos() {
    int i;
    
    printf("\n\nPUNTOS VALIDOS (|X| = |Y|):\n");
    printf("Cuadrante I (X+,Y+): ");
    for (i = 0; i <= LIMITE_MAX; i++) {
        printf("(%d,%d) ", i, i);
    }
    
    printf("\nCuadrante II (X-,Y+): ");
    for (i = 0; i <= LIMITE_MAX; i++) {
        printf("(%d,%d) ", -i, i);
    }
    
    printf("\nCuadrante III (X-,Y-): ");
    for (i = 0; i <= LIMITE_MAX; i++) {
        printf("(%d,%d) ", -i, -i);
    }
    
    printf("\nCuadrante IV (X+,Y-): ");
    for (i = 0; i <= LIMITE_MAX; i++) {
        printf("(%d,%d) ", i, -i);
    }
    printf("\n");
}

void leerCoordenadas(int *x, int *y, const char* mensaje) {
    do {
        printf("\n%s\n", mensaje);
        printf("Introduce X (entre %d y %d): ", LIMITE_MIN, LIMITE_MAX);
        scanf("%d", x);
        printf("Introduce Y (entre %d y %d): ", LIMITE_MIN, LIMITE_MAX);
        scanf("%d", y);
        
        if (!validarCoordenadas(*x, *y)) {
            printf("\nERROR: Coordenadas invalidas. Debe cumplirse |X| = |Y|\n");
            mostrarPuntosValidos();
        }
    } while (!validarCoordenadas(*x, *y));
}

void dibujarPunto(int x, int y, char simbolo) {
    gotoxy(CX + x, CY - y);
    printf("%c", simbolo);
}

void moverBrazoAnimado(int x_inicio, int y_inicio, int x_fin, int y_fin, char simbolo) {
    int x_actual, y_actual;
    int dx, dy;
    int i, pasos;
    
    // Determinar dirección del movimiento (siempre diagonal)
    if (x_fin > x_inicio) dx = 1;
    else if (x_fin < x_inicio) dx = -1;
    else dx = 0;
    
    if (y_fin > y_inicio) dy = 1;
    else if (y_fin < y_inicio) dy = -1;
    else dy = 0;
    
    // Número de pasos (es el mismo para X e Y ya que |X| = |Y|)
    pasos = abs(x_fin - x_inicio);
    
    x_actual = x_inicio;
    y_actual = y_inicio;
    
    // Animación del movimiento manteniendo siempre |X| = |Y|
    for (i = 0; i <= pasos; i++) {
        dibujarPunto(x_actual, y_actual, simbolo);
        Sleep(100); // Pausa para hacer visible el movimiento
        
        x_actual += dx;
        y_actual += dy;
    }
}

void mostrarInfoPosicion(int x, int y, const char* tipo) {
    gotoxy(1, CY + LIMITE_MAX + 3);
    printf("%-20s: (%d, %d)  ", tipo, x, y);
}

int main() {
    int x_inicial, y_inicial;
    int x_recogida, y_recogida;
    int x_final, y_final;
    
    limpiarPantalla();
    
    printf("========================================\n");
    printf("  SIMULADOR DE MOVIMIENTO DE ROBOT\n");
    printf("========================================\n");
    printf("\nCondicion: Debe cumplirse |X| = |Y|\n");
    printf("Limites: X,Y entre [%d, %d]\n", LIMITE_MIN, LIMITE_MAX);
    
    mostrarPuntosValidos();
    
    // Leer coordenadas
    leerCoordenadas(&x_inicial, &y_inicial, "POSICION INICIAL:");
    leerCoordenadas(&x_recogida, &y_recogida, "POSICION DE RECOGIDA:");
    leerCoordenadas(&x_final, &y_final, "POSICION FINAL (deposito):");
    
    // Dibujar escenario
    limpiarPantalla();
    dibujarEjes();
    
    gotoxy(1, 1);
    printf("MOVIMIENTO DEL ROBOT");
    gotoxy(1, 2);
    printf("====================");
    
    // Movimiento 1: Posición inicial
    gotoxy(1, 3);
    printf("1. Moviendo a posicion INICIAL...");
    mostrarInfoPosicion(x_inicial, y_inicial, "Pos. INICIAL");
    moverBrazoAnimado(0, 0, x_inicial, y_inicial, 'I');
    Sleep(1000);
    
    // Movimiento 2: Posición de recogida
    gotoxy(1, 3);
    printf("2. Moviendo a posicion RECOGIDA...");
    mostrarInfoPosicion(x_recogida, y_recogida, "Pos. RECOGIDA");
    moverBrazoAnimado(x_inicial, y_inicial, x_recogida, y_recogida, 'R');
    Sleep(1000);
    
    // Movimiento 3: Posición final
    gotoxy(1, 3);
    printf("3. Moviendo a posicion FINAL...    ");
    mostrarInfoPosicion(x_final, y_final, "Pos. FINAL");
    moverBrazoAnimado(x_recogida, y_recogida, x_final, y_final, 'F');
    
    gotoxy(1, CY + LIMITE_MAX + 5);
    printf("\nMovimiento completado!");
    printf("\nI = Inicial, R = Recogida, F = Final\n");
    
    gotoxy(1, CY + LIMITE_MAX + 8);
    printf("Presiona Enter para salir...");
    getchar();
    getchar();
    
    return 0;
}
