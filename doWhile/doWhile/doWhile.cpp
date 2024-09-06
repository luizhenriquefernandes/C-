#include <iostream>
#include <ctime>

int main() {
	srand(time(0));
	int valor = rand() % 10;
	std::cout << valor;
	return 0;
}