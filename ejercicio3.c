#include <stdio.h>

int numero = 10; // Variable global
void mostrarNumero()
{
    printf("El numero es: %d\n", numero);
}
int main()
{
    mostrarNumero(); // Llamada a la función que muestra el número

    return 0;
}