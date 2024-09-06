// funcoes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <locale>
using std::cout; using std::cin; using std::setlocale;
//fazer função fora da função principal
int nome(int adolfo, int ronaldo) {
    return adolfo * ronaldo;
}
int somaLucas(int a, int b)
{
    return a + b;
}
int lopalPow(int base, int expoente){
    int r = base, c = 0;
    if (expoente == 0) {
        return r = 1;
    }else{
        for (int i = 1; i <= expoente; i++) {
            r = base * r;
        }
        return r;
    }
}
void main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    int a = 10;
    int b = 2;
    cout << "Calculando Exponenciação\n";
    cout << lopalPow(2,0);
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
