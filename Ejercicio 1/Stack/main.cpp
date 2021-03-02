#include <iostream>
#include "Stack.h"
#include <cstdlib>

using namespace std;

int main()
{
    Stack<string> m;
    string texto;
    do {
        getline(cin, texto);
        m.Push(texto);
    } while (texto!= "Salir");
    while (m.getSize()!=0){ 
        cout << m.Pop() << endl; 
    }
}
