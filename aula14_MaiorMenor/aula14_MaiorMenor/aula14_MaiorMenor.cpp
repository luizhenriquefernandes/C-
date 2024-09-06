#include <iostream>
#include <locale>
#include <iomanip>
using std::fixed;
using std::cin; using std::cout; using std::setlocale; using std::setprecision;
void main(){
    std::cout << "Maior Menor\n";
    setlocale(LC_ALL, "pt-BR.UTF-8");
    float peso [5],pesoFrasco[5],soma = 0,media=0, maior = 0, menor = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Digite o peso: ";
        cin >> peso[i];
        cout<<"\n" <<fixed<< setprecision(2)<<peso[i] << "\n";
        if (i == 0) {
            maior = menor = peso[i];            
           cout <<"maior: " << maior << "\n"<<"menor: " << menor << "\n";                
        } 
        if (peso[i] < menor) {
            menor = peso[i];
        }
        if (peso[i] > maior) {
            maior = peso[i];
        }

    }
    cout << "O Peso menor é: " << menor << " O peso maior é: " << maior << "\n";
    for (int i = 0; i < 5; i++) {
        cout << "Digite o peso em ml\n";
        cin >> pesoFrasco[i];
        soma = soma + pesoFrasco[i];
    }
    media = soma / (sizeof(pesoFrasco)/sizeof(int));
    cout <<"\nA média é: " << media << "ml\n";
 }
