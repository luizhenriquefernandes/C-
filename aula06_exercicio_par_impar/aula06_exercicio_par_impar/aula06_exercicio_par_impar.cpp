/*Senai Nadir Dias de Figueiredo
* Jogo do Par ou Ímpar
* @author Luiz H. Fernandes
* date 29/02/24 version 1.0
*/
#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
//para projetos pequenos podemos usar namespace std mas para projetos
//maiores isso resultará em problemas
//using std::cin; using std::cout; using std::string; using std::setlocale;
void main() {
	//declaração de variáveis
	int escolhaJogador1;
	int numeroJogador1;
	int numeroJogador2 = 0;
	int soma = 0;
	int resultado;
	setlocale(LC_ALL, "pt-BR.UTF-8");
	cout << "################Jogo do Par ou Ímpar####################\n";	
	//fazer a leitura das variáveis	
	cout << "Olá Player Escolha\n1-ímpar\n2-par\n";
	cin >> escolhaJogador1;
	cout << "Joador 1 Escolha um número: \n";
	cin >> numeroJogador1;
	srand(time(0));//Inicializa o gerador de números aleatórios
	numeroJogador2 = rand() % 200 + 1; // Gera os números aleatórios entre 0 e 200
	soma = numeroJogador1 + numeroJogador2;
	resultado = soma % 2;
	cout << "\n O Jogador 2 escolheu " << numeroJogador2 << " e o resultado foi " << soma << ".\n";
	//agora faremos a validação e com operadores lógicos e relacionais.
	if ((escolhaJogador1 == 1 && resultado == 1)
		||
		(escolhaJogador1 == 2 && resultado == 0)) {
		cout << "\nO jogador 1 escolheu " << escolhaJogador1 << " e o resultado foi " <<
			soma << "\njogador 1 Ganhou.\n";
	}
	else {
		cout << "\nO jogador 2 escolheu " << numeroJogador2 << " e o resultado foi " <<
			soma << "\njogador 2 Ganhou.\n";
	}

}


