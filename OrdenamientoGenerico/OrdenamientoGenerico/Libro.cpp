//
//  Libro.cpp
//  OrdenamientoGenerico
//
//  Created by Vicente Cubells Nonell on 06/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include "Libro.h"

std::ostream & operator <<(std::ostream & os, Libro & libro)
{
    os << libro.titulo << " ( " << libro.apublicacion << " ) " << std::endl;
    
    return os;
}

bool Libro::operator >(Libro & libro)
{
    return titulo > libro.titulo;
}

bool Libro::operator <(Libro & libro)
{
    return apublicacion < libro.apublicacion;
}