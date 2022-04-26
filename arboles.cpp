#include <iostream>
#include <string>
#include <cstdlib>
#include "validaciones.hpp"
#include "nodo.hpp"
#include "contacto.hpp"

contacto contactoAux;
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
    int respuestaInt = 0;
    int auxID;
    string auxNombre;
    do
    {
        system("cls");
        cout << "Bienvenido al programa para arboles\n";
        cout << "1) Insertar datos\n";              // Todo llamada a funcion
        cout << "2) Buscar nodo por ID\n";          // Todo
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
        cin >> respuestaChar;
        respuestaInt = validarNumInt(respuestaChar);
        switch (respuestaInt)
        {
        case 1:
            cout << "Ingrese el nombre del contacto\n";
            cin.sync();
            getline(cin, contactoAux.nombre);
            cout << "Ingrese el email de " << contactoAux.nombre << endl;
            cin.sync();
            getline(cin, contactoAux.email);
            cout << "Ingrese la direccion de " << contactoAux.nombre << endl;
            cin.sync();
            getline(cin, contactoAux.direccion);
            break;
        case 2:
            cout<<"Ingrese la ID del contacto a buscar\n";
            cin>>auxID;
            break;
        case 3:
            cout<<"Ingrese el nombre del contacto a buscar\n";
            cin>>auxNombre;
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            /* code */
            break;
        case 8:
            cout<<"Ingrese la ID del contacto a editar\n";
            cin>>auxID;
            break;
        case 9:
            cout<<"Ingrese la ID del contacto a eliminar\n";
            cin>>auxID;
            break;
        case 10:
            /* code */
            break;
        case 11:
            /* code */
            break;
        case 12:
            /* code */
            break;
        case 0:
            cout << "Gracias por su preferencia\n";
            break;
        default:
            cout << "Respuesta no valida\n";
            break;
        }
        system("PAUSE");
    } while (respuestaInt != 0);
}