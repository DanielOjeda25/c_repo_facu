/*
 * ejercicio16.c
 * Implementa una estructura (struct) para manejar datos de una persona.
 * Demuestra cómo definir, inicializar y acceder a los campos de una estructura.
 */

#include <stdio.h>

struct Persona
{
    int legajo;
    int edad;
    char nombre[50];
    char apellido[50];
};

int main(void)
{
    struct Persona miembro1;
    struct Persona miembro2 = {2, 30, "Jose", "Pereira"};

    printf("----- Información del miembro -----\n");
    printf("Legajo:   %d\n", miembro2.legajo);
    printf("Edad:     %d\n", miembro2.edad);
    printf("Nombre:   %s\n", miembro2.nombre);
    printf("Apellido: %s\n", miembro2.apellido);

    return 0;
}
