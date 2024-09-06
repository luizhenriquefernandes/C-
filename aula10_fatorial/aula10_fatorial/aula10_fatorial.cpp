#include <iostream>
#include <locale>
using std::cout; using std::cin; using std::setlocale;
void main(){
    setlocale(LC_ALL, "pt-BR.UTF-8");
    int fatorial = 0; int resultado = 1; int i = 0;
    cout << "Cálculo de Fatorial\nDigite o número fatorial: ";
    cin >> fatorial;
    cout << fatorial << "!\n";
    if (fatorial == 0) {
        resultado = 1;
        cout << "O resultado é: " << resultado << "\n";
    }
    else {       
        while (i < fatorial) {
            i++;
            resultado = (resultado * i);
            
        }
        cout << "O resultado é = " << resultado << "\n";
    }    
}
