//
//  main.cpp
//  clases
//
//  Created by Vicente Cubells Nonell on 13/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include <iostream>
#include "Documento.h"
#include "Video.h"

int main(int argc, const char * argv[]) {
    
    const int n = 5;
    
    Medio * elementos[n];
    
    elementos[0] = new Audio(3.45, "Songs of Sun", 2012);
    elementos[1] = new Video(2.35, "Juegos del hambre", 2014);
    elementos[2] = new Documento(20, "Estudio de factibilidad", 2014);
    elementos[3] = new Audio(1.55, "Dance with me", 2000);
    elementos[4] = new Video(6.57, "Risas contagiosas", 2009);
    
    for (int i = 0; i < n; ++i) {
        elementos[i]->reproducir();
    }
    
    
    /* Liberar la memoria ocupada */
    for (int i = 0; i < n; ++i) {
        delete elementos[i];
    }
    
    return 0;
}
