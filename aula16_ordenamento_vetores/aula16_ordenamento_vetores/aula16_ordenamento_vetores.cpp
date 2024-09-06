/*Biblioteca algorithm e vector permitem usar a função sort que deixa os vetores
alinhados de forma ascendente (crescente)*/
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout; using std::cin; using std::setlocale; using std::sort; using::qsort_s;
using std::vector; using std::greater;
int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    vector<int> numero = { 20,40,65,79,80,01,33,85,25,71 };
    for (const auto& i : numero) {
        cout << i << "-";
    }
    cout << "fim\n";
    cout << "Vetor Ordenado agora\n";
    sort(numero.begin(), numero.end());
    for (const auto& i : numero) {
        cout << i << "-";
    }
    cout << "fim\n";
    cout << "Ordenamento Inverso\n";
    sort(numero.begin(), numero.end(), greater<int>());
    for (const auto& i : numero) {
        cout << i << "-";
    }
cout << "fim\n";
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
