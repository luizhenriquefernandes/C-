#include <clocale>
#include<iostream>
#include <string>
    int main(){
    setlocale(LC_ALL, "pt-BR.UTF-8");
    std::string xS;
    std::cout<<"Digite o número"<<std::endl;
    std::cin>>xS;
    int x = std::stoi(xS);
    if(x%2 == 0){
        std::cout<<x<<" É par"<<std::endl;
    }else{
        std::cout<<x<<" É ímpar"<<std::endl;
    }
    return 0;
}