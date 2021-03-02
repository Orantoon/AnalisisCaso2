#include <iostream>
#include "Queue.h"
#include <cstdlib>

using namespace std;

int main()
{
    Queue<string> m;
    string texto;
    do {
        getline(cin, texto);
        m.enqueue(texto);
    } while (texto!= "Salir");
    while (m.getSize()!=0){ 
        cout << m.dequeue() << endl; 
    }
}