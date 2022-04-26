#include <iostream>
#include <stdlib.h>
using namespace std;

struct Object
{
    int number;
    struct Object *left, *right;
};
typedef struct Object *Node;
Node CreateNode(int x)
{
    Node newNode = new (Object);
    newNode->number = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void add(Node &ptr, int x)
{
    if (ptr == NULL)
    {
        ptr = CreateNode(x);
    }
    else if (x < ptr->number)
        add(ptr->left, x);
    else if (x > ptr->number)
        add(ptr->right, x);
}
void show(Node ptr, int n)
{
    if (ptr == NULL)
        return;
    show(ptr->right, n + 1);
    for (int i = 0; i < n; i++)
        cout << " ";
    cout << ptr->number << endl;
    show(ptr->left, n + 1);
}

int main(int argc, char **argv)
{
    Node ptr = NULL;
    int number, input;
    cout << "-------------------------------Arbol-----------------------------" << endl;
    cout << " Inserte un total de nodos: " << endl;
    cin >> number;
    cout << endl;
    for (int i = 0; i < number; i++)
    {
        cout << " ingrese numero: " << i + 1 << ": ";
        cin >> input;
        add(ptr, input);
    }
    cout << "Nodos en el arbol:\n";
    show(ptr, 0);
    system("pause");
    return 0;
}
