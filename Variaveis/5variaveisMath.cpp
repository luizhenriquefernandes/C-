#include <clocale>
#include <cmath>
#include <iomanip>
#include<iostream>
int main(){
    setlocale(LC_ALL, "pt-BR.UTF-8");
    float x = 30;
    double r = cos(x);
    std::cout<<"########Bem vindo ao Programa Utilizando o cmath###########\n"<<std::endl;  
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"O cosseno de "<<x<<" = "<<r<<"\n"<<std::endl;   
    std::cout<<"###########################################################\n"<<std::endl;
    x = 10;
    r = pow(x,2);
    std::cout<<std::fixed<<std::setprecision(0);
    std::cout<<"A elevação de "<<x<<"² = "<<r<<"\n"<<std::endl; 
    std::cout<<"###########################################################\n"<<std::endl;
    x = 16;
    r = (float)pow(x,1.0/2.0);
    std::cout<<"A raiz de "<<x<<" = "<<r<<"\n"<<std::endl; 
    std::cout<<"###########################################################\n"<<std::endl;

}