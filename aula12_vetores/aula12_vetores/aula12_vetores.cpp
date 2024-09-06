#include <iostream>
#include <locale>
using std::cout; using std::setlocale;
void main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    int vetA[] = { 1,2,3,4,5,6,7,8,9,10 }, resultado;
    //saber o tamanho do vetor
    //cout << sizeof(vetA)/sizeof(int);
    for(auto i:vetA)
    {
        resultado = i * 2;
        cout << "Resutlado: " << resultado << "\n";
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
