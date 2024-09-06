/* O que o que o programa tem que ter para achar um número binário?
* while, for, if, else, else if, vetor, modulo.
* Como o programa vai rodar?
* o usuário escolhe a variável
* esse váriavel será usada na comparação
* laço de repetição for.
* como colocar em prática?

*/
#include <iostream>
#include <locale>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    int cont = 0, contR = 0, resultBin = 0,binZero = 0, binUm = 1,soma=0,contJ=1;
    for (int i = 0; i < 10; i++) {
    cout << "<3";
    }
    cout << " PROGRAMA QUE CALCULA BINÁRIO ";
    for (int i = 0; i < 10; i++) {
        cout << "<3";
    }
    cout << "\n";

    int numInteiro;
    cout << "Digite um número: ";
    cin >> numInteiro;
    cout << "\n";
    for (int i = 0;  i<numInteiro; i++) {        
        cont = pow(2,i);        
        if (cont <= numInteiro) {           
            contR++;
        }        
    }
    for (int i = contR-1; i >= 0; i--) {
        resultBin = pow(2, i);        
        if (resultBin == numInteiro) {
            cout << binUm;
            for (int j = 1; j < contR-1; j++) {
                //cout << binZero;
                cout << binZero; 
                contJ++;
                

            }
            if (contJ > 0) {
            break;
         }
        
        }
        else if(resultBin<numInteiro) {
         soma = soma + resultBin;
         if (soma > numInteiro) {
                cout << binZero;
             
                soma = soma - resultBin;
        }
         else if(soma<=numInteiro) {
             cout << binUm;
            
            }            
        }
        else {
            cout << binZero;
        }
    }
    
}
