/*Senai Nadir Dias de Figueiredo
Autor @Luiz Henrique
Data 22/2/24
versao 1.0
Título: Leitura de Variáveis
*/

#include <iostream>
#include <string>
#include <locale>
using std::cout; using std::endl; using std::setlocale; using std::string;
using std::cin; using std::getline;
void main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    string nome;
    int idade;
    cout << "Olá bom dia digite o seu nome: \n";
    cin >> nome;
    cout << "Olá " << nome << " bom dia\n";
}

