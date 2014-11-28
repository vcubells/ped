//
//  main.cpp
//  Pila
//
//  Created by Vicente Cubells Nonell on 27/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include <iostream>
#include "Pila.h"

int main(int argc, const char * argv[]) {
    
    Pila<int> * enteros = new Pila<int>();
    
    std::cout << "Elementos en la pila = " << enteros->size() << std::endl;
    
    enteros->push(1);
    enteros->push(2);
    enteros->push(3);
    enteros->push(10);
    enteros->push(4);
    
    std::cout << *enteros << std::endl;
    
    std::cout << "Elementos en la pila = " << enteros->size() << std::endl;
    
    delete enteros->pop();
    
    std::cout << *enteros << std::endl;
    
    std::cout << "Elementos en la pila = " << enteros->size() << std::endl;
    
    
    delete enteros->pop();
    
    std::cout << *enteros << std::endl;
    
    std::cout << "Elementos en la lista = " << enteros->size() << std::endl;
    
    
    std::cout << "Elemento en el tope de la pila  = " << *(enteros->top()) << std::endl;
    
    delete enteros;
    
    return 0;
}
