#include <iostream>
#include <cstdlib>
#include <string>
#include "validaciones.hpp"
#include "contacto.hpp"
using namespace std;

struct Nodo
{
    int dato;
    Nodo *izq;
    Nodo *der;
};

//*Prototipos
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
void buscarNodo(Nodo *, int);

void preorden(Nodo *);

Nodo *arbol = NULL;

//*Funciones
Nodo *crearNodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n)
{
    if (arbol == NULL) // arbol vacio
    {
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else // arbol tiene 1+ nodos
    {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz) // Si el elemento es menor a la raiz
        {
            insertarNodo(arbol->izq, n);
        }
        else // Si el elemento es mayor
        {
            insertarNodo(arbol->der, n);
        }
    }
}

void buscarNodo(Nodo *arbol, int n)
{
    if (arbol == NULL) // No encuentra el id
    {
        return;
    }
    else if (arbol->dato == n) // Encuentra el id
    {
        cout << "Nombre: " << arbol->dato << endl;
        cout << "ID: " << arbol->dato << endl;
        cout << "Direccion: " << arbol->dato << endl;
        cout << "Email: " << arbol->dato << endl;
    }
    else if (n < arbol->dato)
    {
        return buscarNodo(arbol->izq, n);
    }
    else if (n > arbol->dato)
    {
        return buscarNodo(arbol->der, n);
    }
}
void preorden(Nodo *);


int main()
{
    int intAux;
    char opcChar[100];
    int opcInt;
    char auxIDChar[100];
    int auxIDInt;
    string auxNombre;
    do
    {
        system("cls");
        cout << "Bienvenido al programa para arboles\n";
        cout << "1) Insertar datos\n";
        cout << "2) Buscar nodo por ID\n";          
        cout << "3) Buscar nodo por NOMBRE\n";      // Todo
        cout << "4) Mostrar minimo ID\n";           // Todo
        cout << "5) Mostrar maximo ID\n";           // Todo
        cout << "6) Mostrar nodo antecesor\n";      // Todo
        cout << "7) Mostrar nodo sucesor\n";        // Todo
        cout << "8) Editar nodo (por ID)\n";        // Todo
        cout << "9) Eliminar nodo (por ID)\n";      // Todo
        cout << "10) Mostrar datos en orden\n";     // Todo
        cout << "11) Mostrar datos en preorden\n";  // Todo
        cout << "12) Mostrar datos en postorden\n"; // Todo
        cout << "\n0) Salir\n";
        cin >> opcChar;
        opcInt = validarNumInt(opcChar);
        switch (opcInt)
        {
        case 1:
            cout << "Ingrese el nombre del int\n";
            cin>>intAux;
            insertarNodo(arbol, intAux); // Insertar el dato
            break;
        case 2:
            cout << "Ingrese la ID del int a buscar\n";
            cin >> auxIDChar;
            auxIDInt = validarNumInt(auxIDChar);
            buscarNodo(arbol, auxIDInt);
            break;
        case 3:
            cout << "Ingrese el nombre del int a buscar\n";
            cin >> auxNombre;
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:
            cout << "Ingrese la ID del int a editar\n";
            cin >> auxIDChar;
            auxIDInt = validarNumInt(auxIDChar);
            break;
        case 9:
            cout << "Ingrese la ID del int a eliminar\n";
            cin >> auxIDChar;
            auxIDInt = validarNumInt(auxIDChar);
            break;
        case 10:

            break;
        case 11:

            break;
        case 12:

            break;
        case 0:
            cout << "Gracias por su preferencia" << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }

        system("PAUSE");
    } while (opcInt != 0);

    system("PAUSE");
    return 0;
}