#include <iostream>
#include <string>
#include <locale>
using std::cin; using std::cout; using std::string;
using std::setlocale;
void main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    string dna[10];
    //leitura deste dna
    for (int i = 0; i < 10;i++) {
        cout << "Digite o valor:\n";
        cin >> dna[i];        
    }
    cout << "Fita Complementar do DNA\n";
    for (auto& i : dna)
    {
        cout << i << "-";
        if (i == "A" || i == "a") {
            cout << "T\n";
        }
        else if (i == "T" || i == "t") {
            cout << "A\n";
        }
        else if (i == "C" || i == "c") {
            cout << "G\n";

        }
        else if (i == "G" || i == "g") {
            cout << "C\n";          

        }
    }
    cout << "Fita de RNA-m\n";
    for (auto& i : dna)
    {
        cout << i << "-";
        if (i == "A" || i == "a") {
            cout << "U\n";
        }
        else if (i == "T" || i == "t") {
            cout << "A\n";
        }
        else if (i == "C" || i == "c") {
            cout << "G\n";

        }
        else if (i == "G" || i == "g") {
            cout << "C\n";

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
