#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>
#include <cstdlib>
#include <string>
#pragma once

using namespace std;
class contacto
{
public:
    contacto();
    contacto(string, string, string, int);
    int id;
    string nombre, direccion, email;
private:
};
contacto::contacto(string nom, string dir, string ema, int aidi)
{
    direccion = dir;
    nombre = nom;
    email = ema;
    id = aidi;
}
contacto::contacto()
{
    id = 0;
    nombre = "";
    direccion = "";
    email = "";
}

#endif