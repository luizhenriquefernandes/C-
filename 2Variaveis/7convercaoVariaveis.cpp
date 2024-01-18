/**
 * @file 7convercaoVariaveis.cpp
 * @author Luiz Henrique
 * @brief 
 * @version 0.1
 * @date 2024-01-18
 * 
 * @copyright Copyright (c) 2024

 * 
 */
    #include <clocale>
    #include <iomanip>
    #include<iostream>
    #include<string>    
    int main(){
        setlocale(LC_ALL, "pt-BR.UTF-8");
        std::cout<<std::fixed<<std::setprecision(2);
        std:: string produto;
        std::cout<<"Digite o nomedo produto: "<<std::endl;
        std::getline(std::cin,produto);
        std::cout<<"O nome é "<<produto<<" .\n";
        std::string preco;
        std::cout<<"Digite o preço R$ "<<std::endl;
        std::cin>>preco;
        std::cout<<preco<<"\n"<<std::endl;
        std::cout<<"Digite o Total de Dinheiro R$"<<std::endl;
        std::string total;
        std::cin>>total;       
        float precoF = std::stof(preco);
        float totalF = std::stof(total);
        float troco = totalF - precoF;        
        std::cout<<"O Total em Dinheiro é R$ "<<totalF<<" O preco é R$ "<<precoF<<" Troco R$ "<<troco<<".\n"<<std::endl;
        return 0;
    }
 /**
  * @brief 
  ##############################################Conversão de Variáveis###########################################
  Em C++, a conversão de variáveis refere-se à transformação de um valor de um tipo de dado para outro. 
  Existem dois tipos principais de conversões: conversões implícitas e conversões explícitas.

Conversão Implícita:

Também conhecida como coerção, é realizada automaticamente pelo compilador quando há uma compatibilidade 
entre os tipos de dados envolvidos. Por exemplo, se você atribuir um número inteiro a uma variável de ponto 
flutuante, o C++ realizará a conversão implicitamente.
cpp
Copy code
int numeroInteiro = 5;
float numeroFlutuante = numeroInteiro; // Conversão implícita
Conversão Explícita:

Também chamada de "cast", é uma operação na qual o programador especifica explicitamente a conversão de um 
tipo para outro. Existem diferentes tipos de casts em C++:

C-Style Cast:

cpp
Copy code
float numeroFlutuante = 3.14;
int numeroInteiro = (int)numeroFlutuante; // Conversão explícita usando C-Style Cast
Static Cast:

cpp
Copy code
double numeroDuplo = 7.89;
int numeroInteiro = static_cast<int>(numeroDuplo); // Conversão explícita usando static_cast
Dynamic Cast:

Usado em programação orientada a objetos para realizar downcasting entre classes relacionadas.
Reinterpret Cast:

Geralmente utilizado para converter ponteiros e referências entre tipos não relacionados.
Const Cast:

Usado para adicionar ou remover a constância de uma variável.
cpp
Copy code
  const int numeroConstante = 42;
  int* ponteiroNaoConstante = const_cast<int*>(&numeroConstante); // Removendo constância
As conversões explícitas são úteis quando você deseja garantir um controle mais preciso sobre a transformação 
de tipos ou quando o compilador não realiza automaticamente a conversão desejada.

É importante usar conversões de maneira cuidadosa para evitar perda de dados ou comportamentos inesperados em 
seu código. Certifique-se de compreender as implicações de cada tipo de cast e utilize-os conforme necessário 
para garantir a segurança e a corretude do seu programa.

#############################################FIM#Conversão de Variáveis########################################
  * 
  */