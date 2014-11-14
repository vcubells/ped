//
//  Documento.cpp
//  clases
//
//  Created by Vicente Cubells Nonell on 13/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include "Documento.h"

Documento::Documento() : Documento(0, "Sin definir", 0)
{
    
}

Documento::Documento(int _paginas, std::string _titulo, int _año)
: paginas(_paginas), Medio(_titulo, _año)
{
    
}

Documento::~Documento()
{
    
}

void Documento::reproducir()
{
    std::cout << "Se está visualizando el documento " << titulo << "(" << paginas << ")" << std::endl;
}