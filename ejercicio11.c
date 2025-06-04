/*
 * ejercicio11.c
 * Implementa un bucle do-while que continúa pidiendo números hasta que se ingrese 0.
 * Demuestra el uso del bucle do-while y la validación de entrada de usuario.
 */

#include <stdio.h>

int main(void)
{
    int numero;

    printf("Este programa finaliza si ingresa 0.\n\n");

    do
    {
        printf("Ingrese un numero entero: ");
        scanf("%d", &numero);

        printf("Ha ingresado: %d\n", numero);
    } while (numero != 0);

    printf("\nPrograma finalizado.\n");
    return 0;
}
