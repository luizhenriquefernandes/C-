

#include <iostream>
#include <list>
using std::cout; using std::list;
void main()
{
    list<int>listaNumero;
    // Adicionando números à lista
    listaNumero.push_back(10);
    listaNumero.push_back(20);
    listaNumero.push_back(30);
    listaNumero.push_back(40);
    listaNumero.push_back(50);
    list<int>::reverse_iterator rit;

    for (rit = listaNumero.rbegin(); rit != listaNumero.rend();rit--)        {
        cout << *rit<<"->";
    }
    

}
