/*
 * ejercicio15.c
 * Demuestra el uso de arreglos, inicialización y recorrido de elementos.
 * Muestra cómo trabajar con arrays y bucles para manipular sus elementos.
 */

#include <stdio.h>

int main(void)
{
    int i;
    int numeros[10];

    // Asignar valores del 0 al 9 al arreglo
    for (i = 0; i < 10; i++)
    {
        numeros[i] = i;
    }

    // Mostrar los valores del arreglo
    printf("Contenido del arreglo:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Elemento %d: %d\n", i, numeros[i]);
    }

    return 0;
}
