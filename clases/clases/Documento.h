//
//  Documento.h
//  clases
//
//  Created by Vicente Cubells Nonell on 13/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __clases__Documento__
#define __clases__Documento__

#include <iostream>
#include <string>
#include "Medio.h"

class Documento : public Medio {
private:
    int paginas;
    
public:
    Documento();
    Documento(int, std::string, int);
    virtual ~Documento();
    
    virtual void reproducir() override;
};

#endif /* defined(__clases__Documento__) */
