//
//  Auto.h
//  lambda
//
//  Created by Vicente Cubells Nonell on 30/10/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#ifndef __lambda__Auto__
#define __lambda__Auto__

#include <iostream>
#include <string>

class Auto {
    std::string placas = "------";
    std::string marca = "Sin definir";
    int modelo = 0;
    std::string color = "Incoloro";
    
public:
    /* Constructores */
    
    Auto();
    Auto(std::string, std::string, int, std::string);
    
    /* Getters & Setters */
    
    std::string getPlacas() const;
    void setPlacas(std::string value);
    
    std::string getMarca() const;
    void setMarca(std::string value);
    
    int getModelo() const;
    void setModelo(int value);
    
    std::string getColor() const;
    void setColor(std::string value);
    
    /* Sobrecarga de operadores */
    
    bool operator <(Auto & _auto);
    bool operator >(Auto & _auto);
    
    friend std::ostream & operator << (std::ostream &, const Auto &);
};

#endif /* defined(__lambda__Auto__) */
