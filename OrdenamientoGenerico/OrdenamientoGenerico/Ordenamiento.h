//
//  Ordenamiento.h
//  OrdenamientoGenerico
//
//  Created by Vicente Cubells Nonell on 06/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __OrdenamientoGenerico__Ordenamiento__
#define __OrdenamientoGenerico__Ordenamiento__

#include <iostream>

template <class T>
class Ordenamiento {
public:
    Ordenamiento();
    
    static void BubbleSort(T *, int, bool (*)(T, T));
    static void InsertionSort(T *, int, bool(*) (T, T));
    static void SelectionSort(T *, int, bool(*) (T, T));
    
    static void QuickSort(T *, int, int, bool(*) (T, T));
    static void MergeSort(T *, int, int, bool(*) (T, T), int);
    
    static bool asc(T a, T b);
    static bool desc(T a, T b);
    
private:
    static void merge(T *, int, int, int, bool(*) (T, T), int);
    
};

template <class T>
Ordenamiento<T>::Ordenamiento()
{
    // No necesita implementación en esta parte
}


template <class T>
bool Ordenamiento<T>::asc(T a, T b)
{
    return a > b;
}

template <class T>
bool Ordenamiento<T>::desc(T a, T b)
{
    return a < b;
}

template <class T>
void Ordenamiento<T>::BubbleSort(T * vector, int n, bool orden(T, T))
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

template <class T>
void Ordenamiento<T>::InsertionSort(T * v, int n, bool compara (T, T))
{
    T index;
    
    for (int i=1; i < n; i++)
    {
        index = v[i];
        
        int j = i-1;
        
        //while (j >= 0 && v[j] > index)
        while ( j >= 0 && compara(v[j], index) )
        {
            v[j + 1] = v[j];
            j--;
        }
        
        v[j+1] = index;
    }
}

template <class T>
void Ordenamiento<T>::SelectionSort(T * v, int n, bool compara (T, T))
{
    int minimo = 0;
    T temp;
    
    for(int i = 0; i < n-1; i++)
    {
        minimo = i;
        for(int j = i + 1; j < n; j++)
        {
            //if (v[minimo] > v[j])
            if ( compara(v[minimo], v[j]) )
                minimo = j;
        }
        temp = v[minimo];
        v[minimo] = v[i];
        v[i] = temp;
    }
}

template <class T>
void Ordenamiento<T>::QuickSort(T * v, int primero, int ultimo, bool compara (T, T))
{
    int izquierdo = primero;
    int derecho = ultimo;
    T temp;
    
    //Se selecciona pivote
    T pivote = v[primero];
    
    if ( primero < ultimo) // Paso base
    {
        // particion
        while ( izquierdo < derecho)
        {
            while ( (izquierdo < derecho) && !compara(v[izquierdo], pivote)) izquierdo++; // <=
            while ( compara(v[derecho], pivote) ) derecho--; // >
            
            if ( izquierdo < derecho) // se intercambian los contenidos
            {
                temp = v[derecho];
                v[derecho] = v[izquierdo];
                v[izquierdo] = temp;
            }
        }
        
        // Se intercambia el pivote con el elemento de la posición derecha
        temp = v[derecho];
        v[derecho] = v[primero];
        v[primero] = temp;
        
        // Paso recursivo
        QuickSort ( v, primero, derecho-1, compara);
        QuickSort ( v, izquierdo, ultimo, compara);
    }
}

template <class T>
void Ordenamiento<T>::MergeSort(T * v, int l, int n, bool compara (T, T), int N)
{
    int m = (n+l)/2;
    if (n > l)
    {
        mergesort (v, l, m, compara, N);
        mergesort (v, m+1, n, compara, N);
        merge (v, l, m, n, compara, N);
    }
}

template <class T>
void Ordenamiento<T>::merge(T v[], int l, int m, int n, bool compara (T, T), int N)
{
    int i, j, k;
    T aux[N];   //Vector auxiliar
    
    for(i=m+1;i>l;i--)
        aux[i-1] = v[i-1];
    
    for (j=m; j<n; j++)
        aux[n+m-j] = v[j+1];
    
    for(k=l;k<=n;k++)       //Mezcla
        if (!compara(aux[i], aux[j])) // <
            v[k] = aux[i++];
        else
            v[k] = aux[j--];
}



#endif /* defined(__OrdenamientoGenerico__Ordenamiento__) */
