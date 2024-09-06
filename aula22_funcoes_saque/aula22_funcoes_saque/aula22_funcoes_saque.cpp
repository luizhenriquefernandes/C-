#include <iostream>
#include <string>
#include <locale>
#include <iomanip>
#include <ctype.h>
using std::cout; using std::cin; using std::setlocale; using std::fixed; using std::string;
using std::toupper;
//neste caso saldo entra como uma variável global

//aqui vou criar as funções.
double sacar10(double a, double b) {
    cout << "Você sacou 10,00 reais\n";    
    return a - b;
}
double sacar20(double a, double b) {
    cout << "Você sacou 20,00 reais\n";
    return a - b;
}
double sacar50(double a, double b) {
    cout << "Você sacou 50,00 reais\n";
    return a - b;
}
double sacar100(double a, double b) {

    cout << "Você sacou 50,00 reais\n";    
    return a - b;
}

void main(){    
    double saldo = 5000;
    
    setlocale(LC_ALL, "pt-BR.UTF-8");
    
    

   while (true) {
       cout << "saldo: " << saldo << "\n";
       int opcao;
       cout << "Olá tudo bem?\n" <<
           "Digie 1 para sacar R$10,00. \n" <<
           "Digie 2 para sacar R$20,00. \n" <<
           "Digie 3 para sacar R$50,00. \n" <<
           "Digie 4 para sacar R$100,00. \n";
       cin >> opcao;
       switch (opcao)
       {
       case(1):
           saldo = sacar10(saldo,10);
            cout << saldo << "\n";
           break;
           
       case(2):
          saldo = sacar20(saldo,20);
           cout << saldo << "\n";
           break;
       case(3):
           saldo = sacar50(saldo,50);
           cout << saldo << "\n";
           break;
       case(4):
           saldo = sacar100(saldo,100);
           cout << saldo << "\n";
           break;
       default:
           cout << "Muito Obrigado\n";
           break;
       }

       string sair = "";
       while (sair != "S" || sair != "N") {
           cout << "Quer sair [S/N]\n";
           cin >> sair;
           for (auto& i : sair)
           {
               sair = toupper(i);
           }
           if (sair == "S" || sair == "N") {
               break;
           }
           else {
               cout << "Digite uma opção válida, apenas S ou N (>_<)\n";
           }
       }
       if (sair == "S") {
           break;
       }

   }
}
