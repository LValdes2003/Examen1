#include <iostream>
#include "funciones.h"
#include "Estudiante.h"

int main() {
    std::cout << "¿Cuales dos números quieres dividir?" << std::endl;
    int a, b;
    std::cin >> a >> b;
try {
    std::cout << dividir(a, b) << std::endl;
}
catch (const char* msg) {
    std::cout << msg << std::endl;
}
    return 0;
}
