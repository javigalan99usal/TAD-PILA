#include <stdio.h>
#include "pila.h"

// Programa que utiliza el TAD pila a modo de ejemplo de funcionamiento

int main() {
    Pila pila;
    pilaCreaVacia(&pila);

    printf(" -> Pila vacía creada.\n");

    // Insertar elementos en la pila
    pilaInserta(10, &pila);
    pilaInserta(20, &pila);
    pilaInserta(30, &pila);

    printf(" -> Elementos insertados en la pila.\n");

    // Suprimir elementos de la pila y mostrarlos
    printf(" -Elementos de la pila:\n");
    while (!pilaVacia(&pila)) {
        printf("%d\n", pilaSuprime(&pila));
    }

    return 0;
}
