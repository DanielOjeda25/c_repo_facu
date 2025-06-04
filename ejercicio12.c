/*
 * ejercicio12.c
 * Demuestra el uso del bucle for.
 * Imprime los números del 1 al 10, mostrando la estructura básica del bucle for.
 */

#include <stdio.h>

int main(void)
{
    int i;

    printf("Imprimiendo los números del 1 al 10:\n\n");

    for (i = 1; i <= 10; i++)
    {
        printf("Línea número %d\n", i);
    }

    return 0;
}
