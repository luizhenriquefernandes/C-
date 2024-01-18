/**
 * @file 8condicionais.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */
    #include <clocale>
    #include<iostream>
    #include <string>
    int main(){
        setlocale(LC_ALL, "pt-BR.UTF-8");
        std::string x;
        std::cout<<"Digite o valor de x "<<std::endl;
        std::cin>>x;
        int xI = std::stoi(x);
        x = std::to_string(xI);
        //neste passo uma var string é lida e depois é convertida para int, 
        //faz a comparação numérica e depois é convertida para str novamente.
    if(xI==10){
        std::cout<<"x é igual a 10 \nx = "<<x<<std::endl;
    }else{
        std::cout<<"x é diferente de 10 \nx = "<<x<<std::endl;
        }
    return 0;
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