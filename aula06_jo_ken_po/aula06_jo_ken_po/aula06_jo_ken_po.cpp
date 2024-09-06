#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;
int main()
{
    //variaveis
    int escolhaCpu;
    int escolhaPlayer;
    setlocale(LC_ALL, "pt-BR.UTF-8");
    srand(time(0));
    escolhaCpu = rand() % 3 + 1;
    cout << "Bem vindo ao jogo do jo-ken-po\nDigite - 1 - pedra\n" <<
        "Digite - 2 - Tesoura\nDigite - 3 Tesoura\nDigite: ";
    cin >> escolhaPlayer;
    cout << "Você escolheu " << escolhaPlayer << " A Cpu escolheu: " << escolhaCpu << "\n";
    if (escolhaCpu == escolhaPlayer) {
        cout << "empate\n";
    }
    else if (
        (escolhaPlayer == 1 && escolhaCpu == 2)
        ||
        (escolhaPlayer == 2 && escolhaCpu == 3)
        ||
        (escolhaPlayer == 3 && escolhaCpu == 1)) {
        cout << "O Player Ganhou";
    }
    else {
        cout << "O Player Perdeu";
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
