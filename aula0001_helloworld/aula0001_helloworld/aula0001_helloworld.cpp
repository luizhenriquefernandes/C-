// aula0001_helloworld.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <locale>
using std::cout;
int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    cout<< "O amor é fogo que arde sem se ver\n""É ferida que dói e não se sente\n"
        << "É um contentamento desconte\n"
        << "João Pessoa,\n"
        << "barra invertida n permite que pule a linha \n"
        << "importante que se quiser quebrar o texto\n"
        << "também no código é importante acrescentar\n"
        << "O fluxo << no código" ;
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
