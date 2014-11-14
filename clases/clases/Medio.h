//
//  Medio.h
//  clases
//
//  Created by Vicente Cubells Nonell on 13/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __clases__Medio__
#define __clases__Medio__

#include <iostream>
#include <string>

class Medio {
protected:
    std::string titulo;
    int anioDeCreacion;
    
public:
    Medio();
    Medio(std::string, int);
    virtual ~Medio();
    
    virtual void reproducir() = 0;
    
};

#endif /* defined(__clases__Medio__) */
