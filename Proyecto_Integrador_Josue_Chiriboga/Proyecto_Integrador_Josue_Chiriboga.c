/*UNIVERSIDAD DE LAS AMÉRICAS
ESTUDIANTE: Josué Chiriboga
ASIGNATURA: Algoritmos
FECHA: 24/01/2024
NRC: 3011
PROYECTO INTEGRADOR
OPCION 5: Tienda
Usted es empresario en Quito, y tiene la brillante idea de abrir una tienda de la leche en la Plaza
Grande. Como es una persona muy prudente, desea que la leche que venderá sea
perfectamente natural y fresca, y por esa razón, va a traer unas sanísimas vacas de la provincia
de Cotopaxi. Tiene a su disposición un camión con un cierto límite de peso, y un grupo de vacas
disponibles para la venta. Las vacas pesan lo mismo y producen la misma cantidad de leche al
día.
Su objetivo como empresario es elegir qué vacas comprar y llevar en su camión, de modo que
pueda maximizar la producción de leche, observando el límite de peso del camión.
Entrada: Número total de vacas en la zona de Zaragoza que están a la venta.
Entrada: Peso total que el camión puede llevar.
Entrada: Pesos de las vacas.
Entrada: Lista de la producción de leche en litros por día.
Salida: Cantidad máxima de producción de leche se puede obtener.
*/
#include <stdio.h>

int main() {
    // Datos de Entrada
    int num_total_vacas, peso_total_camion, cant_maxima = 0;

    // Proceso
    printf("----------OPCION 5: TIENDA----------\n");
    printf("\nZona: Zaragoza\n");
    printf("Tienda: Plaza Grande\n");

    do {
        // Ingreso del número total de vacas
        printf("\nIngrese el numero total de vacas en venta: ");
        scanf("%d", &num_total_vacas);
        if (num_total_vacas <= 0) {
                printf("Ingrese nuevamente (valores mayores a cero)\n");
            }
    } while (num_total_vacas <= 0);

    do {
        // Ingreso del peso total que el camión puede llevar
        printf("\nIngrese el peso total que el camion puede llevar: ");
        scanf("%d", &peso_total_camion);
        if (peso_total_camion <= 0) {
                printf("Ingrese nuevamente (valores mayores a cero)\n");
            }
    } while (peso_total_camion <= 0);

    // Datos de Entrada
    int peso_vacas[num_total_vacas];
    int produccion_leche[num_total_vacas];

    // Proceso
    printf("\n----------PESOS DE LAS VACAS----------\n");
    for (int i = 0; i < num_total_vacas; i++) {
        do {
            // Ingreso de pesos de las vacas (mayores a 0)
            printf("Peso de la vaca %d: ", i + 1);
            scanf("%d", &peso_vacas[i]);
        } while (peso_vacas[i] <= 0);
    }

    printf("\n----------LISTA DE LA PRODUCCION DE LECHE EN LITROS POR DIA----------\n");
    for (int i = 0; i < num_total_vacas; i++) {
        do {
            // Ingreso de producción de leche (mayor o igual a 0)
            printf("Produccion de leche en litros por dia de la vaca %d: ", i + 1);
            scanf("%d", &produccion_leche[i]);
        } while (produccion_leche[i] < 0);
    }

    for (int i = 0; i < num_total_vacas && peso_total_camion > 0; i++) {
        if (peso_total_camion >= peso_vacas[i]) {
            cant_maxima += produccion_leche[i];
            peso_total_camion -= peso_vacas[i];
        }
    }

    // Datos de Salida
    printf("\n----------RESULTADOs----------\n");
    printf("Cantidad maxima de produccion de leche: %d litros\n", cant_maxima);
    printf("\n!Presione ENTER para finalizar!\n");

	getch();
	
    return 0;
}
