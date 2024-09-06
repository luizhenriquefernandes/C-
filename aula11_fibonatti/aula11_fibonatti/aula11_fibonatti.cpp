// aula11_fibonatti.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <locale>
using std::cout; using std::cin; using std::setlocale;

void main()
{
	//declaração de variáveis
	int t1 = 1;	int t2 = 1;	int t3 = 0;	int passos;
	setlocale(LC_ALL, "pt-BR.UTF-8");
	for (int i = 0; i < 10; i++) {
		cout << "#";
	}
	cout << "Bem vindo ao Programa de Cálculo da Sequência de Fibonacci";
	for (int i = 0; i < 10; i++) {
		cout << "#";
	}
	cout << "\n Digite o número de passos da sequência de Fibonacci: ";	
	cin >> passos;
	cout << "\n" << t1 << "->" << t2;
	for (int i = 0; i < passos - 2; i++){
		t3 = t1 + t2;
		t2 = t1;
		t1 = t3;
		cout << "->" << t3;
	}
	cout << "\nFIM"<<"\n";
	for (int i = 0; i < 38; i++){
		cout << "#";
	}
	cout << "FIM";
	for (int i = 0; i < 37; i++){
		cout << "#";
	}
   
}
