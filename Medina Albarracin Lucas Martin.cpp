#include <stdio.h>
int main() {
    int datos[30][10][7] = {0},monto[30] = {0},contador_jug_sincal = 0,jugador, juego, calificacion,i=0,j=0;
    printf("Ingrese los datos de los jugadores (ingrese 0 para finalizar):\n");
    while (1) {
        printf("Jugador(del 1 al 30): ");
        scanf("%d", &jugador);
        if (jugador == 0) {
            break;
        }
        printf("Juego(del 1 al 7): ");
        scanf("%d", &juego);
        printf("Calificacion(del 1 al 10): ");
        scanf("%d", &calificacion);
        // Validar los valores ingresados
        if (juego < 1 || juego > 7 || calificacion < 1 || calificacion > 10) {
            printf("Valores ingresados no válidos. Intente nuevamente.\n");
            continue;
        }
        datos[jugador - 1][juego - 1][0] += calificacion; // Sumar la calificación del jugador en el juego
        datos[jugador - 1][juego - 1][1]++; // Incrementar el contador de calificaciones del jugador en el juego
    }
    printf("Ingrese el valor de los premios de los juegos:\n");
    for (i = 0; i < 10; i++) {
        printf("Premio para el juego %d: ", i + 1);
        scanf("%d", &premios[i]);
    }
    printf("los puntajes finales y montos cobrados:\n");
    for ( i = 0; i < 30; i++) {
        printf("Jugador %d:\n", i + 1);
        for ( j = 0; j <10; j++) {
            if (datos[i][j][1] > 0) {
                int promedio = datos[i][j][0] / datos[i][j][1];
                printf("Juego %d: Puntaje final = %d\n", j + 1, promedio);
                if (promedio > 8) {
                    monto[i] += premios[j];
                }
            }
        }
        printf("Monto cobrado: $%d\n", monto[i]);
        if (datos[i][0][1] == 0 && datos[i][1][1] == 0 && datos[i][2][1] == 0 && datos[i][3][1] == 0 &&
            datos[i][4][1] == 0 && datos[i][5][1] == 0 && datos[i][6][1] == 0) {
            contador_jug_sincal++;
        }
    }
