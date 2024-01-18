#include <ios>
#include <clocale>
#include<iostream>
#include<iomanip>
int main(){
std::string nome = "Eliza";
int x = 10;
int y = 3;
double r = x + y;
bool validacao = true;
setlocale(LC_ALL, "pt-BR.UTF-8");
std::cout<<"Olá "<<nome<<"\n"<<std::endl;
std::cout<<"A soma de "<<x<<" + "<<y<<" = "<<r<<"\n"<<std::endl;
r = x - y;
std::cout<<"A subtração de "<<x<<" - "<<y<<" = "<<r<<"\n"<<std::endl;
r = x * y;
std::cout<<"A multiplicação de "<<x<<" * "<<y<<" = "<<r<<"\n"<<std::endl;
r = (float)x / (float)y;
std::cout<<std::fixed<<std::setprecision(2);
std::cout<<"A divisão de "<<x<<" / "<<y<<" = "<<r<<"\n"<<std::endl;
r = x % 2;
std::cout<<std::fixed<<std::setprecision(0);
std::cout<<"O módulo de "<<x<<" % "<<"2"<<" = "<<r<<"\n"<<std::endl;
std::cout<<"Validação é: "<<validacao<<"!"<<std::endl;
    return 0;
}
/**
 * @brief Luiz Henrique
 Entendendo o código
 
    Inclui o cabeçalho para manipulação de entrada/saída em C++

#include <ios>

    Inclui o cabeçalho para manipulação de localização e configurações de local

#include <clocale>

    Inclui o cabeçalho para entrada/saída em C++

#include <iostream>

    Inclui o cabeçalho para manipulação de formatos de saída

#include <iomanip>

int main() {
    
        Inicializa uma variável de string chamada 'nome' com "Eliza"
    
    std::string nome = "Eliza";    
        Inicializa uma variável inteira chamada 'x' com 10
    
    int x = 10;
    
        Inicializa uma variável inteira chamada 'y' com 3
    
    int y = 3;
    
        Inicializa uma variável double chamada 'r' com a soma de 'x' e 'y'
    
    double r = x + y;
    
        Configura a localização do programa para "pt-BR.UTF-8"
    
    setlocale(LC_ALL, "pt-BR.UTF-8");
    
        Imprime uma saudação usando 'std::cout'
    
    std::cout << "Olá " << nome << "\n" << std::endl;
    
        Imprime a soma de 'x' e 'y'
    
    std::cout << "A soma de " << x << " + " << y << " = " << r << "\n" << std::endl;
    
        Atualiza 'r' com a subtração de 'x' e 'y'
    
    r = x - y;
    
        Imprime a subtração de 'x' e 'y'    
    std::cout << "A subtração de " << x << " - " << y << " = " << r << "\n" << std::endl;

    
        Atualiza 'r' com o produto de 'x' e 'y'    
    r = x * y;
    
        Imprime a multiplicação de 'x' e 'y'
    
    std::cout << "A multiplicação de " << x << " * " << y << " = " << r << "\n" << std::endl;

    
        Atualiza 'r' com a divisão de 'x' por 'y'
    
         
    r = (float)x / (float)y;  
    Atualiza 'r' com o resultado da divisão de 'x' por 'y' convertendo ambos para float

    std::cout << std::fixed << std::setprecision(2); 

    Configura a notação fixa e o número de casas decimais para 'std::cout'

    std::cout << "A divisão de " << x << " / " << y << " = " << r << "\n" << std::endl;  

    Imprime a divisão de 'x' por 'y' 

    r = x % 2;
    faz o cálculo de módulo, ele trabalha achando o resto da divisão importante para cálculos de par/ímpar
    binários, números primos e outras aplicações.
    std::cout<<std::fixed<<std::setprecision(0);
    std::cout<<"O módulo de "<<x<<" % "<<"2"<<" = "<<r<<"\n"<<std::endl; 
    imprime o resultado do resto da divisão de x por 2 se o resultado for 0 significa que é par
    se o resultado for 1 significa que o número é ímpar

    return 0;
    
    Retorna 0 para indicar que o programa foi executado com sucesso
}

##################################################Tipos de Variáveis#############################################
Em C++, os tipos de variáveis são usados para definir o tipo de dados que uma variável pode armazenar. Cada tipo 
de variável possui características específicas, como o tamanho em memória e o intervalo de valores que ela pode 
armazenar. Aqui estão alguns dos principais tipos de variáveis em C++:

Tipos Inteiros:
int: Representa números inteiros com sinal. Normalmente, ocupa 4 bytes.
int idade = 25;
short: Representa inteiros curtos, com menos bits que int.
short distancia = 100;
long: Representa inteiros longos, geralmente ocupando mais bits que int.
long populacao = 1000000;
long long: Representa inteiros longos com mais bits que long.
long long saldo = 1000000000;
Tipos Ponto Flutuante:
float: Representa números de ponto flutuante de precisão simples.
float altura = 1.75;
double: Representa números de ponto flutuante de dupla precisão. Geralmente, tem mais precisão que float.
double pi = 3.14159265358979;
long double: Representa números de ponto flutuante de longa precisão.
long double valor = 12345.6789;
Caracteres:
char: Representa um único caractere.
char letra = 'A';
wchar_t: Representa um caractere wide (largura maior), usado em conjuntos de caracteres estendidos.
wchar_t caractere = L'Ç';
Booleanos:
bool: Representa valores booleanos, ou seja, true (verdadeiro) ou false (falso).
bool status = true;
Strings:
std::string: Representa uma sequência de caracteres.
std::string nome = "Alice";
Ponteiros:
Tipo de ponteiro: Representa o endereço de memória de outra variável.
int numero = 42;
int *ponteiro = &numero; // ponteiro contém o endereço de 'numero'
Arrays:
Tipo de array: Representa uma coleção de elementos do mesmo tipo.
int numeros[5] = {1, 2, 3, 4, 5};
################################Operadores Matemáticos Conceito ###################################################
Os operadores matemáticos desempenham um papel fundamental na lógica de programação, fornecendo meios para realizar 
cálculos e manipulações em valores numéricos. Aqui estão algumas razões pelas quais os operadores matemáticos são 
importantes em lógica de programação:

Realização de Cálculos: Os operadores matemáticos permitem a execução de cálculos essenciais, como adição, subtração,
 multiplicação e divisão. Essas operações são fundamentais em muitos contextos, desde cálculos simples até algoritmos 
 mais complexos.

Manipulação de Dados: Ao usar operadores matemáticos, é possível manipular e transformar dados numéricos de maneira 
eficiente. Isso é crucial para realizar tarefas como conversões de unidades, ajustes de escala e normalização de valores.

Controle de Fluxo: Operadores matemáticos são frequentemente usados em expressões condicionais para controle de fluxo. 
Por exemplo, podem ser utilizados em instruções "if" para comparar valores e tomar decisões com base nas condições matemáticas.

Iterações e Contagens: Em estruturas de repetição (loops), os operadores matemáticos são frequentemente usados para 
controlar a iteração sobre um conjunto de valores ou para realizar contagens. Isso é crucial para a execução eficiente 
de tarefas repetitivas.

Manipulação de Arrays e Estruturas de Dados: Ao trabalhar com arrays e estruturas de dados, os operadores matemáticos 
são usados para acessar elementos específicos, calcular índices e realizar operações em conjuntos de dados.

Modelagem Matemática: Em muitos casos, programas são desenvolvidos para modelar sistemas do mundo real. Os operadores 
matemáticos desempenham um papel vital na tradução de equações matemáticas em código de programação, permitindo simulações e análises.

Desenvolvimento de Algoritmos: Algoritmos frequentemente envolvem cálculos e manipulações de dados. Os operadores 
matemáticos são essenciais para a implementação eficaz de algoritmos em diversas áreas, como ordenação, busca e processamento de dados.

Em resumo, os operadores matemáticos são ferramentas essenciais na lógica de programação, possibilitando o desenvolvimento de 
algoritmos eficientes, expressões condicionais e manipulação de dados numéricos. Eles desempenham um papel crucial em várias 
fases do processo de desenvolvimento de software, contribuindo para a funcionalidade e eficácia dos programas.
 * 
 
 */
