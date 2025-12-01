#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[80];
    char copia[80];
    printf("Escribe una frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("La frase escrita es: %s", frase);
    printf("longitud de la frase: %lu\n", strlen(frase));
    strcpy(copia, frase);
    printf("Copia de la frase: %s", copia);
    return 0;
}
