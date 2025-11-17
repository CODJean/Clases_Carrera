#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    // Configurar consola para UTF-8
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "");
    
    printf("Hola con acentos: áéíóúñ¿¡\n");
    
    return 0;
}
