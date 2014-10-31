//
//  main.cpp
//  lambda
//
//  Created by Vicente Cubells Nonell on 23/10/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

template < typename T>
void BubbleSort(T *, int, bool(*)(T, T));

template < typename T>
bool asc(T a, T b) { return a > b; }

template < typename T>
bool desc(T a, T b) { return a < b; }

int main(int argc, const char * argv[]) {
    
    /* Declarar el arreglo */
    
    int n = 0;
    
    std::cout << "Entre la cantidad de números a ordenar: ";
    std::cin >> n;
    
    int enteros[n];
    
    
    /* Establecer la semilla del generador de números aleatorios */
    srand((unsigned int) time(nullptr));
    
    /* Inicializar el arreglo con números aleatorios entre 1 y 100 */
    int * inicio = enteros;
    int * fin = inicio + n;
    
    for (; inicio < fin; ++inicio) {
        *inicio = rand() % 100 + 0.5;
    }
    
    /* Ordenar el arreglo */
    
   // auto compara = [](int a, int b) {return a > b;} ;
    
    BubbleSort<int>(enteros, n, [](int a, int b) { return a > b; });
    
    /* Imprimir el vector ordenado */
    
    for (auto elemento : enteros) {
        std::cout << elemento << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}

/* Función de ordenamiento con programación genérica */

template <typename T>
void BubbleSort(T * vector, int n, bool orden(T, T))
{
    T aux;
    
    for (int i = 0; i < n; ++i) {
        for (int j = n-1; j > i; --j) {
            if (orden(vector[j-1], vector[j])) {
                aux = vector[j-1];
                vector[j-1] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
