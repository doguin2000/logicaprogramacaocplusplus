#include <iostream>
#include <locale>
#include <string>
#include <math.h>
using std::cout;
using std::string;
using std::fixed;
//classe pr incipal

int main() {
	setlocale(LC_ALL, "pt-BR.UTF-8");
	cout << "################Programa################\n";
	int x = 10;
	int y = 5;
	int soma = x + y;
	cout << "A soma de " << x << "+" << y << "=" << soma << "\n";
	x = 10;
	y = 2;
	int modulo = x % y;
	cout << "O modulo de " << x << "x" << y << "=" << modulo << "\n";
	double a = 4; 
	double b = 2;
	double exponênciação = pow(a, 1/b);
	double raiz = pow(a, 1/b);
	raiz = sqrt(a);
	cout << "A raiz de " << a << " Raiz " << b << "=" << exponênciação << "\n";
	cout << "##################FIM################\n";
}