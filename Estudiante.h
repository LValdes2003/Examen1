//
// Created by Leonardo Valdes on 9/11/23.
//
#include <iostream>
#include "funciones.h"

#ifndef EXAMEN1_ESTUDIANTE_H
#define EXAMEN1_ESTUDIANTE_H


class Estudiante {
public:
    char* nombre;
    int edad;
    double grado;
    void mostrar_info() const{
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }

    int materias[0];
    void mostrar_materias() const{
        std::cout << "Materias: " << materias << std::endl;
    }
    int registrar_materia(int n, char materiaNueva){
            if (n >= 5)
                return n;
            if (yaExiste(materiaNueva))
                throw "Error: La materia ya existe";

            materias[n] = materiaNueva;

            return (n + 1);
        }

        void promedioCalificaciones(int calificaciones[], int n){
            double promedio = 0;
            for (int i = 0; i < n; i++){
                promedio += calificaciones[i];
            }
            std::cout << "El promedio es: " << promedio/n << std::endl;
        }
    }
;

#endif //EXAMEN1_ESTUDIANTE_H
