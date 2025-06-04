/*
 * ejercicio10.c
 * Muestra el uso del bucle while.
 * Imprime los dobles de números del 1 al 4, demostrando el uso de contadores y operaciones aritméticas.
 */

#include <stdio.h>

int main(void)
{
    int numero = 1;

    printf("Mostrando los dobles del 1 al 4:\n\n");

    while (numero < 5)
    {
        printf("%d x 2 = %d\n", numero, numero * 2);
        numero++;
    }

    return 0;
}
