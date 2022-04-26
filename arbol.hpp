#ifndef ARBOL_H
#define ARBOL_H
#include <iostream>
#include <cstdlib>
#include "nodo.hpp"
#include "validaciones.hpp"
#include "contacto.hpp"
#pragma once

using namespace std;

class arbol
{
public:
    arbol();
    nodo *raiz;
    nodo *actual;
    void inicializa();
    void insertar(contacto);
    void eliminar(int);
    void editar(int);
    void buscar(int);
    void mostrar();
    void orden();
    void preorden();
    void postorden();
    void antecesor();
    void sucesor();
    void minimo();
    void maximo();

private:
};

arbol::arbol()
{
    raiz = nullptr;
    actual = nullptr;
}
void arbol::inicializa()
{
    raiz = nullptr;
    actual = nullptr;
}
void arbol::insertar(contacto e)
{
}
void arbol::eliminar(int n)
{
}
void arbol::editar(int n)
{
}
void arbol::buscar(int n)
{
}
void arbol::mostrar()
{
}
void arbol::orden()
{
}
void arbol::preorden()
{
}
void arbol::postorden()
{
}
void arbol::antecesor()
{
}
void arbol::sucesor()
{
}
void arbol::minimo()
{
}
void arbol::maximo()
{
}
#endif