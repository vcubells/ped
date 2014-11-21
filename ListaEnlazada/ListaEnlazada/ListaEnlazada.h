//
//  ListaEnlazada.h
//  ListaEnlazada
//
//  Created by Vicente Cubells Nonell on 20/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __ListaEnlazada__ListaEnlazada__
#define __ListaEnlazada__ListaEnlazada__

#include <iostream>
#include "Nodo.h"


template <class T>
class ListaEnlazada {
private:
    Nodo<T> * first = nullptr;
    int count = 0;
    
public:
    ListaEnlazada();
    virtual ~ListaEnlazada();
    
    int size();
    bool empty();
    
    void insert(T info, int pos);
    void insertFront(T info);
    void insertBack(T info);
    
    void clear();
    Nodo<T> * remove(int pos);
    Nodo<T> * removeFront();
    Nodo<T> * removeBack();
    
    template <typename Tn>
    friend std::ostream & operator <<(std::ostream & os, ListaEnlazada<Tn> & lista);
};

template <class T>
ListaEnlazada<T>::ListaEnlazada()
{
    
}

template <class T>
ListaEnlazada<T>::~ListaEnlazada()
{
    clear();
}

template <class T>
int ListaEnlazada<T>::size()
{
    return count;
}

template <class T>
bool ListaEnlazada<T>::empty()
{
    return first == nullptr;
}

template <class T>
void ListaEnlazada<T>::insert(T info, int pos)
{
    /* Cuando es el primer elemento */
    
    Nodo<T> * nodo = new Nodo<T>(info);
    
    if (pos == 0) {
        nodo->setNext(first);
        first = nodo;
    }
    else {
        Nodo<T> * temp = first;
        int pos_actual = 0;
        
        if (pos > count) { pos = count; }
        
        while (temp && pos_actual < (pos-1)) {
            temp = temp->getNext();
            ++pos_actual;
        }
        
        nodo->setNext(temp->getNext());
        temp->setNext(nodo);
    }
    
    ++count;
    
}

template <class T>
void ListaEnlazada<T>::insertFront(T info)
{
    insert(info, 0);
}

template <class T>
void ListaEnlazada<T>::insertBack(T info)
{
    insert(info, count);
}

template <class T>
void ListaEnlazada<T>::clear()
{
    Nodo<T> * temp = first;
    
    while (temp) {
        first = first->getNext();
        temp->setNext(nullptr);
        delete temp;
        temp = first;
    }
    
    count = 0;
}

template <class T>
Nodo<T> * ListaEnlazada<T>::remove(int pos)
{
    Nodo<T> * borrar = first;
    
    if (empty()) {
        return borrar;
    }
    
    if (pos == 0) {
        first = first->getNext();
    }
    else {
        
        Nodo<T> * prev = nullptr;
        int nodo_actual = 0;
        
        while (borrar && nodo_actual < pos) {
            prev = borrar;
            borrar = borrar->getNext();
            ++nodo_actual;
        }
        
        prev->setNext(borrar->getNext());
    }
    
    borrar->setNext(nullptr);
     --count;
    
    return borrar;
}

template <class T>
Nodo<T> * ListaEnlazada<T>::removeFront()
{
    return remove(0);
}

template <class T>
Nodo<T> * ListaEnlazada<T>::removeBack()
{
    return remove(count-1);
}

template <class T>
std::ostream & operator <<(std::ostream & os, ListaEnlazada<T> & lista)
{
    Nodo<T> * temp = lista.first;
    
    while (temp) {
        os << *temp;
        temp = temp->getNext();
    }
    
    return os;
}


#endif /* defined(__ListaEnlazada__ListaEnlazada__) */
