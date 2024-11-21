# Link del Repositorio

https://github.com/junx21/Programacion_Estructurada.git

# Proyecto de Estructuras y Uniones en C

Este proyecto consiste en la implementación de varios ejercicios en C que utilizan estructuras, uniones y funciones para gestionar datos de estudiantes. Cada ejercicio está organizado en archivos separados para una mejor organización y claridad.

## Estructura del Proyecto

proyecto/
│
├── main.c
│
├── EJ1
│ ├── estructuras.c
│ └── estructuras.h
│
├── EJ2
│ ├── uniones.c
│ └── uniones.h
│
├── EJ3
│ ├── copia_estructuras.c
│ └── copia_estructuras.h
│
├── EJ4
│ ├── alias.c
│ └── alias.h
│
└── EJ5
├── estructuras_funciones.c
└── estructuras_funciones.h


## Descripción de los Ejercicios

### Ejercicio 1: Estructuras

- **Objetivo**: Definir y utilizar una estructura `Estudiante` que contenga el nombre, edad y promedio.
- **Funciones**:
  - Crear instancias de la estructura.
  - Usar punteros para acceder a los datos.
  - Imprimir la información de los estudiantes.

### Ejercicio 2: Uniones

- **Objetivo**: Definir una unión que pueda almacenar un entero, un flotante o una cadena de caracteres.
- **Funciones**:
  - Asignar diferentes tipos de valores a la unión y mostrar cómo se sobrescriben.

### Ejercicio 3: Copia de Estructuras

- **Objetivo**: Implementar una función que copie una estructura `Estudiante` y devuelva la copia.
- **Funciones**:
  - Imprimir los datos del estudiante copiado.
 
Debería de aparecer un archivo llamado copia_estructuras.c, con el siguiente código: 
```cpp
#include "copia_estructuras.h"
#include "../EJ1/estructuras.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante nuevoEst;

    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;

    // Imprimir los datos del estudiante copiado
    printf("Datos del estudiante copiado:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", nuevoEst.nombre, nuevoEst.edad, nuevoEst.promedio);

    return nuevoEst;
}
```

### Ejercicio 4: Alias de Tipos

- **Objetivo**: Usar `typedef` para crear un alias para la estructura `Estudiante`.
- **Funciones**:
  - Crear un estudiante utilizando el alias y mostrar su información.

### Ejercicio 5: Funciones y Estructuras

- **Objetivo**: Implementar varias funciones que operen sobre la estructura `Estudiante`.
- **Funciones**:
  - Imprimir un estudiante (por valor y por referencia).
  - Modificar un estudiante.

