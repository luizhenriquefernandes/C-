/**
 * @file condicionais.
 * @author Luiz Henrique
 * @brief 
 * @version 0.1
 * @date 2024-01-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
 #include <clocale>
 #include<iostream>
 #include<string>
 #include<ctime>
#include <time.h>
 // Incluindo as bibliotecas necessárias para manipulação de localidade, entrada/saída, strings e tempo
 int main(){
    setlocale(LC_ALL, "pt-BR.UTF-8");
    // Configurando a localidade para português do Brasil com suporte a UTF-8
    std::string nome;
    int idade, anoNascimento,anoSistAtual;
    // Declarando variáveis para armazenar o nome, idade, ano de nascimento e ano atual do sistema
    std::cout<<"######################################Condicionais################################################\n"<<std::endl;
    std::cout<<"Olá digte o nome: "<<std::endl;
    getline(std::cin,nome);
    // Solicitando e lendo o nome do usuário
    std::cout<<"Digite seu Ano de Nascimento"<<std::endl;
    std::cin>>anoNascimento;
    // Solicitando e lendo o ano de nascimento do usuário
    // std::time_t tempoAtual = std:: time(nullptr);
    // std::tm* tempoLocal = std::localtime(&tempoAtual);
    // Obtendo o tempo atual do sistema e convertendo para a representação de tempo local
    std::time_t tempoAtual;
    std::tm tempoLocal;

    if (std::time(&tempoAtual) == -1) {
        // Tratar erro ao obter o tempo atual
        std::cerr << "Erro ao obter o tempo atual." << std::endl;
        return 1; // Saída com erro
    }

    if (localtime_s(&tempoLocal, &tempoAtual) != 0) {
        // Tratar erro ao converter o tempo local
        std::cerr << "Erro ao converter o tempo local." << std::endl;
        return 1; // Saída com erro
    }

    char anoAtual[80];
    char anoSistema[80];

    if (strftime(anoSistema, sizeof(anoSistema), "%Y", &tempoLocal) == 0) {
        // Tratar erro ao formatar o ano do sistema
        std::cerr << "Erro ao formatar o ano do sistema." << std::endl;
        return 1; // Saída com erro
    }

    if (strftime(anoAtual, sizeof(anoAtual), "%d/%m/%Y", &tempoLocal) == 0) {
        // Tratar erro ao formatar o ano atual
        std::cerr << "Erro ao formatar o ano atual." << std::endl;
        return 1; // Saída com erro
    }
    /**
     * @brief 
     localtime_s(&tempoLocal, &tempoAtual): Esta função converte o tempo atual (tempoAtual) para uma estrutura tm representando 
     o tempo local (tempoLocal). O _s no final indica que esta é uma versão segura (safe) da função, projetada para evitar 
     potenciais problemas de segurança.

!= 0: A função localtime_s retorna 0 em caso de sucesso. Portanto, esta condição verifica se a chamada à função foi bem-sucedida. 
Se o resultado for diferente de zero, significa que ocorreu um erro.

// Tratar erro ao converter o tempo local: Este comentário indica que o próximo bloco de código será dedicado ao tratamento de 
erros que ocorram durante a conversão do tempo local.

std::cerr << "Erro ao converter o tempo local." << std::endl;: Esta linha imprime uma mensagem de erro indicando que houve um 
problema ao converter o tempo local. A mensagem é enviada para a saída de erro padrão (std::cerr), que é geralmente usada para mensagens de erro.

return 1; // Saída com erro: Este comando encerra a execução do programa, retornando 1 como código de saída para indicar que 
ocorreu um erro durante a execução.

Resumindo, esta parte do código está lidando com possíveis erros que podem ocorrer durante a conversão do tempo local, imprimindo 
mensagens informativas e encerrando o programa com um código de saída que indica erro.






     * 
     */

    
    // Exibindo o ano atual e a data do sistema
    anoSistAtual = std::stoi(anoSistema);
    // Convertendo a string do ano do sistema para inteiro
    idade = anoSistAtual - anoNascimento;
    std::cout<<"Sr@. "<<nome<<" A sua idade sem considerar mês e dia de nascimento é: "<<idade<<" anos!\n"<<std::endl;
    if(idade < 18){
        std::cout<<"Sr@. "<<nome<<" você é menor de idade e não pode voltar\n"<<std::endl;
    }else{
        std::cout<<"Sr@."<<nome<<" você é maior de idade e pode votar"<<std::endl;
    }
    // Verificando se o usuário é maior ou menor de idade e exibindo a mensagem correspondente
    std::cout<<"######################################FIM################################################\n"<<std::endl;
 }
 /**
  * @brief 
  #########################################Condicionais###############################################
  Em C++, condicionais são estruturas de controle de fluxo que permitem que um programa tome decisões 
  com base em condições específicas. Essas estruturas são fundamentais para controlar o fluxo de execução 
  do programa, permitindo a execução de diferentes blocos de código dependendo se uma determinada condição 
  é verdadeira ou falsa. As principais estruturas condicionais em C++ são:
if:
O if é utilizado para executar um bloco de código somente se a condição especificada for verdadeira.


int idade = 20;
if (idade >= 18) {
    std::cout << "É maior de idade." << std::endl;
}
else:
O else é combinado com if e é usado para executar um bloco de código caso a condição no if seja falsa.


int idade = 15;
if (idade >= 18) {
    std::cout << "É maior de idade." << std::endl;
} else {
    std::cout << "É menor de idade." << std::endl;
}
else if:
O else if é usado para verificar múltiplas condições encadeadas. Ele é útil quando você tem mais de duas 
possibilidades.


int nota = 75;
if (nota >= 90) {
    std::cout << "Aprovado com nota A." << std::endl;
} else if (nota >= 80) {
    std::cout << "Aprovado com nota B." << std::endl;
} else if (nota >= 70) {
    std::cout << "Aprovado com nota C." << std::endl;
} else {
    std::cout << "Reprovado." << std::endl;
}
switch:
A instrução switch é usada para realizar seleção múltipla com base no valor de uma expressão.


int opcao = 2;
switch (opcao) {
    case 1:
        std::cout << "Escolheu a opção 1." << std::endl;
        break;
    case 2:
        std::cout << "Escolheu a opção 2." << std::endl;
        break;
    case 3:
        std::cout << "Escolheu a opção 3." << std::endl;
        break;
    default:
        std::cout << "Opção inválida." << std::endl;
}
Essas estruturas condicionais permitem que o código tome decisões dinamicamente com base nas condições 
especificadas. Elas são cruciais para tornar os programas mais flexíveis e adaptáveis a diferentes situações.
###############################################################################################################
#############################################Operadores Relacionais############################################
Em C++, os operadores relacionais são utilizados para realizar comparações entre valores e produzir resultados 
booleanos (verdadeiro ou falso) que ajudam a controlar o fluxo do programa. Aqui estão os principais operadores 
relacionais em C++:

Igualdade (==):

Verifica se dois valores são iguais.


int a = 5;
int b = 7;
bool resultado = (a == b);  // Resultado é falso
Desigualdade (!=):

Verifica se dois valores são diferentes.


int x = 10;
int y = 10;
bool resultado = (x != y);  // Resultado é falso
Maior que (>):

Verifica se o valor à esquerda é maior que o valor à direita.


int numero1 = 15;
int numero2 = 10;
bool resultado = (numero1 > numero2);  // Resultado é verdadeiro
Menor que (<):

Verifica se o valor à esquerda é menor que o valor à direita.


int a = 8;
int b = 12;
bool resultado = (a < b);  // Resultado é verdadeiro
Maior ou igual (>=):

Verifica se o valor à esquerda é maior ou igual ao valor à direita.


int x = 10;
int y = 10;
bool resultado = (x >= y);  // Resultado é verdadeiro
Menor ou igual (<=):

Verifica se o valor à esquerda é menor ou igual ao valor à direita.


int numero1 = 20;
int numero2 = 25;
bool resultado = (numero1 <= numero2);  // Resultado é verdadeiro
Esses operadores relacionais são frequentemente utilizados em instruções condicionais 
(como if, else if) para tomar decisões com base em comparações de valores. O resultado de uma operação relacional 
é sempre um valor booleano (true ou false).
##################################################Conversão de Variáveis####################################################################
A linha de código anoSistAtual = std::stoi(anoSistema); está realizando a conversão de uma variável do tipo std::string para uma variável
 do tipo int. Vamos entender cada parte:

std::stoi: Esta é uma função da biblioteca padrão de C++ (<string>) que converte uma string para um inteiro (int). O nome stoi significa 
"string to integer". Esta função é particularmente útil quando você tem uma string que representa um valor numérico e deseja trabalhar 
com esse valor como um número inteiro.

anoSistema: É a variável que contém a string que você deseja converter. Neste caso, parece que anoSistema representa um ano em formato de
string.

anoSistAtual: É a variável do tipo int para a qual o resultado da conversão será armazenado. Ou seja, depois dessa linha, anoSistAtual 
conterá o valor numérico equivalente ao conteúdo de anoSistema.

A conversão funciona assumindo que o conteúdo de anoSistema é uma representação válida de um número inteiro. Se o conteúdo não for um 
número ou se houver caracteres adicionais na string que não representam um número, a função std::stoi pode lançar uma exceção 
(std::invalid_argument ou std::out_of_range). Portanto, ao usar std::stoi, é uma boa prática garantir que a string seja válida 
para evitar exceções não desejadas.

Se a conversão for bem-sucedida, anoSistAtual conterá o valor inteiro equivalente à representação numérica contida em anoSistema.
 Isso é útil quando você precisa realizar cálculos ou comparações numéricas com o ano atual do sistema.
  */
