/*
 * ejercicio5.c
 * Implementa una función que calcula el cuadrado de un número.
 * Demuestra el paso de parámetros y el retorno de valores desde una función.
 */

#include <stdio.h>
int cuadrado(int v)
{
    return (v * v); // Calcula el cuadrado del número recibido
}
int main(void)
{
    int x = 3;
    int y = 0;
    y = cuadrado(x);                  // Llama a la función cuadrado con x como argumento
    printf("El resultado es: %d", y); // Imprime el resultado
    return 0;
}