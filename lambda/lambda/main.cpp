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

#include "Auto.h"

template < typename T>
void BubbleSort(T *, int, bool(*)(T, T));

template < typename T>
bool asc(T a, T b) { return a > b; }

template < typename T>
bool desc(T a, T b) { return a < b; }

template <typename T >
void printArray(T  vector[]);

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
   // BubbleSort<int>(enteros, n, desc);
    
    BubbleSort<int>(enteros, n, [](int a, int b) { return a < b; });
    
    /* Imprimir el vector ordenado */
    
    //printArray<int>(enteros);
    
    for (auto item : enteros) {
        std::cout << item;
    }
    
    std::cout << std::endl;
    
    
    /* Declarar un arreglo de autos */
    const int ncoches = 3;
    Auto taller[ncoches];
    
    taller[0] = Auto();
    taller[1] = Auto("HYU-678", "Honda", 2012, "Azul");
    taller[2] = Auto("VVN-098", "Toyota", 2009, "Gris");
    
    /* Imprimir el arreglo de autos */
    
    std::cout << "------------------------------------------------------ " << std::endl;
    std::cout << "------------------- Lote de autos -------------------- " << std::endl;
    std::cout << "------------------------------------------------------ " << std::endl;
    
    
    for (auto item : taller) {
        std::cout << item;
    }
    
   // printArray<Auto>(taller);
    
    /* Ordenar el arreglo de autos */
    
    BubbleSort<Auto>(taller, ncoches, asc);
    
    
    /* Imprimir el arreglo de autos */
    
    std::cout << "------------------------------------------------------ " << std::endl;
    std::cout << "--------- Lote de autos ordenados -------------------- " << std::endl;
    std::cout << "------------------------------------------------------ " << std::endl;
    
    for (auto item : taller) {
        std::cout << item;
    }
    
   // printArray<Auto>(taller);

    
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

///* Función genérica de impresión */
//template <typename T>
//void printArray(T  vector[])
//{
//    for (auto item : vector) {
//        std::cout << item;
//    }
//}
