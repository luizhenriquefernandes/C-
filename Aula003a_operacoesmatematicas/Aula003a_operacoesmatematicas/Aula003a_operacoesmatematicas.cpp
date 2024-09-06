// Calculadora versão 1.0
// Luiz Henrique Data 20/2/2024
// Exercicio: Os alunos deverão fazer uma calculadora com variaveis que já tenham valores inseridos dentro delas
// os cálculos realizados: soma, divisão, subtração, multiplicação, módulo, raiz quadrada,cúbica, sétima, exponenciação.
// casas decimais deverão ser arredondadas para duas casas.
//
#include <iostream>
#include <string>
#include <locale>
#include <math.h>
#include <iomanip>
using std::cout; using std::string; using std::endl; using std::fixed; using std::setprecision;
int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    cout << "##################PROGRAMA DE MATEMÁTICA#################\n";
    double num1 = 10;
    double num2 = 3;
    double div = num1 / num2;
    cout << "A divisão de " << num1 << " / " << num2 << " = " << fixed << setprecision(2) << div << "\n";
    int x = 10;
    int y = 3;
    int soma = x + y;
    cout << "A soma de " << x << " + " << y << " = " << soma << "\n";
    x = 10;
    y = 3;
    int modulo = x % y;
    cout << "O módulo de " << x << " % " << y << " = " << modulo<<"\n";
    double a = 128;
    double b = 7;
    double exponenciacao = pow(a, 1/b);
    cout << "A raiz de " << a << " raiz " << b << " = " << exponenciacao << "\n";
    double raiz = pow(a, 1/b);
    cout << "A raiz de " << a << " raiz " << b << " = " << raiz << "\n";
    raiz = sqrt(a);
    cout << "A raiz de " << a << " raiz " << b << " = " << raiz << "\n";
    
    cout << "##########################FIM############################\n";
    return 0;
    
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
