//
//  Audio.cpp
//  clases
//
//  Created by Vicente Cubells Nonell on 13/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include "Audio.h"

Audio::Audio() : Audio(0.0, "Sin definir", 0)
{
    
}

Audio::Audio(float _duracion, std::string _titulo, int _año)
: duracion(_duracion), Medio(_titulo, _año)
{
    
}

Audio::~Audio()
{
    
}

void Audio::reproducir()
{
    std::cout << "Se está reproduciendo el audio " << titulo << "(" << duracion << ")" << std::endl;
}