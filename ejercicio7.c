/*
 * ejercicio7.c
 * Programa que realiza una división con validación para evitar división por cero.
 * Demuestra el manejo de números decimales y la conversión de tipos.
 */

#include <stdio.h>

int main(void)
{
    int dividendo, divisor;

    /* Lectura de los datos */
    printf("➤ Ingrese el dividendo (entero): ");
    scanf("%d", &dividendo);

    printf("➤ Ingrese el divisor  (entero): ");
    scanf("%d", &divisor);

    /* Validación para evitar división por cero */
    if (divisor == 0)
    {
        puts("⚠️  Error: no se puede dividir entre cero.");
        return 1; /* finaliza con código de error */
    }

    /* Conversión a double para obtener parte decimal más precisa */
    double resultado = (double)dividendo / divisor;

    /* Muestra con dos cifras decimales */
    printf("La división es: %.2lf\n", resultado);

    return 0;
}
