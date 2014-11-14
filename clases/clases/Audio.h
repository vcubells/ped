//
//  Audio.h
//  clases
//
//  Created by Vicente Cubells Nonell on 13/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __clases__Audio__
#define __clases__Audio__

#include <iostream>
#include <string>
#include "Medio.h"

class Audio : public Medio {
protected:
    float duracion;
    
public:
    Audio();
    Audio(float, std::string, int);
    virtual ~Audio();
    
    virtual void reproducir() override;
};

#endif /* defined(__clases__Audio__) */
