#include <stdio.h>
/*
int main() {
    int n, m;
    printf("Ingrese un numero:\n");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++) {
        m = n * i;
        printf("%d x %d = %d\n", n, i, m);
    }
    return 0;
}*/
/*
int main()
{
    int a,b;
    printf("Ingrese dos numeros:\n");
    scanf("%d %d", &a, &b);
    int par =0 , impar =0;
    for (int i = a ; i <= b; i++) {
        if (i % 2 == 0) {
            par = par + 1;
            printf("%d es par\n", i);
        } else {
            impar = impar + 1;
            printf("%d es impar\n", i);
        }
    }
    printf("Cantidad de numeros pares: %d\n", par);
    printf("Cantidad de numeros impares: %d\n", impar);
}*/
/*
int main()
{
    int num;
    for (int i = 1; i <= 10; i++) {
        printf("Ingrese un numero:\n");
        scanf("%d", &num);
        if (num < 0) {
            printf("El numero es negativo.\n");
        }else if (num == 0) {
            printf("El numero es cero.\n");
    }else {
            printf("El numero es positivo.\n");
        }
    }
    return 0;
}*/
/*
int main()
{
    int num, suma = 0;
    scanf("%d", &num);
    for (int i = 0; i <= num; i++) {
        if( i % 2 == 0 ) {
        suma = suma + i;
    }
    }
    printf("La suma de los numeros pares es: %d\n", suma);
    return 0;
}*/
/*
int main()
{
    int num, i, primo = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        primo = 0;
    }
    else
    {
        for (i = 2; i <= num /2 ; i++)
        {
            if (num % i == 0)
            {
                primo = 0;
            }
        }
    }

    if (primo == 1)
    {
        printf("%d es un numero primo.\n", num);
    }
    else
    {
        printf("%d no es un numero primo.\n", num);
    }

    return 0;
}
*/