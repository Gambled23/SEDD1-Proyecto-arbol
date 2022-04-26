#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <iostream>
#include <conio.h>

#pragma once

double validarNumDouble(char dato[])
{
    //memaso
    double numValidado;
    bool bandera = false;
    do
    {
        if (isdigit(dato[0])) // Si dato es numero
        {
            numValidado = atof(dato);
            bandera = true;
        }
        else
        {
            std::cout << "El dato ingresado NO es numero, ingresa otro\n";
            std::cin>>dato;
        }
    } while (bandera == false);
    return numValidado;
}

int validarNumInt(char dato[])
{
    int numValidado;
    bool bandera = false;
    do
    {
        if (isdigit(dato[0])) // Si dato es numero
        {
            numValidado = atof(dato);
            bandera = true;
        }
        else
        {
            std::cout << "El dato ingresado NO es numero, ingresa otro\n";
            std::cin>>dato;
        }
    } while (bandera == false);
    return numValidado;
}

#endif