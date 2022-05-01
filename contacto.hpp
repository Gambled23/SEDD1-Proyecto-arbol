#ifndef CONTACTO_H
#define CONTACTO_H
#include <iostream>
#include <cstdlib>
#pragma once

using namespace std;
int idAux = 0;
class contacto
{
public:
    contacto();
    int id;
    string nombre, direccion, email;
    contacto(string, string, string);

private:
};

#endif