// aula13_vetores.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <locale>
#include <string>
#include <vector>

using std::setlocale; using std::cout; using std::cin; using std::string; using std:: vector;
void main()
{
    /*Vetores exercício criar dois vetores de 5 posições:
    1) multiplicar um índice pelo outro;
    2) multiplicar todos os índices de um por todos os índices
       do outro (assossiativa).
       ex: vetorA      vetorB      
           1 2 3 4 5   1,2,3,4,5

    Resposta1 esperada: 1,4,9,16,25
    Resposta2 esperada: 1,2,3,4,5,2,4,6,8,10,3,6,9,12,15,4,8...25
       */
    int vetA[] = { 1,2,3,4,5 };
    int vetB[] = { 1,2,3,4,5 };
    
    string nome[] = { "joao","ana","cleide"};
    //para iterar sobre cada palavra
    for (auto& i : nome)
    {
        for (auto& j : i) {
            cout << j << "\n";
        }
    }

   
    /*vector<string> vetNome ={ "Luiz","Ana","Milena","Laura" };
    for (const string& n : vetNome) {
        cout << n<<"\n";
    }*/
    

    /*cout << "Exercício 1: \n";
    for (int i = 0; i < sizeof(vetA)/sizeof(int); i++) {
        r = vetA[i] * vetB[i];
        cout << r<<"\n";
    }
    cout << "Exercício 2\n";   
    for (int i = 0; i < sizeof(vetA) / sizeof(int); i++) {
        for (int j = 0; j < sizeof(vetB) / sizeof(int); j++) {
            r = vetA[i] * vetB[j];
            cout << r << "\n";
        }
    }*/
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
