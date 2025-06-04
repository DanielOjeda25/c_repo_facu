/*
 * ejercicio9.c
 * Programa que determina si un número es par o impar.
 * Demuestra el uso de la estructura if-else y el operador módulo (%).
 */

#include <stdio.h>

int main(void)
{
    int numero = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("El numero ingresado es PAR.\n");
    }
    else
    {
        printf("El numero ingresado es IMPAR.\n");
    }

    return 0;
}
