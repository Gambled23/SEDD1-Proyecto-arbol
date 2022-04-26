#include <iostream>
#include <cstdlib>
#include "validaciones.hpp"

void menu();
using namespace std;
int main()
{
    menu();
    return 0;
}
void menu()
{
    char respuestaChar[100];
    int respuestaInt;
    cout<<"Bienvenido al programa para arboles\n";
    cout<<"1) Insertar datos\n";
    cout<<"2) Buscar nodo por ID\n";
    cout<<"3) Buscar nodo por NOMBRE\n";
    cout<<"4) Mostrar minimo ID\n";
    cout<<"5) Mostrar maximo ID\n";
    cout<<"6) Mostrar nodo antecesor\n";
    cout<<"7) Mostrar nodo sucesor\n";
    cout<<"8) Editar nodo (por ID)\n";
    cout<<"9) Eliminar nodo (por ID)\n";
    cout<<"10) Mostrar datos en orden\n";
    cout<<"11) Mostrar datos en preorden\n";
    cout<<"12) Mostrar datos en postorden\n";
    cin>>respuestaChar;
    respuestaInt = validarNumInt(respuestaChar);
}