#include <iostream>
#include <cstdlib>
#include <regex>
using namespace std;

int main()
{
    string email = "juanchoreancho@gmail.com";
    string nombre = "pablin memin";
    string direccion = "elmeme #159";
    regex ema("(.*)(@)(.*)(.com)");
    regex nom("(([a-zA-Z])(\\s*)([a-zA-Z])*)*");
    regex dire("([a-zA-Z])*(\\s*)(#)([0-9]*)");
    if (regex_match(email, ema))
    {
        cout<<"La variable email es un correo\n";
    }

    if (regex_match(nombre, nom))
    {
        cout<<"La variable nombre es un nombre\n";
    }

    if (regex_match(direccion, dire))
    {
        cout<<"La variable direccion es una direccion\n";
    }
    
    system("PAUSE");
    return 0;
}