/*
 * ejercicio14.c
 * Muestra la diferencia entre paso por valor y paso por referencia usando punteros.
 * Demuestra cómo los punteros permiten modificar variables fuera de la función.
 */

#include <stdio.h>

/* La función solo modifica el valor apuntado por 'a'.
   'b' es pasado por valor, por lo que no se modifica fuera de la función. */
void reiniciar(int *a, int b)
{
    *a = 0; // Modifica el valor de la variable apuntada
    b = 0;  // Solo cambia localmente, no afecta al 'y' original
}

int main(void)
{
    int x = 1, y = 1;

    reiniciar(&x, y);

    // Aquí x será 0, pero y seguirá siendo 1
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
