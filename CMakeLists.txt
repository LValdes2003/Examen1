cmake_minimum_required(VERSION 3.26)
project(Examen1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Examen1 main.cpp
        funciones.cpp
        funciones.h
        Estudiante.cpp
        Estudiante.h
        RegistroAsistencia.h
        RegistroAsistencia.cpp
        Profesor.h
        Profesor.cpp)
