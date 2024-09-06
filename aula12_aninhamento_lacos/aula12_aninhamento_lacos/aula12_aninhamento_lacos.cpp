#include <iostream>
#include <locale>
using std::cout; using std::setlocale;
void main()
{
    int r;
    setlocale(LC_ALL, "pt-BR.UTF-8");
    std::cout << "Hello World!\n";
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            r = x * y;
            cout << x << "*" << y << "=" << r<<"\n";
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
