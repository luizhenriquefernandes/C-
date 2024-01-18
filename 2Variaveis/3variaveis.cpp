#include <clocale>
#include <iostream>
#include <cstdio>
int main(){
    setlocale(LC_ALL, "pt-BR.UTF-8");
    std::string nome = "Cláudio";
    std::cout<<"Olá o nome é: "<<nome <<"\n" <<std::endl;
//FAZENDO INTERPOLAÇÃO com printf
    printf("Olá o nome é %s\n",nome.c_str());
    return 0;
} 
/**
 * @brief Luiz Henrique,
 Em C++, variáveis são espaços de armazenamento nomeados que representam dados em um programa. Cada variável tem um tipo que define a natureza dos dados que ela pode armazenar. Os tipos de variáveis em C++ podem ser divididos em várias categorias, como inteiros, ponto flutuante, caracteres, booleanos e tipos compostos. Aqui estão alguns dos tipos de variáveis mais comuns em C++:

Inteiros (int):

Armazenam números inteiros.
Exemplo: int idade = 25;
Ponto Flutuante (float, double):

Armazenam números de ponto flutuante (com casas decimais).
Exemplo: float salario = 2500.50;
Caracteres (char):

Armazenam caracteres individuais.
Exemplo: char letra = 'A';
Booleanos (bool):

Armazenam valores booleanos, ou seja, true ou false.
Exemplo: bool estaChovendo = false;
Tipos Compostos:

Arrays: Coleção de elementos do mesmo tipo.
Exemplo: int numeros[5] = {1, 2, 3, 4, 5};
Strings: Sequência de caracteres.
Exemplo: std::string nome = "Alice";
Structs: Agrupamento de diferentes tipos de dados.
#####################ENTENDENDO O CÓDIGO#########################################################################################
 #include <clocale>: Inclui o cabeçalho <clocale>, que fornece funções para manipulação de localização e configurações de local, 
 como o conjunto de caracteres utilizado.

#include <iostream>: Inclui o cabeçalho <iostream>, que fornece funcionalidades de entrada/saída padrão em C++, como std::cout e std::cin.

#include <cstdio>: Inclui o cabeçalho <cstdio>, que fornece funcionalidades relacionadas à entrada/saída em estilo C, como printf.

int main() {: Inicia a definição da função principal main, que é o ponto de entrada do programa.

setlocale(LC_ALL, "pt-BR.UTF-8");: Configura a localização do programa para "pt-BR.UTF-8", permitindo a exibição de caracteres especiais, como acentos.

std::string nome = "Cláudio";: Declara uma variável nome do tipo std::string e a inicializa com o valor "Cláudio".

std::cout << "Olá o nome é: " << nome << "\n" << std::endl;: Imprime uma mensagem na saída padrão usando std::cout. A mensagem inclui o conteúdo 
da variável nome e é seguida por uma nova linha.

printf("Olá o nome é %s\n", nome.c_str());: Usa a função printf para imprimir uma mensagem formatada na saída padrão. %s é um marcador de lugar para uma 
string, e nome.c_str() fornece um ponteiro para a representação de C da string nome.

return 0;: Retorna um valor de saída 0 para indicar que o programa foi executado com sucesso.

}: Fecha a definição da função main.

Esse programa simplesmente imprime uma saudação usando std::cout e printf, incluindo o nome "Cláudio". O uso de setlocale é para garantir que 
caracteres especiais sejam tratados corretamente na saída.
 */