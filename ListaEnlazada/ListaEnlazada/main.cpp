//
//  main.cpp
//  ListaEnlazada
//
//  Created by Vicente Cubells Nonell on 20/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include <iostream>
#include "ListaEnlazada.h"

int main(int argc, const char * argv[]) {
    
    ListaEnlazada<int> * enteros = new ListaEnlazada<int>();
    
    std::cout << "Elementos en la lista = " << enteros->size() << std::endl;
    
    enteros->insert(1,0);
    enteros->insertFront(2);
    enteros->insertBack(3);
    enteros->insert(10,10);
    enteros->insert(4,3);
    
    std::cout << *enteros << std::endl;
    
    std::cout << "Elementos en la lista = " << enteros->size() << std::endl;
    
    delete enteros->removeFront();
    
    std::cout << *enteros << std::endl;
    
    std::cout << "Elementos en la lista = " << enteros->size() << std::endl;
    
    
    delete enteros->removeBack();
    
    std::cout << *enteros << std::endl;
    
    std::cout << "Elementos en la lista = " << enteros->size() << std::endl;
    
    
    delete enteros->remove(2);
    
    std::cout << *enteros << std::endl;
    
    std::cout << "Elementos en la lista = " << enteros->size() << std::endl;
    
    delete enteros;
    
    return 0;
}
