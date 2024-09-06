/*Senai Nadir Dias de Figueiredo
* autor: Luiz Henrique
* data 22/02/24
* Exercício de Soma
*/

#include <iostream>
#include <locale>
#include <string>

using std::cout; using std::cin; using std::locale; using std::string; using std::stoi;

int main()
{
    string xStr;
    string yStr;
    int x;
    int y; 
    int resultado;
    setlocale(LC_ALL, "pt-BR.UTF-8");
    cout << "####################Programa de Soma##################\n";
    cout << "Olá Seja Bem vindo ao Programa de Soma\n";
    cout << "Digite o número 1: ";
    cin >> xStr;
    cout << "\n" << xStr << " É Tipo " << typeid(xStr).name()<<"\n";
    cin.ignore();    
    cout << "\nDigite o número 2: ";
    cin >> yStr;
    cout << "\n" << yStr << " É Tipo " << typeid(xStr).name() << "\n";
   x = stoi(xStr);
   cout << "\n" << x << " É Tipo " << typeid(x).name() << "\n";
   y = stoi(yStr);
   cout << "\n" << y << " É Tipo " << typeid(y).name() << "\n";
    resultado = x + y;
    cout << "A soma de: " << x << " + " << y << " = " << resultado << "\n";
    cout << "##########################FIM##########################\n";
    return 0;
}

