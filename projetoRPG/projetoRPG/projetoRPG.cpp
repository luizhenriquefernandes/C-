// projetoRPG.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <list>
#include <locale>
using std::string; using std::cout; using std::setlocale;
using std::cin; using std::list;
void main()
{
    //Inserindo os valores dos personagens
    //Devemos criar uma lista vazia e uma variável de leitura
    list<string>listaNomePersonagem, listaClassePersonagem;
    list<int>listaPontosVida, listaConstituicao,listaCarisma, listaForca,listaDestreza;
    string nome, classe;
    int pvPersonagem, constituicaoPersonagem, forcaPersonagem, destrezaPersonagem;
    setlocale(LC_ALL, "pt-BR.UTF-8");
    cout << "Gaia era um lugar repleto de perigos e monstros\n" <<
        "Mas também de belezas e mistérios. Loreck era um\n" <<
        "jovem aprendiz de druida que vivia conectado com a\n" <<
        "natureza, que veio parar na ilha de gomorra por\n" <<
        "desafiar a deusa Sith, dona da morte. Seu objetivo é encontrá-lo para ajudar na guerra mística\n" <<
        "memória e agora você deverá nomear e inserir atributos\n" <<
        "do seu campeão e ajudá-lo a encontrar-se nesse mundo mágico.\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "Digite o nome: ";
        cin >> nome;
        listaNomePersonagem.push_back(nome);
        cout << "Digite a classe: ";
        cin >> classe;
        listaClassePersonagem.push_back(classe);
        cout << "Digite os pontos de vida: ";
        cin >> pvPersonagem;
        listaPontosVida.push_back(pvPersonagem);


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
