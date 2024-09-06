/*Senai Nadir Dias de Figueiredo
@autor: Luiz Fernandes
Data: 07/03/24 - LOPAL
versão 1.0
*/
#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>
#include <iomanip>
using std::cout; using std::cin; using std::setprecision; using std::fixed;
using std::string; using std::setlocale;

void main()
{
    int escolha;
    float saldo = 5000; float deposito; float saque; float investimento;
    float resultadoInvestimento;
    string nome = "Genebaldo";
    setlocale(LC_ALL, "pt-BR.UTF-8");
    cout << "#####################PROGRAMA DE SAQUE#####################\n";
    cout << "Seu saldo é R$ " << saldo << "\n";
    cout << "                 Olá seja bem vindo Sr. " << nome << "\nDigite-1 - Saque\n" <<
        "Digite-2 - Depósito\nDigite-3 - Investimento\nDigite a opção: ";
     //escolha será a primeira variável a ser lida;
    cin >> escolha;
    switch (escolha)
    {
    case(1):
        cout << "\nDigite o Valor do Saque: ";
        cin >> saque;
        saldo = saldo - saque;
        cout << "\nO valor do saque foi " << fixed << setprecision(2) << saque <<
            " e o saldo agora é R$" << saldo << ".\n";    
        break;
    case(2):
        cout << "\nDigite o Valor do Depósito: ";
        cin >> deposito;
        saldo = saldo + deposito;
        cout << "\nO valor do depósito foi " << fixed << setprecision(2) << deposito <<
            " e o saldo agora é R$" << saldo << ".\n";
    case(3):
        cout << "\nDigite o Valor do Investimento: ";
        cin >> investimento;
        resultadoInvestimento = investimento * 0.35;
        saldo = saldo + resultadoInvestimento;
        cout << "\nO valor do investimento foi " << fixed << setprecision(2) << investimento <<
            "\nA renda foi de " << resultadoInvestimento << " \ne o saldo agora é R$" << saldo << ".\n";
    default:
        cout << "Opção Inválida digite a opção do 1 ao 3";
        break;
    }
    cout << "\n###########################FIM#############################";

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
