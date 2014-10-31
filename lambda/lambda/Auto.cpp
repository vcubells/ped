//
//  Auto.cpp
//  lambda
//
//  Created by Vicente Cubells Nonell on 30/10/14.
//  Copyright (c) 2014 Vicente Cubells Nonell. All rights reserved.
//

#include "Auto.h"

/* Constructores */

Auto::Auto()
{
    // Cuerpo vacío
}

Auto::Auto(std::string _placas, std::string _marca, int _modelo, std::string _color)
: placas(_placas), marca(_marca), modelo(_modelo), color(_color)
{
    // Cuerpo vacío
}

/* Getters & Setters */

std::string Auto::getPlacas() const
{
    return placas;
}

void Auto::setPlacas(std::string value)
{
    placas = value;
}

std::string Auto::getMarca() const
{
    return marca;
}

void Auto::setMarca(std::string value)
{
    marca = value;
}

int Auto::getModelo() const
{
    return modelo;
}

void Auto::setModelo(int value)
{
    modelo = value;
}

std::string Auto::getColor() const
{
    return color;
}

void Auto::setColor(std::string value)
{
    color = value;
}

/* Sobrecarga de operadores */

bool Auto::operator <(Auto & _auto)
{
    return placas < _auto.placas;
}

bool Auto::operator >(Auto & _auto)
{
    return modelo > _auto.modelo;
}

std::ostream & operator << (std::ostream & os, const Auto & _auto)
{
    os << "Placas : " << _auto.placas << ", ";
    os << "Marca : " << _auto.marca << ", ";
    os << "Modelo : " << _auto.modelo << ", ";
    os << "Color : " << _auto.color << std::endl;
    
    return os;
    
}