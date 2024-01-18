/**
 * @file 6leituraVariavel.cpp
 * @author Luiz Henrique
 * @brief 
 * @version 0.1
 * @date 2024-01-18 * 
 * @copyright Copyright (c) 2024
 Em C++, a leitura de uma variável (entrada de dados) geralmente é feita por meio do objeto cin, 
 que faz parte da biblioteca de entrada/saída padrão (iostream). A leitura de uma variável envolve 
 o uso do operador de extração (>>) em conjunto com o nome da variável que receberá o valor.
 * Exmplo fazer o usuário digitar um nome e fazer uma operação com dois números matemáticos.
 */
#include <clocale>
#include<iostream>
#include<string>
int main(){
    //deixando a linguagem em utf8
    setlocale(LC_ALL, "pt-BR.UTF-8");
    //declarção de variáveis globais
    std::string nome;
    int num1;
    int num2;
    //início do código
    std::cout<<"#############################################\n"<<std::endl;
    std::cout<<"Bem Vindo ao Programa de Leitura de Variáveis\n"<<std::endl;
    std::cout<<"Olá Digite seu nome: \n"<<std::endl;    
    //std::cin>>nome;
    //incluir a bilblioteca string
    std::getline(std::cin,nome);
    std::cout<<"Olá "<<nome<< " Seja bem vindo!\n"<<std::endl;
    std::cout<<"Digite o número 1: "<<std::endl;
    std::cin>>num1;
    std::cout<<"O número digitado foi: "<<num1<<" ."<<std::endl;
    std::cout<<"Digite o número 2: "<<std::endl;
    std::cin>>num2;
    std::cout<<"O número digitado foi: "<<num2<<" ."<<std::endl;
    int soma = num1+num2;
    std::cout<<"A soma "<<num1<<" + "<<" num2"<<" = "<<soma<<" ."<<std::endl;
    std::cout<<"#############################################\n"<<std::endl;
}
/**
 * @brief 
 Problemas do cin
 Se você estiver usando std::cin para ler uma string e perceber que apenas a primeira parte do nome composto é lida, 
 é possível que o problema esteja relacionado ao comportamento padrão de std::cin com espaços em branco.

O operador >> de std::cin para strings lê até encontrar um espaço em branco, tabulação ou uma quebra de linha. 
Portanto, se você digitar "Luiz Alberto", apenas "Luiz" será atribuído à variável nome. Para ler toda a linha, 
ncluindo espaços em branco, você pode usar a função std::getline.
 ######################################################################################################################
 Setlocale para UTF-8:

O código usa setlocale para definir a localidade como "pt-BR.UTF-8", o que é útil para suportar caracteres 
especiais em português.
Declaração de Variáveis:

Variáveis globais são declaradas para armazenar o nome (std::string nome), o primeiro número (int num1), 
e o segundo número (int num2).
Interação com o Usuário:

Uma mensagem de boas-vindas é exibida, e o programa solicita ao usuário que digite seu nome. A função 
std::getline é usada para ler uma linha completa, incluindo espaços.

Em seguida, o programa solicita que o usuário digite dois números. Os números são lidos usando std::cin.

Operações Matemáticas:

Os números digitados são somados, e o resultado é exibido na tela.
Exibição de Resultados:

O programa exibe mensagens formatadas na tela, incluindo o nome do usuário, os números digitados e a soma.
 */