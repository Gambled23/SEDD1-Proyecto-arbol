#ifndef ARBOL_H
#define ARBOL_H
#include <iostream>
#include <cstdlib>
#include "contacto.hpp"
#pragma once
using namespace std;

struct nodo
{
    contacto dato;
    nodo *izq;
    nodo *der;
};

//*Prototipos
nodo *crearNodo(contacto);
void insertarNodo(nodo *&, contacto);

nodo *arbol = NULL;

//*Funciones
nodo *crearNodo(contacto n)
{
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

void insertarNodo(nodo *&arbol, contacto n)
{
    if (arbol == NULL) //arbol vacio
    {
        nodo *nuevo_nodo = new nodo(n);
        
    }
    
}
#endif