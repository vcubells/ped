//
//  Video.cpp
//  clases
//
//  Created by Vicente Cubells Nonell on 13/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include "Video.h"

Video::Video() : Video(0.0, "Sin definir", 0)
{
    
}

Video::Video(float _duracion, std::string _titulo, int _año)
: Audio( _duracion, _titulo, _año)
{
    
}

Video::~Video()
{
    
}

void Video::reproducir()
{
    std::cout << "Se está reproduciendo el vídeo " << titulo << "(" << duracion << ")" << std::endl;
}