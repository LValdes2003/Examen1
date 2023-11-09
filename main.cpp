#include <iostream>
#include "funciones.h"
#include "Estudiante.h"
#include "RegistroAsistencia.h"

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
    int notas[5] = {10, 9, 8, 7, 6};
    Estudiante estudiante;
    estudiante.promedioCalificaciones(notas, 5);
    return 0;
}
