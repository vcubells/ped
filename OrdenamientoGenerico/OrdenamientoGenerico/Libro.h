//
//  Libro.h
//  OrdenamientoGenerico
//
//  Created by Vicente Cubells Nonell on 06/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __OrdenamientoGenerico__Libro__
#define __OrdenamientoGenerico__Libro__

#include <iostream>
#include <string>

class Libro {
    std::string titulo;
    std::string autor;
    int paginas;
    int apublicacion;
    
public:
    Libro()
    {
        titulo = "Sin definir";
        autor = "Sin definir";
        paginas = 0;
        apublicacion = 0;
    }
    
    Libro(std::string _titulo, std::string _autor, int _paginas, int _apublicacion)
    :titulo(_titulo), autor(_autor), paginas(_paginas), apublicacion(_apublicacion)
    {
        
    }
    
    /* Sobrecarga de operador */
    
    friend std::ostream & operator <<(std::ostream &, Libro &);
    bool operator >(Libro &);
    bool operator <(Libro &);
};


#endif /* defined(__OrdenamientoGenerico__Libro__) */
