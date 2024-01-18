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
 int main(){
    setlocale(LC_ALL, "pt-BR.UTF-8");
    std::string nome;
    int idade, anoNascimento,anoSistAtual;
    std::cout<<"######################################Condicionais################################################\n"<<std::endl;
    std::cout<<"Olá digte o nome: "<<std::endl;
    getline(std::cin,nome);
    std::cout<<"Digite seu Ano de Nascimento"<<std::endl;
    std::cin>>anoNascimento;
    std::time_t tempoAtual = std:: time(nullptr);
    std::tm* tempoLocal = std::localtime(&tempoAtual);
    char anoAtual[80];
    char anoSistema[80];
    std::strftime(anoSistema,sizeof(anoSistema),"%Y",tempoLocal);
    std::strftime(anoAtual,sizeof(anoAtual),"%d/%m/%Y",tempoLocal);
    std::cout<<"Ano do Sistema: "<<anoAtual<<"\n"<<std::endl;
    std::cout<<"Data do Sistema: "<<anoSistema<<"\n"<<std::endl;
    anoSistAtual = std::stoi(anoSistema);
    idade = anoSistAtual - anoNascimento;
    std::cout<<"Sr@. "<<nome<<" A sua idade sem considerar mês e dia de nascimento é: "<<idade<<" anos!\n"<<std::endl;
    if(idade < 18){
        std::cout<<"Sr@. "<<nome<<" você é menor de idade e não pode voltar\n"<<std::endl;
    }else{
        std::cout<<"Sr@."<<nome<<" você é maior de idade e pode votar"<<std::endl;
    }
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
  * 
  */