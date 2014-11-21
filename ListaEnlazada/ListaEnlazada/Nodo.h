//
//  Nodo.h
//  ListaEnlazada
//
//  Created by Vicente Cubells Nonell on 20/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __ListaEnlazada__Nodo__
#define __ListaEnlazada__Nodo__

#include <iostream>

template <class T>
class Nodo {
private:
    T info;
    Nodo<T> * next = nullptr;
    
public:
    Nodo();
    Nodo(T info);
    
    T getInfo();
    void setInfo(T value);
    
    Nodo<T> * getNext();
    void setNext(Nodo<T> * value);
    
    template <typename Tn>
    friend std::ostream & operator <<(std::ostream & os, Nodo<Tn> & nodo);
    
};

template <class T>
Nodo<T>::Nodo()
{
    
}

template <class T>
Nodo<T>::Nodo(T info) : info(info)
{
    
}

template <class T>
T Nodo<T>::getInfo()
{
    return info;
}

template <class T>
void Nodo<T>::setInfo(T value)
{
    info = value;
}

template <class T>
Nodo<T> * Nodo<T>::getNext()
{
    return next;
}

template <class T>
void Nodo<T>::setNext(Nodo<T> * value)
{
    next = value;
}

template <class T>
std::ostream & operator <<(std::ostream & os, Nodo<T> & nodo)
{
    os << nodo.info << std::endl;
    
    return os;
}

#endif /* defined(__ListaEnlazada__Nodo__) */
