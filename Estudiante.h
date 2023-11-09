//
// Created by Leonardo Valdes on 9/11/23.
//
#include <iostream>
#ifndef EXAMEN1_ESTUDIANTE_H
#define EXAMEN1_ESTUDIANTE_H


class Estudiante {
public:
    char* nombre;
    int edad;
    double grado;
    void mostrar_info(){
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};


#endif //EXAMEN1_ESTUDIANTE_H
