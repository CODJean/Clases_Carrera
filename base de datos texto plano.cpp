#include <stdio.h>
#include <string.h>

int registrar_usuario() {
    FILE *f;
    char usuario[30], contrasena[30];

    printf("Ingrese nuevo usuario: ");
    scanf("%s", usuario);
    printf("Ingrese contraseña: ");
    scanf("%s", contrasena);

    f = fopen("usuarios.txt", "a"); // Abrir para agregar
    if (f == NULL) {
        printf("Error al abrir archivo.\n");
        return 1;
    }

    fprintf(f, "%s %s\n", usuario, contrasena); // Guardar en archivo
    fclose(f);

    printf("✅ Usuario registrado correctamente.\n");
    return 0;
}

int login() {
    FILE *f;
    char usuario[30], contrasena[30];
    char u[30], c[30];
    int encontrado = 0;

    printf("Ingrese usuario: ");
    scanf("%s", usuario);
    printf("Ingrese contraseña: ");
    scanf("%s", contrasena);

    f = fopen("usuarios.txt", "r");
    if (f == NULL) {
        printf("Error: no se encontró la base de datos.\n");
        return 1;
    }

    while (fscanf(f, "%s %s", u, c) != EOF) { // Leer usuario y contraseña
        if (strcmp(usuario, u) == 0 && strcmp(contrasena, c) == 0) {
            encontrado = 1;
            break;
        }
    }

    fclose(f);

    if (encontrado) {
        printf(" Login exitoso. Bienvenido %s.\n", usuario);
    } else {
        printf(" Usuario o contraseña incorrectos.\n");
    }

    return 0;
}

int main() {
        goto inicio;
    inicio:
    int opcion;

    printf("1. Registrar usuario\n");
    printf("2. Iniciar sesión\n");
    printf("Seleccione: ");
    scanf("%d", &opcion);

        if (opcion == 1) {
            registrar_usuario();
        } else if (opcion == 2) {
            login();
        } else {
            printf("Opción inválida.\n");

        }
    goto inicio;
    return 0;
}
