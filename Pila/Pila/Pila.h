//
//  Pila.h
//  Pila
//
//  Created by Vicente Cubells Nonell on 27/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __Pila__Pila__
#define __Pila__Pila__

#include "../../ListaEnlazada/ListaEnlazada/ListaEnlazada.h"

template <class T>
class Pila : private ListaEnlazada<T> {
public:
    Pila();
    ~Pila();
    
    virtual int size() override;
    virtual bool empty() override;
    
    virtual void clear() override;
    
    void push(T value);
    
    Nodo<T> * pop();
    
    Nodo<T> * top();
    
    template <typename Tn>
    friend std::ostream & operator <<(std::ostream & os, Pila<Tn> & pila);
};

template <class T>
Pila<T>::Pila()
{
    
}

template <class T>
Pila<T>::~Pila()
{
    clear();
}

template <class T>
int Pila<T>::size()
{
    return this->count;
}

template <class T>
bool Pila<T>::empty()
{
    return this->first == nullptr;
}

template <class T>
void Pila<T>::clear()
{
    ListaEnlazada<T>::clear();
}

template <class T>
void Pila<T>::push(T value)
{
    this->insertFront(value);
}

template <class T>
Nodo<T> * Pila<T>::pop()
{
    return this->removeFront();
}

template <class T>
Nodo<T> * Pila<T>::top()
{
    return this->first;
}

template <class T>
std::ostream & operator <<(std::ostream & os, Pila<T> & pila)
{
//    Nodo<T> * temp = pila.first;
//    
//    while (temp) {
//        os << *temp;
//        temp = temp->getNext();
//    }
    
    for (auto p : pila)
    {
        os << p;
    }

    return os;
}

#endif /* defined(__Pila__Pila__) */
