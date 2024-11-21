#ifndef UNIONES_H
#define UNIONES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la unión Dato
union Dato {
    int i;
    float f;
    char str[20];
};

// Prototipo de la función uniones
void uniones();

#endif // UNIONES_H
