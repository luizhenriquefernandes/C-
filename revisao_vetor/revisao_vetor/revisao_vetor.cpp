#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::vector;
int indices(vector<int>a, vector<int>b) {
	int r = 0;
	for (auto& i : a)
	{
		for (auto& j : b) {
		 r = i * j;
		 cout<<r<<"\n";		 
		}		
	}
	return 0;	
}

int somaVetorInterno(vector<int> a) {
	int soma = 0;
	for (auto& i : a) {
		soma = soma + i;		
	}
	return soma;
}
double mediaVetor(vector<double> a) {
	double soma = 0, media = 0;
	for (auto& i : a)
	{
		soma = soma + i;
	}
	return media = soma / a.size();
}

void main()
{
	vector <int> vetAluno{ 8,7,5 }, vetB{ 1,2,3 }, vetC{ 1,2,3 }, vetD{ 3,2,1 };
	vector <double> juliaNota{8, 8, 8};
	cout << indices(vetAluno, vetB)<<"\n";
}