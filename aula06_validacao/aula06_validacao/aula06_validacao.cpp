// aula06_validacao.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
using std::cout; using std::cin; using std::string; using std::setlocale; using std::setprecision;
using std::fixed;
int main() {
	setlocale(LC_ALL, "pt-BR.UTF-8");
	double docinhos; 
	double porcentagem;
	double r;
	cout << "################################################################\n";
	  cout << "O Guaxinim Mirello estava levando docinhos para sua \n" <<
	  	"Amada vovó. A sua vovó não aguentava comer todos porque \n" <<
	  	"sua dentadura já estava velha e gasta e podia comer apenas\n" <<
	  	"Uma porcentagem do total de docinhos.\n";
	  cout << "Digite o total de docinhos de Mirello: \n";
	  cin >> docinhos;
	  cout << "Digite o total de porcentagem que ficará com a vovózinha jujuba: \n";
	  cin >> porcentagem;
	  r = (docinhos * porcentagem) / 100;
	  docinhos = docinhos - r;
	  cout << "O total docinhos que vai para a vovó jujuba é: " << fixed << setprecision(2)
	  	<< r << ".\n" << "O total de docinhos que ficou para mirelo é: " << docinhos<<".\n";
	cout << "################################################################";
}