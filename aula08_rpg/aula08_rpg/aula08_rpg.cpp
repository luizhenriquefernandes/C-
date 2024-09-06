/*SENAI NADIR DIAS DE FIGUEIREDO
@AUTHOR LUIZ FERNANDES
DATA 07/03/24 RPG - DANO
Zyn
ataque
1 dado de 12 lados mais 2 ataque
1 dado de 20
Skuffinho
resistência 15
pv 6
usar o random
numeros randomicos
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <locale>
using std::cout; using std::cin; using std::setlocale; using std::srand; using std::rand; 
using std::string;
void main()
{
	setlocale(LC_ALL, "pt-BR.UTF-8");
	//declarando variáveis
	string nomePlayer = "Zyn";
	string nomeEnemy = "Skuffinho";
	int pontosVidaEnemy = 6; int resistenciaEnemy = 15;	int dado20;	int dado12;	int ataque;
	//fazendo o random
	srand(time(0)); // srand é iniciado com time agora eu posso usar o rand
	dado20 = rand() % 20 + 1;//agora o dado tem 20 lados
	//O dado esta funcionando
	//agora vamos fazer a validação do ataque
	if (dado20 >= resistenciaEnemy) {
		cout <<"\nO ataque superou a resistência " << dado20 << "\nO ataque foi bem sucedido\n";
		//agora aqui não cabe um else if cabe if podemos fazer um aninhamento de if
		dado12 = rand() % 12 + 1;
		ataque = dado12 + 2;		
		pontosVidaEnemy = pontosVidaEnemy - ataque;
		cout << "\nO ataque foi de " << dado12 << "\nO total do dano foi de: " << ataque << "\n" <<
			"Skuffinho ficou com: " << pontosVidaEnemy << " pontos de vida!!!\n";
		if (pontosVidaEnemy <= 0) {
			cout << "Zyn apontou seu arco e ao atirar, a flecha saiu em um vórtex de vento\n" <<
				"a flecha de mitril tranpassou por entre o seu crânio que foi rachado e\n" <<
				"Skuffinho morreu\n";
		}
		else {
			cout << "Skuffinho ferido mas com vida, correu para a floresta com um pedacito de vida";
		}
	}
	else {
		cout <<"\nO taque foi "<<dado20<< "\nSkuffinho desviou o ataque e... pobre Zyn ele te comeu!!!";
	}
}
