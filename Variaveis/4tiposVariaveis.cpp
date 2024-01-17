#include <ios>
#include <clocale>
#include<iostream>
#include<iomanip>
int main(){
std::string nome = "Eliza";
int x = 10;
int y = 3;
double r = x + y;
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
    return 0;
}
/**
 * @brief Luiz Henrique
 
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

    return 0;
    
    Retorna 0 para indicar que o programa foi executado com sucesso
}
 * 
 */
