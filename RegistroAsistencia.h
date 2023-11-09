//
// Created by Leonardo Valdes on 9/11/23.
//
#include <iostream>

#ifndef EXAMEN1_REGISTROASISTENCIA_H
#define EXAMEN1_REGISTROASISTENCIA_H

class RegistroAsistencia {
public:
    int fechaClase[3];
    char* estado;
    void mostrar_info() const{
        std::cout << "Fecha: " << fechaClase << std::endl;
        std::cout << "Estado: " << estado << std::endl;
    }
};


#endif //EXAMEN1_REGISTROASISTENCIA_H
