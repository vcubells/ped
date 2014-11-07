//
//  main.cpp
//  OrdenamientoGenerico
//
//  Created by Vicente Cubells Nonell on 06/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <ostream>
#include "Ordenamiento.h"
#include "Libro.h"

int main(int argc, const char * argv[]) {
    
    /* Declarar el arreglo */
    
    int n = 0;
    
    std::cout << "Entre la cantidad de números a ordenar: ";
    std::cin >> n;
    
    int enteros[n];
    
    /* Establecer la semilla del generador de números aleatorios */
    srand((unsigned int) time(nullptr));
    
    /* Inicializar el arreglo con números aleatorios */
    std::generate(enteros, enteros+n, rand);
    
    /* Mostrar números por pantalla */
    std::copy(enteros, enteros+n, std::ostream_iterator<int>(std::cout, " "));
    
    std::cout << std::endl;
    
    /* Ordenar los elementos del arreglo */
    Ordenamiento<int>::InsertionSort(enteros, n, Ordenamiento<int>::desc);
    
    /* Mostrar números por pantalla */
    std::copy(enteros, enteros+n, std::ostream_iterator<int>(std::cout, " "));
    
    std::cout << std::endl;
    
    /* Mostrar funcionalidad de clase genérica con Libros */
    
    const int nlibros = 3;
    
    Libro  biblioteca[nlibros];
    
    biblioteca[0] =  Libro("Amanecer", "Juan Pérez", 350, 2012);
    biblioteca[1] =  Libro("Luna nueva", "Amalia Hernández", 700, 2000);
    biblioteca[2] =  Libro("Crepúsculo", "Teresa Segarra", 476, 2014);
    
    /* Mostrar libros por pantalla */
    for (auto libro : biblioteca) {
        std::cout << libro;
    }

     std::cout << std::endl;
    
    Ordenamiento<Libro>::QuickSort(biblioteca, 0, nlibros-1, Ordenamiento<Libro>::asc);

    /* Mostrar libros por pantalla */
    for (auto libro : biblioteca) {
        std::cout << libro;
    }
    
    std::cout << std::endl;
    
    return 0;
}
