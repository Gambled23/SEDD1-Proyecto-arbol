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
    int respuestaInt = 0;
    do
    {
        system("cls");
        cout << "Bienvenido al programa para arboles\n";
        cout << "1) Insertar datos\n";
        cout << "2) Buscar nodo por ID\n";
        cout << "3) Buscar nodo por NOMBRE\n";
        cout << "4) Mostrar minimo ID\n";
        cout << "5) Mostrar maximo ID\n";
        cout << "6) Mostrar nodo antecesor\n";
        cout << "7) Mostrar nodo sucesor\n";
        cout << "8) Editar nodo (por ID)\n";
        cout << "9) Eliminar nodo (por ID)\n";
        cout << "10) Mostrar datos en orden\n";
        cout << "11) Mostrar datos en preorden\n";
        cout << "12) Mostrar datos en postorden\n";
        cout << "\n0) Salir\n";
        cin >> respuestaChar;
        respuestaInt = validarNumInt(respuestaChar);
        switch (respuestaInt)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
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
            /* code */
            break;
        case 9:
            /* code */
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