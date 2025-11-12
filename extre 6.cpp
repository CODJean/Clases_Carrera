//PROGRAMA PARA CALCULAR EL IMPORTE TOTAL A PAGAR INGRESANDO EL MONTO INICIAL Y EL TIPO DE CLIENTE NORMAL SIN DESCUENTO, CLIENTE HABITUAL 5% Y CLIENTE VIP 10%

#include <stdio.h>

int main() {
    float monto_inicial, importe_total;
    int tipo_cliente;

    printf("Ingrese el monto inicial: ");
    scanf("%f", &monto_inicial);

    printf("Ingrese el tipo de cliente (1-Normal, 2-Habitual, 3-VIP): ");
    scanf("%d", &tipo_cliente);

    switch (tipo_cliente) {
        case 1: // Cliente Normal
            importe_total = monto_inicial;
            break;
        case 2: // Cliente Habitual
            importe_total = (monto_inicial * 0.05)-(monto_inicial); // 5% de descuento
            break;
        case 3: // Cliente VIP
            importe_total = (monto_inicial * 0.10)-(monto_inicial); // 10% de descuento
            break;
        default:
            printf("Tipo de cliente invalido.\n");
            return 1; // Salir con error
    }

    printf("El importe total a pagar es: %.2f\n", importe_total);

    return 0;
}