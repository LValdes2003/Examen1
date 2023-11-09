//
// Created by Leonardo Valdes on 9/11/23.
//
#include "Estudiante.h"

using namespace std;

int suma(int a, int b) {
    return a + b;
}

void intercambiar(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int dividir(int a, int b) {
    if (b == 0) {
        throw "Error: No se puede dividir entre 0";
    }
    else {
        return a / b;
    }
}

int filtrarGrado(int arr[], double grado) {
    Estudiante estudiante;
    estudiante.nombre;
    for (int i = 0; i < 100; i++) {
        arr[i] = estudiante.grado;
        }
    for (int i = 0; i < 100; i++) {
        if (arr[i] == grado) {
            return arr[i];
        }
    }
}

bool yaExiste(char valor)
{
    Estudiante estudiante;
    estudiante.materias;
    for (int i = 0; i < 5; i++)
        if (estudiante.materias[i] == valor)
            return true;

    return false;
}
