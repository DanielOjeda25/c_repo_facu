/*
 * ejercicio6.c
 * Demuestra el uso de diferentes tipos de datos (int, double, char).
 * Muestra los diferentes formatos de impresión para cada tipo de dato.
 */

#include <stdio.h>

int main(void)
{
    /* Variables ligeramente distintas */
    int num = 42;      /* entero              */
    double real = 7.3; /* punto flotante      */
    char letra = 'A';  /* carácter individual */

    puts("Demostración de printf():");

    /* Decimal, octal y hexadecimal               */
    printf("num = %d | octal = %o | hex = 0x%X\n", num, num, num);

    /* Dos cifras decimales para el número real   */
    printf("real = %.2lf\n", real);

    /* Mostrar el carácter entre comillas simples */
    printf("letra = '%c'\n", letra);

    return 0;
}
