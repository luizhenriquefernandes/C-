#include <iomanip>
#include <iostream>
#include <locale>
#include <string>
using std::cout; using std::cin; using std::setlocale; using std::fixed;
using std::setprecision; using std::string;
void main()
{
	setlocale(LC_ALL, "pt-BR.UTF-8");
	for (int i = 0; i < 45; i++) {
		cout << "#";
	}
	while (true) {
		cout << "\nBem vindo ao Programa de Média: \n";
		//VAMOS AO CÁLCULO
		float nota; float soma = 0; float media = 0; int cont = 0;
		//agora vamos ler a variável nota com um laço de repetição
		for (int i = 1; i <= 4; i++) {
			cout << "\Digite a nota" << i << ": ";
			cin >> nota;
			cout << "\n";
			soma = soma + nota;
			cont++;
		}
		media = soma / cont;
		cout << "A média é: " << fixed << setprecision(2) << media << "\n";
		if (media < 5) {
			cout << "Alun@ foi Reprovado\n";
		}
		else if (media >= 5 && media < 7) {
			cout << "Alun@ foi Aprovado com Regular\n";
		}
		else if (media >= 7 && media < 9) {
			cout << "Alun@ foi Aprovado com Bom\n";
		}
		else if (media >= 9 && media <= 10) {
			cout << "Alun@ foi Aprovado com Muito Bom\n";
		}
		else {
			cout << "Digite uma opção válida";
		}




				string sair = " ";
		while (sair != "S" || sair != "N") {
			cout << "\nQuer sair [S/N]: ";
			cin >> sair;
			cout << "\n";
			if (sair == "S" || sair == "N") {
				break;
			}
			else {
				cout << "\nDigite apenas S ou N\n";
			}
		}
		if (sair == "S") {
			cout << "Você saiu do Programa\n";
			for (int i = 0; i < 42; i++)
			{
				cout << "#";
				if (i == 18) {
					cout << "FIM";
				}
			};
			break;			
		}	
	}
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
