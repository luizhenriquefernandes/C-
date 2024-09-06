/*Criação de variáveis
* @autor Luiz Henrique
* version 1.0
* data 15/02/24
*/
#include <iostream>
#include <locale>
#include <string>
using std::cout;
using std::string;
int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    string nome = "Galinha Pintadinha\n";
    cout << nome;
    nome = "Cuca";
    cout << "Olá seja bem vind@ "<<nome<<" Tenha uma boa tarde!\n";
    nome = "Console eu não gosto de você porque vc faz tudo que eu mando";
    cout << nome;
    return 0;
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
