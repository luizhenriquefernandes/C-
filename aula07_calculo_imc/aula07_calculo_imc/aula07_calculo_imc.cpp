#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
using std::string; using std::cout; using std::cin; using std::fixed; using std::setprecision;
using std::setlocale;
int main()
{
	setlocale(LC_ALL, "pt-BR.UTF-8");
	float peso; float altura; double imc;
	cout << "#############################IMC########################################\n";
	cout << "Programa de Cálculo de IMC:\n" <<
		"Menor que 16,99 Muito abaixo do peso;\n" <<
		"17 a 18.40 Abaixo do peso;\n" <<
		"18.5 a 24.99 Peso normal;\n" <<
		"25 a 29.99 Acima do peso;\n" <<
		"30 a 34.99 Obesidade Grau - I;\n" <<
		"35 a 40 Obesidade Grau - II;\n" <<
		"maior que 40 Obesidade Grau - III;\n"<<
		"Digite o Peso: \n";
	cin >> peso;
	cout << "Digite a Altura: \n";
	cin >> altura;
	imc = peso / pow(altura, 2);
	cout << "O IMC é " << fixed << setprecision(2) << imc << "\n";
	if (imc < 17) {
		cout << "Muito abaixo do peso IMC < 17\n";
	}
	else if (imc>=17 && imc < 18.41) {
		cout << "Abaixo do IMC entre 17 e 14.40\n";
	}
	else if (imc >= 18.5 && imc < 25) {
		cout << "Peso Normal IMC entre 18.5 e 30\n";
	}
	else if (imc >= 25 && imc < 30) {
		cout << "Acima do Peso IMC entre 25 e 30\n";
	}
	else if (imc >= 30 && imc < 35) {
		cout << "Obesidade Nível - I IMC entre 30 e 35\n";
	}
	else if (imc >= 35 && imc < 40) {
		cout << "Obesidade Nível - II IMC entre 35 e 40\n";
	}
	else {
		cout << "Obesidade Nível - III IMC maior que 40\n";
	}
	cout << "#############################FIM########################################\n";
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
