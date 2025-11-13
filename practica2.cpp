#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct total
{
    float totalsind;
    float totalcon;
    float descuento;
    float iva;
    int tdes;
    int codigo;
};

struct total t;

void precios(float *precio1, float *precio2, float *precio3, float *precio4, float *precio5);
void MEnu1();
void Menuentrada();
void MenuComida();
float calcularTotal(float entrada, float extra, int codigo);
void ticket(int op, int op1, float entrada, float extra, float total, int pelicula);
void ticketf(int op, int op1, float entrada, float extra, float total, int pelicula);

int main()
{
    int codigo = 0, promocional = 0;
    int nadai = 0;
    float entradaN, entradaR, palomitas, bebida, combo;
    char nada = '0';
    float total = 0.0;
    int op1, op2, op3;
    precios(&entradaN, &entradaR, &palomitas, &bebida, &combo);

    MEnu1();
    scanf("%d", &op1);
    if (op1 == 1 || op1 == 2 || op1 == 3 || op1 == 4)
    {
        
        Menuentrada();
        scanf("%d", &op2);
        MenuComida();
        scanf("%d", &op3);

        system("cls");
        printf("------------------------------------------------------------------------------\n");
        printf("                           CINE JCR - FLORIDA                                 \n");
        printf("------------------------------------------------------------------------------\n");
        printf("                                Codigo                                        \n");
        printf("------------------------------------------------------------------------------\n");
        printf("Ingre el 1valor del codigo promocional para obtener el descuento: ");
        scanf("%d", &promocional);
        if (promocional != 777)
        {
            codigo = 0;
            t.codigo = codigo;
        }
        else
        {
            codigo = 1;
            t.codigo = codigo;
        }

        if (op2 == 1)
        {

            if (op3 == 1)
            {
                total = calcularTotal(entradaN, palomitas, codigo);
                ticket(op2, op3, entradaN, palomitas, total, op1);
                ticketf(op2, op3, entradaN, palomitas, total, op1);
            }
            else if (op3 == 2)
            {
                total = calcularTotal(entradaN, bebida, codigo);
                ticket(op2, op3, entradaN, bebida, total, op1);
                ticketf(op2, op3, entradaN, bebida, total, op1);
            }
            else if (op3 == 3)
            {
                total = calcularTotal(entradaN, combo, codigo);
                ticket(op2, op3, entradaN, combo, total, op1);
                ticketf(op2, op3, entradaN, combo, total, op1);
            }
            else if (op3 == 4)
            {
                total = calcularTotal(entradaN, nadai, codigo);
                ticket(op2, op3, entradaN, nada, total, op1);
                ticketf(op2, op3, entradaN, nada, total, op1);
            }
        }
        else if (op2 == 2)
        {
            if (op3 == 1)
            {
                total = calcularTotal(entradaR, palomitas, codigo);
                ticketf(op2, op3, entradaR, palomitas, total, op1);
                ticket(op2, op3, entradaR, palomitas, total, op1);
            }
            else if (op3 == 2)
            {
                total = calcularTotal(entradaR, bebida, codigo);
                ticket(op2, op3, entradaR, bebida, total, op1);
                ticketf(op2, op3, entradaR, bebida, total, op1);
            }
            else if (op3 == 3)
            {
                total = calcularTotal(entradaR, combo, codigo);
                ticket(op2, op3, entradaR, combo, total, op1);
                ticketf(op2, op3, entradaR, combo, total, op1);
            }
            else if (op3 == 4)
            {
                total = calcularTotal(entradaR, nadai, codigo);
                ticket(op2, op3, entradaR, nada, total, op1);
                ticketf(op2, op3, entradaR, nada, total, op1);
            }
        }
    }
    else if (op1 == 5)
    {
        printf("Adios :D");
        exit(1);
    }
    else
    {
        printf("ingrese un valor valido. Por favor");
    }
    return 0;
}

void precios(float *precio1, float *precio2, float *precio3, float *precio4, float *precio5)
{
    FILE *f;
    f = fopen("precios.txt", "r");
    if (!f)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    
    fscanf(f, "%f%f%f%f%f", &precio1, &precio2, &precio3, &precio4, &precio5);
    fclose(f);
}

void MEnu1()
{
    system("cls");
    system("color 04"); // Rojo

    printf("------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                           CINE JCR - FLORIDA                                 \n");
    printf("------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                Cartelera                                     \n");
    printf("------------------------------------------------------------------------------\n");

    system("color 07"); // Cambiar a blanco

    printf("1. Kimetsu no Yaiba: Mugen-jo-hen\n");
    printf("\t Generos: Animacion / Accion / Aventura / Familiar / Fantasia / Ciencia Ficcion\n");
    printf("\t Duracion: 155 m\n");
    printf("\t Horarios: 12:00 PM, 3:00 PM, 6:00 PM, 9:00 PM\n\n");

    printf("2. Inside Out 2\n");
    printf("\t Generos: Animacion / Comedia\n");
    printf("\t Duracion: 100 m\n");
    printf("\t Horarios: 10:00 AM, 3:50 PM, 7:50 PM, 10:00 PM\n\n");

    printf("3. Dragon Ball Broly\n");
    printf("\t Generos: Animacion / Accion / Aventura / Familiar / Fantasia / Ciencia Ficcion\n");
    printf("\t Duracion: 100 m\n");
    printf("\t Horarios: 9:00 AM, 10:30 AM, 12:00 PM, 1:30 PM\n\n");

    printf("4. IT 2\n");
    printf("\t Generos: Terror / Drama / Suspenso / Sobrenatural\n");
    printf("\t Duracion: 169 m\n");
    printf("\t Horarios: 6:50 PM, 8:30 PM, 10:00 PM, 12:00 AM\n\n");

    printf("------------------------------------------------------------------------------\n");
    printf("5. No comprar nada\n");
    printf("------------------------------------------------------------------------------\n");
    printf("Eliga la Pelicula:");
}
void Menuentrada()
{
    system("cls");
    printf("------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                           CINE JCR - FLORIDA                                 \n");
    printf("------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                Entradas                                      \n");
    printf("------------------------------------------------------------------------------\n");
    printf("1. Entrada Normal.\n");
    printf("2. Entrada Reducida.(Estudiantes o Mayores de 65 años)\n");
    printf("Eliga el tipo de Entrada:");
}
void MenuComida()
{
    system("cls");
    printf("------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                           CINE JCR - FLORIDA                                 \n");
    printf("------------------------------------------------------------------------------\n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                Extras                                        \n");
    printf("------------------------------------------------------------------------------\n");
    printf("1. Palomitas.\n");
    printf("2. Bebidas.\n");
    printf("3. Menu Combinado.\n");
    printf("4. Nada.\n");
    printf("Eliga el tipo el extra que desea:");
}
float calcularTotal(float entrada, float extra, int codigo)
{
    
    int tdes = 0;
    float descuento12 = 0.10;
    float descuento15 = 0.15;
    float descuentocd = 1;
    float IVA = 0.21;
    float totalf = 00;
    float total = 0;
    float totalp = entrada + extra;
    if (totalp >= 12 && totalp <= 15)
    {
        tdes=1;
        if (codigo == 0)
        {
            total = totalp - (totalp * descuento12);
        }
        else if (codigo == 1)
        {
            total = (totalp - (totalp * descuento12)) - descuentocd;
        }
    }
    else if (totalp > 15)
    {
        tdes=2;
        if (codigo == 0)
        {
            total = totalp - (totalp * descuento15);
        }
        else if (codigo == 1)
        {
            total = (totalp - (totalp * descuento15)) - descuentocd;
        }
    }else
    {
        if (codigo == 0)
        {
            total = totalp - descuentocd;
        }else
        {
            total = totalp;
        }
    }
    totalf = total - (total * IVA) ;
    t.totalsind = totalp;
    t.totalcon = total;
    t.descuento = totalp - total;
    t.iva = IVA;
    t.tdes = tdes;
    return totalf;
}
void ticket(int op, int op1, float entrada, float extra, float total, int pelicula)
{
    char entradaN[50];
    char extraN[20];
    char peliculaN[50];
    if (op == 1)
    {
        strcpy(entradaN, "Entrada Normal");
    }
    else if (op == 2)
    {
        strcpy(entradaN, "Entrada Reducida");
    }
    if (op1 == 1)
    {
        strcpy(extraN, "Palomitas");
    }
    else if (op1 == 2)
    {
        strcpy(extraN, "Bebida");
    }
    else if (op1 == 3)
    {
        strcpy(extraN, "Combo");
    }
    else if (op1 == 4)
    {
        strcpy(extraN, "Ninguno");
    }
    if (pelicula == 1)
    {
        strcpy(peliculaN, "Kimetsu no Yaiba: Mugen-jo-hen");
    }
    else if (pelicula == 2)
    {
        strcpy(peliculaN, "Inside Out 2");
    }
    else if (pelicula == 3)
    {
        strcpy(peliculaN, "Dragon Ball Broly");
    }
    else if (pelicula == 4)
    {
        strcpy(peliculaN, "IT 2");
    }

    system("cls");
    printf("------------------------------------------------------------------------------\n");
    printf("                           CINE JCR - FLORIDA                                 \n");
    printf("------------------------------------------------------------------------------\n");
    printf("                                TICKET                                        \n");
    printf("------------------------------------------------------------------------------\n");
    printf("Pelicula: %s\n", peliculaN);
    printf("Entrada %s: %.2f %c\n", entradaN, entrada, 36);
    printf("Extra %s: %.2f %c\n", extraN, extra, 36);
    printf("Total a pagar: %.2f %c\n", total, 36);
    printf("------------------------------------------------------------------------------\n");
    printf("Detalle del Pago:\n");
    printf("Total sin descuento: %.2f %c\n", t.totalsind, 36);
    printf("Descuento aplicado: %.2f %c\n", t.descuento, 36);
    printf("Total con descuento: %.2f %c\n", t.totalcon, 36);
    printf("IVA (21%%): %.2f %c\n", t.iva * t.totalcon, 36);
    if (t.tdes == 1)
    {
        printf("Tipo de descuento aplicado: 10  %% \n");
    }
    else if (t.tdes == 2)
    {
        printf("Tipo de descuento aplicado: 15 %% \n");
    }
    else
    {
        printf("Tipo de descuento aplicado: Ninguno\n");
    }
    if (t.codigo == 1)
    {
        printf("Descuento por codigo promocional aplicado: 1 %c \n", 36);
    }
    printf("------------------------------------------------------------------------------\n");
}
void ticketf(int op, int op1, float entrada, float extra, float total, int pelicula)
{
    FILE *f;
    f = fopen("factura.txt", "w");
    if (!f)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    char entradaN[50];
    char extraN[20];
    char peliculaN[50];
    if (op == 1)
    {
        strcpy(entradaN, "Entrada Normal");
    }
    else if (op == 2)
    {
        strcpy(entradaN, "Entrada Reducida");
    }
    if (op1 == 1)
    {
        strcpy(extraN, "Palomitas");
    }
    else if (op1 == 2)
    {
        strcpy(extraN, "Bebida");
    }
    else if (op1 == 3)
    {
        strcpy(extraN, "Combo");
    }
    else if (op1 == 4)
    {
        strcpy(extraN, "Ninguno");
    }
    if (pelicula == 1)
    {
        strcpy(peliculaN, "Kimetsu no Yaiba: Mugen-jo-hen");
    }
    else if (pelicula == 2)
    {
        strcpy(peliculaN, "Inside Out 2");
    }
    else if (pelicula == 3)
    {
        strcpy(peliculaN, "Dragon Ball Broly");
    }
    else if (pelicula == 4)
    {
        strcpy(peliculaN, "IT 2");
    }
    fprintf(f, "------------------------------------------------------------------------------\n");
    fprintf(f,"                           CINE JCR - FLORIDA                                 \n");
    fprintf(f,"------------------------------------------------------------------------------\n");
    fprintf(f,"                                TICKET                                        \n");
    fprintf(f,"------------------------------------------------------------------------------\n");
    fprintf(f,"Pelicula: %s\n", peliculaN);
    fprintf(f,"Entrada %s: %.2f € \n", entradaN, entrada);
    fprintf(f,"Extra %s: %.2f €\n", extraN, extra);
    fprintf(f,"Total a pagar: %.2f €\n", total );
    fprintf(f,"------------------------------------------------------------------------------\n");
    fprintf(f,"Detalle del Pago:\n");
    fprintf(f,"Total sin descuento: %.2f €\n", t.totalsind);
    fprintf(f,"Descuento aplicado: %.2f €\n", t.descuento);
    fprintf(f,"Total con descuento: %.2f €\n", t.totalcon);
    fprintf(f,"IVA (21%%): %.2f €\n", t.iva * t.totalcon);
    if (t.tdes == 1)
    {
        fprintf(f,"Tipo de descuento aplicado: 10  %% \n");
    }
    else if (t.tdes == 2)
    {
        fprintf(f,"Tipo de descuento aplicado: 15 %% \n");
    }
    else
    {
        fprintf(f,"Tipo de descuento aplicado: Ninguno\n");
    }
    if (t.codigo == 1)
    {
        fprintf(f,"Descuento por codigo promocional aplicado: 1 €\n");
    }
    fprintf(f,"------------------------------------------------------------------------------\n");
    fclose(f);
}
