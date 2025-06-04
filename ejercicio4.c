/*
 * ejercicio4.c
 * Muestra el uso de variables locales dentro de una función y su alcance.
 * Demuestra cómo las variables declaradas dentro de una función solo son accesibles dentro de ella.
 */

#include <stdio.h>
void mostrar_mensaje()
{
    int numero = 5;
    printf("El numero local es: %d\n", numero);
}
int main()
{
    mostrar_mensaje(); // Llamada a la función que muestra el mensaje
    return 0;
}