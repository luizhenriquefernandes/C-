/*Senai Nadir Dias de Figueiredo
autor: Luiz Henrique
data: 22/02/24
Exercício Leitura de Variáveis - Apresentação Pessoal v 1.0
*/

#include <iostream>
#include<string>
#include<locale>
using std::cout; using std::cin; using std::setlocale; using std::getline;
using std::string; using std::endl;
int main(){
setlocale(LC_ALL, "pt-BR.UTF-8");
	//declaração de variáveis
string nome, sexo, endereco, dataNascimento;
int idade, cpf;
cout << "Olá Digite o seu nome: \n";
getline(cin, nome);
cout << "Digite a sua Idade: \n";
cin >> idade;
cin.ignore();
cout << "Digite seu Endereço: \n"<<endl;
getline(cin,endereco);
cout << "Digite sua Data de Nascimento: \n";
cin >> dataNascimento;
cin.ignore();
cout << "Digite seu Sexo: \n";
cin >> sexo;
cin.ignore();
cout << "Olá " << nome << " Seja bem vindoª";
cout << "Você nasceu em:  " << dataNascimento << "\n";
cout << "Sua idade é: " << idade << "\n";
cout << "Logradouro" << endereco << "\n";
cout << "Sexo: " << sexo << "\n";
return 0;
}


