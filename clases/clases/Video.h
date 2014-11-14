//
//  Video.h
//  clases
//
//  Created by Vicente Cubells Nonell on 13/11/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __clases__Video__
#define __clases__Video__

#include <iostream>
#include "Audio.h"

class Video : public Audio {
    
public:
    Video();
    Video(float, std::string, int);
    virtual ~Video();
    
    virtual void reproducir() override;
};

#endif /* defined(__clases__Video__) */
