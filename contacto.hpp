#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>
#include <cstdlib>
#pragma once

using namespace std;

class contacto
{
public:
    contacto();
    int id;
    string nombre, direccion, email;
    contacto(string, string, string);
private:

};

contacto::contacto()
{
    nombre = "";
    direccion = "";
    email = "";
    id = 0;
}
contacto::contacto(string nom, string dir, string ema)
{
    nombre = nom;
    direccion = dir;
    email = ema;
}
#endif