//
// Created by Leonardo Valdes on 9/11/23.
//
#include "Estudiante.h"
#ifndef EXAMEN1_PROFESOR_H
#define EXAMEN1_PROFESOR_H


class Profesor : public Estudiante {
public:
    char* materia_profesor;
    int experiencia;
    void mostrar_info_profesor() const{
        mostrar_info();
        std::cout << "Materia: " << materia_profesor << std::endl;
        std::cout << "Experiencia: " << experiencia << std::endl;
    }
};


#endif //EXAMEN1_PROFESOR_H
