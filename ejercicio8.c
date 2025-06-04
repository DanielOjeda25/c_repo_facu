/*
 * ejercicio8.c
 * Implementa un menú simple usando caracteres.
 * Demuestra el uso de las funciones getchar() y putchar() para manejo de caracteres.
 */

#include <stdio.h>

int main(void)
{
    char opcion;

    /* Menú simple */
    puts("Elija una opcion:");
    puts("1 - Opcion 1");
    puts("2 - Opcion 2");
    puts("3 - Salir");
    printf("Opcion: ");

    /* Lectura de un solo caracter */
    opcion = getchar();

    /* Eco de la eleccion */
    printf("\nLa opcion elegida es: ");
    putchar(opcion);
    putchar('\n');

    return 0;
}
