#include <stdio.h>

#include <stdlib.h>
#include <locale.h>
#include <time.h>

// Función para determinar el resultado de una ronda

int determinarGanador(int jugador, int computadora)
{

    // Reglas del juego

    if (jugador == computadora)
    {

        return 0; // Empate
    }
    else if (

        (jugador == 1 && (computadora == 3 || computadora == 4)) || // Fuego vence a Planta, Eléctrico

        (jugador == 2 && (computadora == 1 || computadora == 5)) || // Agua vence a Fuego, Roca

        (jugador == 3 && (computadora == 2 || computadora == 5)) || // Planta vence a Agua, Roca

        (jugador == 4 && (computadora == 2 || computadora == 3)) || // Eléctrico vence a Agua, Planta

        (jugador == 5 && (computadora == 1 || computadora == 4)) // Roca vence a Fuego, Eléctrico

    )
    {

        return 1; // Gana el jugador
    }
    else
    {

        return -1; // Gana la computadora
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int jugador, computadora;

    int puntajeJugador = 0, puntajeComputadora = 0;

    int rondasJugadas = 0;

    // Semilla para generación de números aleatorios

    srand(time(NULL));

    printf("¡Bienvenido al duelo de Monstruos de Bolsillo!\n");

    printf("Selecciona tu tipo elemental:\n");

    printf("1. Fuego\n2. Agua\n3. Planta\n4. Eléctrico\n5. Roca\n");

    // Jugar 3 rondas

    while (rondasJugadas < 3)
    {

        printf("\nElige un número del 1 al 5 para tu monstruo: ");

        scanf("%d", &jugador);

        if (jugador < 1 || jugador > 5)
        {

            printf("Opción inválida. Inténtalo de nuevo.\n");

            continue;
        }

        // Selección aleatoria de la computadora

        computadora = rand() % 5 + 1;

        printf("La computadora eligió: %d\n", computadora);

        // Determinar ganador de la ronda

        int resultado = determinarGanador(jugador, computadora);

        if (resultado == 0)
        {

            printf("Empate en esta ronda.\n");
        }
        else if (resultado == 1)
        {

            printf("¡Ganaste esta ronda!\n");

            puntajeJugador++;
        }
        else
        {

            printf("La computadora ganó esta ronda.\n");

            puntajeComputadora++;
        }

        rondasJugadas++;
    }

    // Determinar el ganador del juego

    printf("\nResultado final:\n");

    printf("Jugador: %d puntos\n", puntajeJugador);

    printf("Computadora: %d puntos\n", puntajeComputadora);

    if (puntajeJugador > puntajeComputadora)
    {

        printf("¡Felicidades! ¡Eres el campeón!\n");
    }
    else if (puntajeComputadora > puntajeJugador)
    {

        printf("La computadora es el campeón. ¡Mejor suerte la próxima vez!\n");
    }
    else
    {

        printf("¡El juego terminó en empate!\n");
    }

    return 0;
}