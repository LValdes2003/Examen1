//
// Created by Leonardo Valdes on 9/11/23.
//

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
