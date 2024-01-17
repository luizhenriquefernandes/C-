#include <iostream>//chamar a biblioteca iostream para isso
int main(){
    std::cout<<"Hello World"<<std::endl;
    return 0;
}
/**
 * @brief Luiz Henrique
 
Em C++, a função main() é a função principal de um programa. Ela é responsável por iniciar a execução do programa e retornar um valor para o sistema operacional.

O valor retornado pela função main() indica se o programa foi executado com sucesso ou não. Um valor de retorno de 0 indica que o programa foi executado com sucesso, 
enquanto um valor de retorno diferente de 0 indica que o programa encontrou um erro.

O valor de retorno da função main() é um inteiro. O valor 0 é geralmente usado para indicar que o programa foi executado com sucesso. No entanto, outros valores também 
podem ser usados para indicar diferentes tipos de erros.

Por exemplo, um valor de retorno de 1 pode ser usado para indicar que o programa encontrou um erro de sintaxe, um valor de retorno de 2 pode ser usado para indicar que o 
programa encontrou um erro de execução, e assim por diante.
Aqui estão alguns exemplos de como usar a biblioteca iostream:
O operador << é usado no cout porque é um operador de fluxo. Os operadores de fluxo são usados para inserir ou extrair dados de um fluxo. No caso do cout, o fluxo é a saída padrão.

O operador << é chamado de operador de inserção. Ele é usado para inserir dados no fluxo. No caso do cout, os dados inseridos são impressos na tela.

A escolha do operador << para o cout foi uma decisão arbitrária dos criadores da linguagem C++. Eles poderiam ter escolhido qualquer outro operador, mas o operador << parecia ser uma boa escolha porque é visualmente intuitivo.

Aqui está uma analogia que pode ajudar a entender por que o operador << é usado no cout:

Imagine que você tem um balde e você quer colocar água nele. Você pode usar uma colher para colocar a água no balde. A colher é o operador de inserção.

No caso do cout, o balde é a saída padrão e a água são os dados que você quer imprimir na tela. O operador << é a colher que você usa para inserir os dados na saída padrão.
 * 
 */