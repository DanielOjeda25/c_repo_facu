/*
 * ejercicio13.c
 * Implementa un switch para determinar si un día de la semana es laboral o no.
 * Demuestra el uso de la estructura switch-case y el manejo de múltiples casos.
 */

#include <stdio.h>

int main(void)
{
    int dia;

    printf("Ingrese un número del 1 al 7 (día de la semana): ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Es un día laboral.\n");
        break;

    case 6:
    case 7:
        printf("Es un día no laboral.\n");
        break;

    default:
        printf("Error: día inválido.\n");
    }

    return 0;
}
