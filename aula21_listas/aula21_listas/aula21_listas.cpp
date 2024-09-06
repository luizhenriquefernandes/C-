#include<iostream>
#include<string>
#include<list>
#include<locale>
using std::cout; using std::list; using std::string; using std::setlocale;
void main() {
	setlocale(LC_ALL, "pt-BR.UTF-8");
//create
	list<string>listaNome;
	listaNome.push_back("Nicolas");
	listaNome.push_back("Ana");
	listaNome.push_back("Lucas");
//read	
	for (auto& valor : listaNome)
	{
		cout << valor << "\n";
	}
//update
	for (auto& nome : listaNome)
	{
		if (nome == "Nicolas") {
			nome = "Nicolas do Boné";
			break;
		}
	}
	for (auto& valor : listaNome)
	{
		cout << "\nAtualização:\n" << valor << "\n";
	}
	//delete
	for (auto& exclusao : listaNome)
	{
		if (exclusao == "Nicolas do Boné") {
			listaNome.remove(exclusao);
			break;
		}
	}
	cout << "\nDelete:\n";
	for (auto& nome : listaNome)
	{
		cout << nome << "\n";
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
