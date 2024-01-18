#include <clocale>
#include <cstdio>
//incluir oiostream
#include<iostream>
int main(){
    setlocale(LC_ALL, "pt-BR.UTF-8");//setlocale permite usar o padrão UTF-8
    //aqui não estamos usando o iostream
    printf("Olá Mundo\n");//ele não imprime os acentos então devemos fazer um set locale
    //agora iremos usar o stdiostream e basta icluir o iostream.
    std::cout<<"Olá Mundo\n"<<std::endl;
    return 0;      
}

/**
 * @brief Luiz Henrique Fernandes
 Instruções

 Cstio é um acrônimo para "C Standard Input/Output". Em português, isso significa "Entrada/Saída Padrão C".

A biblioteca cstio é uma biblioteca padrão da linguagem C que fornece funções para lidar com entrada e saída. Ela é similar à biblioteca iostream da linguagem C++, mas não é tão abrangente.

A biblioteca cstio inclui funções para ler dados do teclado, imprimir dados na tela, abrir e fechar arquivos, etc.


 iostream é um acrônimo para "input/output stream". Em português, isso significa "fluxo de entrada/saída".

A biblioteca iostream fornece classes e funções para lidar com entrada e saída em C++. Ela é uma biblioteca padrão, o que significa que está disponível em todos os compiladores C++.

A biblioteca iostream inclui classes para representar fluxos de entrada e saída, como std::cin e std::cout. Essas classes fornecem métodos para ler dados do teclado e imprimir dados na tela, respectivamente.

A biblioteca iostream também inclui funções para realizar operações de entrada e saída, como std::getline() e std::printf().


Aqui estão alguns exemplos de como usar a biblioteca iostream:
O operador << é usado no cout porque é um operador de fluxo. Os operadores de fluxo são usados para inserir ou extrair dados de um fluxo. No caso do cout, o fluxo é a saída padrão.

O operador << é chamado de operador de inserção. Ele é usado para inserir dados no fluxo. No caso do cout, os dados inseridos são impressos na tela.

A escolha do operador << para o cout foi uma decisão arbitrária dos criadores da linguagem C++. Eles poderiam ter escolhido qualquer outro operador, mas o operador << parecia ser uma boa escolha porque é visualmente intuitivo.

Aqui está uma analogia que pode ajudar a entender por que o operador << é usado no cout:

Imagine que você tem um balde e você quer colocar água nele. Você pode usar uma colher para colocar a água no balde. A colher é o operador de inserção.

No caso do cout, o balde é a saída padrão e a água são os dados que você quer imprimir na tela. O operador << é a colher que você usa para inserir os dados na saída padrão.
 * 
 */