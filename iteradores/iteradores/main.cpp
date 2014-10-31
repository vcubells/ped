//
//  main.cpp
//  iteradores
//
//  Created by Vicente Cubells Nonell on 23/10/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    /* Definición con asignación de tipos estática */
    
    int numero = 0;
    
    auto numero2 = numero;
    
    std::cout << "Número uno: " << numero << std::endl;
    std::cout << "Número dos: " << numero2 << std::endl;
    
    /* Ejemplo de iterar sobre un arreglo de manera tradicional */
    
    const int n = 10;
    
    /* Declarar el arreglo */
    int enteros[n];
    
    /* Inicializar el arreglo */
    for (int i = 0; i < n; ++i) {
        enteros[i] = i;
    }
    
     /* Imprimir el arreglo */
    
    std::cout << "------------------------------------------------------ " << std::endl;
    std::cout << "--- Impresión utilizando la manera tradicional     --- " << std::endl;
    std::cout << "------------------------------------------------------ " << std::endl;
    
   
    for (int i = 0; i < n; ++i) {
        std::cout << "enteros[" << i << "] = " << enteros[i] << std::endl;
    }
    
    
    /* Imprimir el arreglo utilizando aritmética de apuntadores */
    
    std::cout << "------------------------------------------------------ " << std::endl;
    std::cout << "--- Impresión utilizando aritmética de apuntadores --- " << std::endl;
    std::cout << "------------------------------------------------------ " << std::endl;
    
    int * inicio = enteros;
    int * fin = enteros + n;
    
    int i = 0;
    
    for (; inicio < fin ; ++inicio) {
        std::cout << "enteros[" << i++ << "] = " << *inicio << std::endl;
    }
    
    
    /* Imprimir el arreglo utilizando iteradores de C++11 */
    
    std::cout << "------------------------------------------------------ " << std::endl;
    std::cout << "--- Impresión utilizando iteradores de C++11       --- " << std::endl;
    std::cout << "------------------------------------------------------ " << std::endl;
    
    i = 0;
    
    for (auto elemento : enteros) {
        std::cout << "enteros[" << i++ << "] = " << elemento << std::endl;
    }
    
    return 0;
}
