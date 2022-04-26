#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <cstdlib>
#include "contacto.hpp"
#pragma once

using namespace std;

class nodo
{
public:
    nodo();
    contacto dato;
    nodo *izquierda;
    nodo *derecha;
    nodo(contacto e)
    {
        dato = e;
        izquierda = nullptr;
        derecha = nullptr;
    };
};

nodo::nodo()
{
    izquierda = nullptr;
    derecha = nullptr;
}
#endif